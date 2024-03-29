#include <cmath>
#include "putsphere.h"
#include "sculptor.h"

PutSphere::PutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float _r, float _g, float _b, float _a) {
    xcenter = _xcenter;
    ycenter = _ycenter;
    zcenter = _zcenter;
    radius = _radius;
    r = _r;
    g = _g;
    b = _b;
    a = _a;

}

PutSphere::~PutSphere() {

}

void PutSphere::draw(Sculptor &t) {
    for (int i = (xcenter-radius); i < (xcenter+radius); i++) {
        for (int j = (ycenter-radius); j < (ycenter+radius); j++) {
            for (int k = (zcenter-radius); k < (zcenter+radius); k++) {
                if((pow((i-xcenter),2)+pow((j-ycenter),2)+pow((k-zcenter),2))<=pow(radius,2)){
                    t.setColor(r, g, b, a);
                    t.putVoxel(i,j,k);
                }
            }
        }
    }
}
