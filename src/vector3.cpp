#include<iostream>
#include<cmath>
#include "vector3.h"



		Vector3::Vector3()
			:x(0), y(0), z(0) {}
		Vector3::Vector3(double x, double y, double z)
			: x(x), y(y), z(z) {}

		double Vector3::magnitude() {
			return sqrt(x * x + y * y + z*z);
		}

		void Vector3::operator=(Vector3 other) {
			x = other.x;
			y = other.y;
			z = other.z;
		}

		Vector3 Vector3::operator+(Vector3 other) {
			return Vector3(x + other.x, y + other.y, z + other.z);
		}

		Vector3 Vector3::operator-(Vector3 other) {
			return Vector3(x - other.x, y - other.y, z - other.z);
		}
		Vector3 Vector3::operator*(double f) {
			return Vector3(f * x, f * y, f * z);
		}
		Vector3 Vector3::operator/(double f) {
			return Vector3(x / f, y / f, z / f);
		}

		double Vector3::dot(Vector3& a, Vector3& b) {
			return (a.x * b.x + a.y * b.y + a.z * b.z);
		}

		Vector3 Vector3::cross(Vector3& a, Vector3& b) {
			return Vector3((a.y * b.z - a.z * b.y), (a.z * b.x - a.x * b.z), (a.x * b.y - a.y * b.x));

		}
		Vector3 Vector3::normalize(Vector3& a) {
			if (a.x == 0 && a.y == 0 && a.z == 0) return a;
			return Vector3(a.x / sqrt(a.x * a.x + a.y * a.y + a.z * a.z), a.y / sqrt(a.x * a.x + a.y * a.y + a.z * a.z), a.z / sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
		}



	std::ostream& operator <<(std::ostream& out, Vector3 other) {
		out << "(" << other.x << ", " << other.y << ", " << other.z << ")";
		return out;
	}
