#include <DxLib.h>
#include "TitleScene.h"

TitleScene::TitleScene()
	: SceneBase("TitleScene"), timer(0) {
}

TitleScene::~TitleScene() {
}

void TitleScene::Draw() {
	DrawFormatString(0, 0, GetColor(255, 255, 255), "Ç±ÇÃsceneÇÕtitleÇ≈Ç∑ÅF%d", timer);
}

void TitleScene::Update() {
	timer++;
}