#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"


class CutEllipsoid : public FiguraGeometrica {
protected:
    int xcenter, rx, ycenter, ry, zcenter, rz;
public:
    CutEllipsoid(int _xcenter, int _rx, int _ycenter, int _ry, int _zcenter, int _rz);
    ~CutEllipsoid();
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H


