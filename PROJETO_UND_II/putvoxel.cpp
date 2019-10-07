#include "putvoxel.h"
#include "figurageometrica.h"
#include "sculptor.h"

PutVoxel::PutVoxel(int x, int y, int z) {
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

PutVoxel::draw(Sculptor &t) {

    PutVoxel(int x, int y, int z);
}
