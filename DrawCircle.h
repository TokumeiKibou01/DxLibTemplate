#pragma once
#include "DrawBase.h"
class CircleDraw : public DrawBase {
public:
	CircleDraw(std::string name_, int radius, Postion postion_, Vector3D vector_);
	void Draw() override;
	void Update() override;
};

