#pragma once
#include <iostream>
#include <vector>
#include "SceneBase.h"

using namespace std;

class SceneManager {
private:
	SceneBase* nowScene;
	vector<SceneBase*> sceneList;
public:
	SceneManager();
	~SceneManager();

	SceneBase* GetScene();
	void ChangeScene(string name_);
	vector<SceneBase*> GetSceneList();
	void Draw();
	void Update();
};

