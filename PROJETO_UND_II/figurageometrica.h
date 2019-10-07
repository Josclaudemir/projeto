#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
#include "Voxel.h"


class FiguraGeometrica {
    protected:

         Voxel ***v;
         int nx,ny,nz; // Dimensions
public:
    FiguraGeometrica(int qx, int qy, int qz);
    virtual ~FiguraGeometrica();

    virtual void draw (Sculptor &t) = 0;
};

#endif // FIGURAGEOMETRICA_H
