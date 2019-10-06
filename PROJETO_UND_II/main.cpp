#include <iostream>
#include"sculptor.h"

using namespace std;

int main() {
    Sculptor Sculptor(80, 80, 80);

    Sculptor.setColor(0.3, 0.7, 0.5, 0.5);
    Sculptor.putVoxel(0,0,0);
    Sculptor.putVoxel(1,1,1);
    Sculptor.cutVoxel(1,1,1);
    Sculptor.putBox(2,12,2,12,2,12);
    Sculptor.cutBox(4,10,4,10,4,12);
    Sculptor.putSphere(20,20,20,10);
    Sculptor.cutSphere(20,20,20,9);
    Sculptor.putEllipsoid(40,40,40,15,15,30);
    Sculptor.cutEllipsoid(40,40,40,14,14,29);
    Sculptor.writeOFF("/home/demir/projeto/teste.OFF");
    return 0;
}
