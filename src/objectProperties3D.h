#pragma once

#include "vectorOps.h"

class physicsObject3D{
public:
        std::string name;
        Vector3 position;
        double mass;
        Vector3 currentVelocity;

public:
    physicsObject3D(Vector3 position, double mass, Vector3 currentVelocity, std::string name);
    void newPosition(physicsObject3D x, physicsObject3D y, double rateOfEvolution);

};
