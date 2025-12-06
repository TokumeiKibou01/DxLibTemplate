#include "DrawBase.h"

DrawBase::DrawBase(string name_, int width_, int height_, Postion postion_, Vector3D vector_) 
	: name(name_), width(width_), height(height_), postion(postion_), vector(vector_) {
}

DrawBase::~DrawBase() {
}

void DrawBase::Draw() {

}

void DrawBase::Update() {

}