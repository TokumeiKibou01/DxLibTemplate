#include "SceneManager.h"
#include "SceneBase.h"
#include "TitleScene.h"
#include "PlayScene.h"

SceneManager::SceneManager() {
	//‚±‚±‚Éscene‚ð’Ç‰Á‚·‚é
	sceneList.push_back(new TitleScene());
	sceneList.push_back(new PlayScene());
}

SceneManager::~SceneManager() {
}

SceneBase* SceneManager::GetScene() {
	if (nowScene == nullptr) {
		nowScene = sceneList[0];
		nowScene->init();
	}
	return nowScene;
}

void SceneManager::ChangeScene(string name_) {
	for (int n = 0; n < sceneList.size(); n++) {
		SceneBase* scene = sceneList[n];
		if (scene->GetName()._Equal(name_)) {
			nowScene = scene;
			nowScene->init();
			break;
		}
	}
}

vector<SceneBase*> SceneManager::GetSceneList() {
	return sceneList;
}

void SceneManager::Draw() {
	SceneBase* scene = GetScene();
	if (scene != nullptr) {
		scene->Draw();
	}
}

void SceneManager::Update() {
	SceneBase* scene = GetScene();
	if (scene != nullptr) {
		scene->Update();
	}
}