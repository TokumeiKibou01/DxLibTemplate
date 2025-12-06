#pragma once
#include "SceneBase.h"
class TitleScene : public SceneBase {
private:
	int timer;
public:
	TitleScene();
	~TitleScene();

	void Draw() override;
	void Update() override;
	void init() override;
};

