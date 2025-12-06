#pragma once
#include "SceneBase.h"
class PlayScene : public SceneBase {
private:
	int timer;
public:
	PlayScene();
	~PlayScene();

	void Draw() override;
	void Update() override;
	void init() override;
};


