#include "DrawCircle.h"

CircleDraw::CircleDraw(string name_, int radius, Postion postion_, Vector3D vector_)
	: DrawBase(name_, radius, radius, postion_, vector_) {

}

void CircleDraw::Draw() {
	DxLib::DrawCircle(GetPostion().x, GetPostion().y, GetWidth(), GetColor(255, 255, 255), true);
}

void CircleDraw::Update() {

}
