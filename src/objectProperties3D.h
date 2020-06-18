#pragma once

#include "vector3.h"

class physicsObject3D{
public:
        std::string name;
        Vector3 position;
        double mass;
        Vector3 currentVelocity;

public:
    physicsObject3D(Vector3 position, double mass, Vector3 currentVelocity, std::string name);

};
