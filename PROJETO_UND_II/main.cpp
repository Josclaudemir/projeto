#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>

#include "sculptor.h"
#include "figurageometrica.h"
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"

using namespace std;

int main() {
    ifstream fin;
    string s;
    string arqoff = "arqoff";
    stringstream aux;
    Sculptor *figs = nullptr;
    vector <FiguraGeometrica*>fig;

    fin.open("/home/demir/projeto/boneco.txt");
    if (!fin.is_open()){
        exit (0);
    }
    while (fin.good()) {
        getline (fin,s);
        aux.clear();
        aux.str(s);
        aux>>s;

        if (s.compare("dim")==0){
            int x, y, z;
            aux >> x >> y >> z;
            figs = new Sculptor(x, y, z);
        }
        else if (s.compare("putvoxel")==0){
            int x0, y0, z0;
            float r, g, b, a;
            aux >> x0 >> y0 >> z0 >> r >> g >> b >> a;
            fig.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
        }
        else if (s.compare("putbox")==0){
            int x0, x1, y0, y1, z0, z1;
            float r, g, b, a;
            aux >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            fig.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
        }
        else if (s.compare("putsphere")==0){
            int x0, y0, z0, radius;
            float r, g, b, a;
            aux >> x0 >> y0 >> z0 >> radius >> r >> g >> b >> a;
            fig.push_back(new PutSphere(x0, y0, z0, radius, r, g, b, a));
        }
        else if (s.compare("putellipsoid")==0){
            int x0, y0, z0, rx, ry, rz;
            float r, g, b, a;
            aux >> x0 >> rx >> y0 >> ry >> z0 >> rz >> r >> g >> b >> a;
            fig.push_back(new PutEllipsoid(x0, rx, y0, ry, z0, rz, r, g, b, a));
        }
        else if (s.compare("cutvoxel")==0){
            int x0, y0, z0;
            aux >> x0 >> y0 >> z0;
            fig.push_back(new CutVoxel(x0, y0, z0));
        }
        else if (s.compare("cutbox")==0){
            int x0, x1, y0, y1, z0, z1;
            aux >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            fig.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
        }
        else if (s.compare("cutsphere")==0){
            int x0, y0, z0, radius;
            aux >> x0 >> y0 >> z0 >> radius;
            fig.push_back(new CutSphere(x0, y0, z0, radius));
        }

        else if (s.compare("cutellipsoid")==0){
            int x0, y0, z0, rx, ry, rz;
            aux >> x0 >> rx >> y0 >> ry >> z0 >> rz;
            fig.push_back(new CutEllipsoid(x0, rx, y0, ry, z0, rz));
        }
    }

    for (int i = 0; i < fig.size(); i++){
        fig[i]->draw(*figs);
    }
    figs->writeOFF("/home/demir/projeto/boneco.OFF");
    figs->~Sculptor();

    return 0;
}
