#include "objectProperties3D.h"

physicsObject3D::physicsObject3D(Vector3 pos, double m, Vector3 currentVel, std::string name) :
	position(pos), mass(m), currentVelocity(currentVel), name(name) {}
