#include "putellipsoid.h"
#include "sculptor.h"

PutEllipsoid::PutEllipsoid(int _xcenter, int _rx, int _ycenter, int _ry, int _zcenter, int _rz, float _r, float _g, float _b, float _a) {
    xcenter = _xcenter;
    rx = _rx;
    ycenter = _ycenter;
    ry = _ry;
    zcenter = _zcenter;
    rz = _rz;
    r = _r;
    g = _g;
    b = _b;
    a = _a;
}

PutEllipsoid::~PutEllipsoid() {

}

void PutEllipsoid::draw(Sculptor &t) {
    for (int i = (xcenter-rx); i < (xcenter+rx); i++){
        for (int j = (ycenter-ry); j < (ycenter+ry); j++){
            for (int k = (zcenter-rz); k < (zcenter+rz); k++){
                if((((float)pow((i-xcenter),2)/(float)pow(rx,2))+((float)pow((j-ycenter),2)/(float)pow(ry,2))+((float)pow((k-zcenter),2)/(float)pow(rz,2)))<=1.0){
                    t.setColor(r, g, b, a);
                    t.putVoxel(i,j,k);
                }
            }
        }
    }
}


