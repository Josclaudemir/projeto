#include "sculptor.h"
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <iostream>

using namespace std;

Sculptor::Sculptor(int qx, int qy, int qz) {
    nx = qx;
    ny = qy;
    nz = qz;

    if (nx <= 0 || ny <= 0 || nz <=0){
        nx = ny = nz = 0;
    }

    v = new Voxel**[nx];
    if (v == nullptr){
        exit(0);
    }

    v[0] = new Voxel*[nx*ny];
    if (v[0] == nullptr){
        exit(0);
    }

    v[0][0] = new Voxel[nx*ny*nz];
    if (v[0][0] == nullptr){
        exit(0);
    }

    for (int i = 0; i < nx; i++){
        if (i < (nx-1)){
            v[i+1] = v[i] + ny;
        }
        for (int j = 1; j < ny; j++){
            v[i][j] = v[i][j-1]+nz;
            if (j == (ny-1) && i != (nx-1)){
                v[i+1][0] = v[i][j]+nz;
            }
        }
    }

    for (int i = 0; i < nx; i++){
        for (int j = 0; j < ny; j++){
            for (int k = 0; k < nz; k++){
                v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor() {
    if (nx == 0 || ny == 0 || nz == 0){
        return;
    }
    delete [] v[0][0];
    delete [] v[0];
    delete [] v;
}

void Sculptor::setColor(float r, float g, float b, float alpha) {
    rl = r;
    gl = g;
    bl = b;
    al = alpha;
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
    v[x][y][z].isOn = false;
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
                if ((((float)pow((i - xcenter), 2))/((float)(pow(radius, 2)))) + (((float)pow((j - ycenter), 2))/((float)(pow(radius, 2)))) + ((((float)pow((k - zcenter), 2)))/((float)(pow(radius, 2)))) <= 1.0) {
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
                if ((((float)pow((i - xcenter), 2))/((float)(pow(radius, 2)))) + (((float)pow((j - ycenter), 2))/((float)(pow(radius, 2)))) + ((((float)pow((k - zcenter), 2)))/((float)(pow(radius, 2)))) <= 1.0) {
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
                if (((float)pow((i-xcenter),2)/(pow(rx,2))) + (((float)(pow((j-ycenter),2))/(float)pow(ry,2))) + (((float)pow((k-zcenter),2))/(float)(pow(rz,2))) <= 1.0){
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
                if (((float)pow((i-xcenter),2)/(pow(rx,2))) + (((float)(pow((j-ycenter),2))/(float)pow(ry,2))) + (((float)pow((k-zcenter),2))/(float)(pow(rz,2))) <= 1.0){
                    cutVoxel(i,j,k);
                }
            }
        }
    }
}

void Sculptor::writeOFF(char* filename) {
    char s[nx][ny][nz];
    int nvox = 0, nfc = 0;
    bool surx, sury, surz;

    for (int i = 0; i < nx; i++){
        for (int j = 0; j < ny; j++){
            for (int k = 0; k < nz; k++){
                s[i][j][k] = 0;
            }
        }
    }

    ofstream outfile (filename);
    outfile << "OFF" << endl;

    for (int i = 0; i < nx; i++){
        for (int j = 0; j < ny; j++){
            for (int k = 0; k < nz; k++){
                surx = false;
                sury = false;
                surz = false;

                if (v[i-1][j][k].isOn && v[i+1][j][k].isOn){
                    surx = true;
                }

                if (v[i][j-1][k].isOn && v[i][j+1][k].isOn){
                    sury = true;
                }

                if (v[i][j][k-1].isOn && v[i][j][k+1].isOn){
                    surz = true;
                }

                if (surx && sury && surz) {
                    s[i][j][k] = 1;
                }
            }
        }
    }

    for (int i = 0; i < nx; i++){
        for (int j = 0; j < ny; j++){
            for (int k = 0; k < nz; k++){
                if (v[i][j][k].isOn && (s[i][j][k] == 0)) {
                    nvox++;
                }
            }
        }
    }

    cout << (nvox);
    outfile << 8*nvox << " " << 6*nvox << " " << 0 << std::endl;

    for (int k = 0; k < nz; k++){
        for (int j = 0; j < ny; j++){
            for (int i = 0; i < nx; i++){
                if (v[i][j][k].isOn && (s[i][j][k] == 0)){
                    outfile << -0.5+i << " " << 0.5+j << " " << -0.5+k << endl;
                    outfile << -0.5+i << " " << -0.5+j << " " << -0.5+k << endl;
                    outfile << 0.5+i << " " << -0.5+j << " " << -0.5+k << endl;
                    outfile << 0.5+i << " " << 0.5+j << " " << -0.5+k << endl;
                    outfile << -0.5+i << " " << 0.5+j << " " << 0.5+k << endl;
                    outfile << -0.5+i << " " << -0.5+j << " " << 0.5+k << endl;
                    outfile << 0.5+i << " " << -0.5+j << " " << 0.5+k << endl;
                    outfile << 0.5+i << " " << 0.5+j << " " << 0.5+k << endl;
                }
            }
        }
    }

    for (int k = 0; k < nz; k++){
        for (int j = 0; j < ny; j++){
            for (int i = 0; i < nx; i++){
                if (v[i][j][j].isOn && (s[i][j][k] == 0)){
                    outfile << "4 " << 0+nfc*8 << " " << 3+nfc*8 << " " << 2+nfc*8 << " " << 1+nfc*8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 4+nfc*8 << " " << 5+nfc*8 << " " << 6+nfc*8 << " " << 7+nfc*8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 0+nfc*8 << " " << 1+nfc*8 << " " << 5+nfc*8 << " " << 4+nfc*8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 0+nfc*8 << " " << 4+nfc*8 << " " << 7+nfc*8 << " " << 3+nfc*8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 3+nfc*8 << " " << 7+nfc*8 << " " << 6+nfc*8 << " " << 2+nfc*8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl
                            << "4 " << 1+nfc*8 << " " << 2+nfc*8 << " " << 6+nfc*8 << " " << 5+nfc*8 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    nfc++;
                }
            }
        }
    }

    outfile.close();
}

