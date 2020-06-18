#include "objectProperties3D.h"
#define G 6.67430e-11

physicsObject3D::physicsObject3D(Vector3 pos, double m, Vector3 currentVel, std::string name) :
	position(pos), mass(m), currentVelocity(currentVel), name(name) {}

void physicsObject3D::newPosition(physicsObject3D x, physicsObject3D y, double rateOfEvolution) {
	Vector3 temp = position;
	position = position + currentVelocity * rateOfEvolution + ((Vector3::normalize(x.position) * (x.mass / (x.position - position).magnitude() * (x.position - position).magnitude())) + (Vector3::normalize(y.position) * (y.mass / (y.position - position).magnitude() * (y.position - position).magnitude()))) * G * rateOfEvolution * rateOfEvolution;
	currentVelocity = (position - temp) / rateOfEvolution;
}