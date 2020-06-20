#include "objectProperties3D.h"
#include<iostream>

using namespace std;

int main(){

    Vector3 a(0,0,0);
    double mass = 1;
    Vector3 v(0,0,0);
    physicsObject3D x(a,mass,v, "x");
    

    Vector3 a2(1,2,0);
    double mass2 = 1000.0;
    Vector3 v2(0,0,0);
    physicsObject3D y(a2,mass2,v2, "y");
    

    Vector3 a3(-1,-3,0);
    double mass3 = 1.0;
    Vector3 v3(0,0,0);
    physicsObject3D z(a3, mass3, v3, "z");
    
    double rateOfEvolution = 1.2;
    physicsObject3D temp1(x.position, x.mass, x.currentVelocity, "temp1"), temp2(y.position, y.mass, y.currentVelocity, "temp2"), temp3(z.position, z.mass, z.currentVelocity, "temp3");
    for (int i = 0; i < 1000; i++) {
        temp1.position = x.position;
        temp1.mass = x.mass;
        temp1.currentVelocity = x.currentVelocity;
        temp2.position = y.position;
        temp2.mass = y.mass;
        temp2.currentVelocity = y.currentVelocity;
        temp3.position = z.position;
        temp3.mass = z.mass;
        temp3.currentVelocity = z.currentVelocity;
        x.newPosition(temp2, temp3, rateOfEvolution);
        y.newPosition(temp1, temp3, rateOfEvolution);
        z.newPosition(temp1, temp2, rateOfEvolution);
        cout << x.position << "\t" << y.position << "\t" << z.position << endl;
        
    }


    return 0;
}


