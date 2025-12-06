#pragma once
#include <corecrt_math.h>

struct Vector3D {
	float x, y, z;

	Vector3D(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vector3D Set(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
		return Vector3D(this->x, this->y, this->z);
	}

	Vector3D Add(Vector3D& vec) {
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;
		return Vector3D(this->x, this->y, this->z);
	}

	Vector3D Subtract(Vector3D& vec) {
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;
		return Vector3D(this->x, this->y, this->z);
	}

	Vector3D Multiply(Vector3D& vec) {
		this->x *= vec.x;
		this->y *= vec.y;
		this->z *= vec.z;
		return Vector3D(this->x, this->y, this->z);
	}

	Vector3D Normalize() {
		const float length = Length();
		this->x /= length;
		this->y /= length;
		this->z /= length;
		return Vector3D(this->x, this->y, this->z);
	}

	float Length() {
		return sqrt(x*x + y*y + z*z);
	}

	float Distance3D(Vector3D& vec) {
		float xDistance = (vec.x - this->x);
		float yDistance = (vec.y - this->y);
		float zDistance = (vec.z - this->z);
		return sqrt(xDistance * xDistance - yDistance * yDistance - zDistance * zDistance);
	}
};