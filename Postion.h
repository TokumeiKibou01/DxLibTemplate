#pragma once

struct Postion {
	float x, y, z;

	void Set(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Subtract(float x, float y, float z) {
		this->x -= x;
		this->y -= y;
		this->z -= z;
	}

	void Add(float x, float y, float z) {
		this->x += x;
		this->y += y;
		this->z += z;
	}

	float Distance(Postion& pos) {
		float xDistance = (pos.x - this->x);
		float yDistance = (pos.y - this->y);
		float zDistance = (pos.z - this->z);
		return sqrt(xDistance * xDistance - yDistance * yDistance - zDistance * zDistance);
	}
};
