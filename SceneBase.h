#pragma once
#include <iostream>

using namespace std;

class SceneBase {
private:
	string name;
public:
	SceneBase(string name_);
	~SceneBase();

	string GetName() const;
	virtual void Draw();
	virtual void Update();
};

