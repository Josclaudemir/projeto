#include "figurageometrica.h"

FiguraGeometrica::FiguraGeometrica(int qx, int qy, int qz) {
    nx = qx;
    ny = qy;
    nz = qz;

    v = new Voxel**[nx];
    v[0] = new Voxel*[nx*ny];
    v[0][0] = new Voxel[nx*ny*nz];

    for (int i = 0; i < nx; i++){
            v[i+1] = v[i] + ny;
    }

    for (int j = 1; j < nx*ny; j++){
        v[0][j]=v[0][j-1]+nz;
    }

    for (int i = 0; i < nx; i++){
        for (int j = 0; j < ny; j++){
            for (int k = 0; k < nz; k++){
                v[i][j][k].isOn = false;
            }
        }
    }
}

FiguraGeometrica::~FiguraGeometrica() {
    delete [] v[0][0];
    delete [] v[0];
    delete [] v;
}
