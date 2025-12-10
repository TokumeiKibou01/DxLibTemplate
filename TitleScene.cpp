#include <DxLib.h>
#include "TitleScene.h"
#include "DrawCircle.h"
#include "GameManager.h"

TitleScene::TitleScene()
	: SceneBase("TitleScene"), timer(0) {

}

TitleScene::~TitleScene() {
}

void TitleScene::Draw() {
	DrawFormatString(0, 0, GetColor(255, 255, 255), "‚±‚Ìscene‚Ítitle‚Å‚·F%d", timer);
	
	for (auto draw : drawVector) {
		draw->Draw();
	}
}

void TitleScene::Update() {
	if (IsGetDownKey(KEY_INPUT_SPACE)) {
		GetSceneManager().ChangeScene("PlayScene");
	}
	timer++;
}

void TitleScene::init() {
	drawVector.push_back(new CircleDraw(string("aa"), 3, Postion(100, 100, 0), Vector3D(0, 0, 0)));
}