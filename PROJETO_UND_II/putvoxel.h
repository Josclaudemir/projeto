#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"

class PutVoxel : public FiguraGeometrica {
protected:
    int x, y, z;
    float r, g, b;
    float a;
public:
    PutVoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);
    void draw (Sculptor &t);
    ~PutVoxel();
};

#endif // PUTVOXEL_H
