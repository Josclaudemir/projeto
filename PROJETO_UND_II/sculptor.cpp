#include "sculptor.h"
#include <string>
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

Sculptor::Sculptor(float r, float g, float b, float alpha) {
    this -> rl = r;
    this -> gl = g;
    this -> bl = b;
    this -> al = alpha;
}

Sculptor::~Sculptor() {

}

void Sculptor::putVoxel(int x, int y, int z) {
    if ((x>=nx) || (y>=ny) || (z>=nz)){
        return;
    }
    if ((x<0) || (y<0) || (z<0)){
        return;
    }
    v[x][y][z].isOn = true;
    v[x][y][z].r = rl;
    v[x][y][z].g = gl;
    v[x][y][z].b = bl;
    v[x][y][z].a = al;
}

void Sculptor::cutVoxel(int x, int y, int z) {
    if(x>=0 && y>=0 && z>=0 && x<nx && y<ny && z<nz){
        v[x][y][z].isOn = false;
    }
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1) {
    for (int i = x0; i < x1; i++){
        for (int j = y0; j < y1; j++){
            for (int k = z0; k < z1; k++){
                putVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1) {
    for (int i = x0; i < x1; i++){
        for (int j = y0; j < y1; j++){
            for (int k = z0; k < z1; k++){
                cutVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius) {
    for (int i = (xcenter-radius); i < (xcenter+radius); i++) {
        for (int j = (ycenter-radius); j < (ycenter+radius); j++) {
            for (int k = (zcenter-radius); k < (zcenter+radius); k++) {
                if((pow((i-xcenter),2)+pow((j-ycenter),2)+pow((k-zcenter),2))<=pow(radius,2)){
                    putVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius) {
    for (int i = (xcenter-radius); i < (xcenter+radius); i++) {
        for (int j = (ycenter-radius); j < (ycenter+radius); j++) {
            for (int k = (zcenter-radius); k < (zcenter+radius); k++) {
                if((pow((i-xcenter),2)+pow((j-ycenter),2)+pow((k-zcenter),2))<=pow(radius,2)){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz) {
    for (int i = (xcenter-rx); i < (xcenter+rx); i++){
        for (int j = (ycenter-ry); j < (ycenter+ry); j++){
            for (int k = (zcenter-rz); k < (zcenter+rz); k++){
                if((((float)pow((i-xcenter),2)/(float)pow(rx,2))+((float)pow((j-ycenter),2)/(float)pow(ry,2))+((float)pow((k-zcenter),2)/(float)pow(rz,2)))<=1.0){
                    putVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz) {
    for (int i = (xcenter-rx); i < (xcenter+rx); i++){
        for (int j = (ycenter-ry); j < (ycenter+ry); j++){
            for (int k = (zcenter-rz); k < (zcenter+rz); k++){
                if((((float)pow((i-xcenter),2)/(float)pow(rx,2))+((float)pow((j-ycenter),2)/(float)pow(ry,2))+((float)pow((k-zcenter),2)/(float)pow(rz,2)))<=1.0){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::writeOFF(char* filename) {
    int n_vertices = 0, n_faces = 0, n_arestas = 0;
            ofstream fileout;
            fileout.open(filename);
            if(!fileout.is_open()){
                exit(0);
            }
            for(int i = 0; i < nx; i++){
                for(int j = 0; j < ny; j++){
                    for(int k = 0; k < nz; k++){
                        if(v[i][j][k].isOn){
                            n_vertices += 8;
                            n_faces += 6;
                        }
                    }
                }
            }
            fileout<<"OFF"<<endl;
            fileout<<n_vertices<<" "<<n_faces<<" "<<n_arestas<<endl;

            for(int i = 0; i < nx; i++){
                for(int j = 0; j < ny; j++){
                    for(int k = 0; k < nz; k++){
                        if(v[i][j][k].isOn){
                            fileout<<i-0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                            fileout<<i-0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                            fileout<<i+0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                            fileout<<i+0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                            fileout<<i-0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                            fileout<<i-0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                            fileout<<i+0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                            fileout<<i+0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                        }
                    }
                }
            }
            int aux = 0;
            for(int i = 0; i < nx; i++){
                for(int j = 0; j < ny; j++){
                    for(int k = 0; k < nz; k++){
                        if(v[i][j][k].isOn){
                            fileout<<"4 "<<0+8*aux<<" "<<3+8*aux<<" "<<2+8*aux<<" "<<1+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                            fileout<<"4 "<<4+8*aux<<" "<<5+8*aux<<" "<<6+8*aux<<" "<<7+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                            fileout<<"4 "<<0+8*aux<<" "<<1+8*aux<<" "<<5+8*aux<<" "<<4+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                            fileout<<"4 "<<0+8*aux<<" "<<4+8*aux<<" "<<7+8*aux<<" "<<3+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                            fileout<<"4 "<<3+8*aux<<" "<<7+8*aux<<" "<<6+8*aux<<" "<<2+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                            fileout<<"4 "<<1+8*aux<<" "<<2+8*aux<<" "<<6+8*aux<<" "<<5+8*aux<<" "<<v[i][j][k].r<<" "<<v[i][j][k].g<<" "<<v[i][j][k].b<<" "<<v[i][j][k].a<<endl;
                            aux++;
                        }
                    }
                }
            }
            fileout.close();
}

