#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"


class CutSphere : public FiguraGeometrica {
protected:
    int xcenter, ycenter, zcenter, radius;
public:
    CutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius);
    ~CutSphere();
    void draw (Sculptor &t);
};

#endif // CUTSPHERE_H

