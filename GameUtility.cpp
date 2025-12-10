#include "GameUtility.h"
#include <DxLib.h>

namespace KeyInput {
	const int KEYCOUNT = 256;
	char beforeKeyBuf[KEYCOUNT] = {};
	char afterKeyBuf[KEYCOUNT] = {};

	char fixDownKeyBuf[KEYCOUNT] = {};
}

void GameUtility::DrawFixText(DrawType type, int x, int y, int size, unsigned int text_color, unsigned int edge_color, std::string text) {
    SetFontSize(size);
    int strWidth = GetDrawStringWidth(text.c_str(), strlen(text.c_str()));
    if (type == DrawType::LEFT) {
        //
    }
    else if (type == DrawType::RIGHT) {
        x -= strWidth;
    }
    else if (type == DrawType::CENTER) {
        x -= strWidth / 2;
        y -= size / 2;
    }


    DrawString(x, y, text.c_str(), text_color, edge_color);
}

void updateKey() {
	memcpy_s(KeyInput::beforeKeyBuf, sizeof(char) * KeyInput::KEYCOUNT, KeyInput::afterKeyBuf, sizeof(char) * KeyInput::KEYCOUNT); //after（後フレーム）から before（前フレーム）にコピー
	GetHitKeyStateAll(KeyInput::afterKeyBuf); //後フレームに代入

	for (int n = 0; n < KeyInput::KEYCOUNT; n++) {
		int key_xor = KeyInput::beforeKeyBuf[n] ^ KeyInput::afterKeyBuf[n]; //前と後が0と1なら、1を返す（XOR）
		KeyInput::fixDownKeyBuf[n] = key_xor & KeyInput::afterKeyBuf[n]; //押された瞬間 = (XORと後フレームのANDを取る) 
	}
}

bool IsGetDownKey(int key) {
	return KeyInput::fixDownKeyBuf[key];
}