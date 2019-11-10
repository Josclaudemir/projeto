#include "cutellipsoid.h"
#include "sculptor.h"

CutEllipsoid::CutEllipsoid(int _xcenter, int _rx, int _ycenter, int _ry, int _zcenter, int _rz) {
    xcenter = _xcenter;
    rx = _rx;
    ycenter = _ycenter;
    ry = _ry;
    zcenter = _zcenter;
    rz = _rz;
}

CutEllipsoid::~CutEllipsoid() {

}

void CutEllipsoid::draw(Sculptor &t) {
    for (int i = (xcenter-rx); i < (xcenter+rx); i++){
        for (int j = (ycenter-ry); j < (ycenter+ry); j++){
            for (int k = (zcenter-rz); k < (zcenter+rz); k++){
                if((((float)pow((i-xcenter),2)/(float)pow(rx,2))+((float)pow((j-ycenter),2)/(float)pow(ry,2))+((float)pow((k-zcenter),2)/(float)pow(rz,2)))<=1.0){
                    t.cutVoxel(i,j,k);
                }
            }
        }
    }
}


