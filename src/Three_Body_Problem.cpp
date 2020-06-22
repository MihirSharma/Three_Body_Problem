#include "objectProperties3D.h"
#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fout1,fout2,fout3;
    fout1.open("logObj1.txt");
    fout2.open("logObj2.txt");
    fout3.open("logObj3.txt");
    Vector3 a(-10,3,-2);
    double mass = 1.0;
    Vector3 v(0,0,0);
    physicsObject3D x(a,mass,v, "x");
    

    Vector3 a2(-26, 19, 12);
    double mass2 = 1.0;
    Vector3 v2(0,0,0);
    physicsObject3D y(a2,mass2,v2, "y");
    

    Vector3 a3(3,-21, 16);
    double mass3 = 1.0;
    Vector3 v3(0,0,0);
    physicsObject3D z(a3, mass3, v3, "z");
    Vector3 centroid;
    double rateOfEvolution = 100;
    physicsObject3D temp1(x.position, x.mass, x.currentVelocity, "temp1"), temp2(y.position, y.mass, y.currentVelocity, "temp2"), temp3(z.position, z.mass, z.currentVelocity, "temp3");
    for (int i = 0; i < 1000000; i++) {
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
        centroid = (x.position + y.position + z.position) / 3;
        fout1 << centroid - x.position << endl;
        fout2 << centroid - y.position << endl;
        fout3 << centroid - z.position << endl;
        
    }
    
    fout1.close();
    fout2.close();
    fout3.close();


    system("python plot.py");

    return 0;
}


