#include "PlayScene.h"
#include "GameManager.h"
#include "DrawCircle.h"

PlayScene::PlayScene()
	: SceneBase("PlayScene"), timer(0) {

}

PlayScene::~PlayScene() {
}

void PlayScene::Draw() {
	DrawFormatString(0, 0, GetColor(255, 255, 255), "‚±‚Ìscene‚Íplay‚Å‚·F%d", timer);

	for (auto draw : drawVector) {
		draw->Draw();
	}
}

void PlayScene::Update() {
	if (IsGetDownKey(KEY_INPUT_SPACE)) {
		GetSceneManager().ChangeScene("TitleScene");
	}
	timer++;
}

void PlayScene::init() {
	drawVector.push_back(new CircleDraw(string("ii"), 3, Postion(220, 200, 0), Vector3D(0, 0, 0)));
}