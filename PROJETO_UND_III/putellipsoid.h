#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"


class PutEllipsoid : public FiguraGeometrica {
protected:
    int xcenter, rx, ycenter, ry, zcenter, rz;
    float r, g, b, a;
public:
    PutEllipsoid(int _xcenter, int _rx, int _ycenter, int _ry, int _zcenter, int _rz, float _r, float _g, float _b, float _a);
    ~PutEllipsoid();
    void draw (Sculptor &t);
};

#endif // PUTELLIPSOID_H


