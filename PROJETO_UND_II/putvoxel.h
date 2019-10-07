#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

class PutVoxel : public FiguraGeometrica
{
public:
    PutVoxel(nt x, int y, int z);
    draw (Sculptor &t);
};

#endif // PUTVOXEL_H
