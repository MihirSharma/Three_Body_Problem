#include "objectProperties3D.h"
#include<iostream>
#include "vector3.h"

int main(){

    Vector3 a(2.0,3.0,4.0);
    double mass = 10.0;
    Vector3 v(5.0,6.0,4.0);
    physicsObject3D x(a,mass,v, "a");
    std::cout<<x.name<<std::endl;

    Vector3 a2(2.0,3.0,4.0);
    double mass2 = 10.0;
    Vector3 v2(5.0,6.0,4.0);
    physicsObject3D y(a2,mass2,v2,"y");
    std::cout<<y.name;

    return 0;
}
