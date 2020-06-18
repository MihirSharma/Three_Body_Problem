#include "objectProperties3D.h"
#include<iostream>

using namespace std;

int main(){

    Vector3 a(0,0,0);
    double mass = 100000000000.0;
    Vector3 v(100000,10000*0.41421,1);
    physicsObject3D x(a,mass,v, "x");
    

    Vector3 a2(1000000,1000000,0);
    double mass2 = 100000000000.0;
    Vector3 v2(0,1000000- 10000 * 0.41421,1);
    physicsObject3D y(a2,mass2,v2, "y");
    

    Vector3 a3(2000000,0,0);
    double mass3 = 100000000000.0;
    Vector3 v3(-100000, 10000 * 0.41421, 1);
    physicsObject3D z(a3, mass3, v3, "z");
    
    double rateOfEvolution = 1.0;

    for (int i = 0; i < 1000; i++) {
        physicsObject3D temp1(x.position,x.mass,x.currentVelocity,"temp1"), temp2(y.position, y.mass, y.currentVelocity, "temp2"), temp3(z.position, z.mass, z.currentVelocity, "temp3");
        x.newPosition(temp2,temp3,rateOfEvolution);
        y.newPosition(temp1, temp3, rateOfEvolution);
        z.newPosition(temp1, temp2, rateOfEvolution);
        cout << x.position << "\t" << y.position << "\t" << z.position << endl;
    }


    return 0;
}
