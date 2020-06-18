#pragma once
#include<iostream>


class Vector3 {
private:
public:
	double x, y, z;
	Vector3();
	Vector3(double a, double b, double c);
	friend std::ostream& operator<<(std::ostream& out, Vector3 other);
	float magnitude();
	void operator=(Vector3 other);
	Vector3 operator+(Vector3 other);
	Vector3 operator-(Vector3 other);
	Vector3 operator*(float f);
	Vector3 operator/(float f);
	static float dot(Vector3& a, Vector3& b);
	static Vector3 cross(Vector3& a, Vector3& b);
	static Vector3 normalize(Vector3& a);
};
