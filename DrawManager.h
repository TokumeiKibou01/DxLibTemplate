#pragma once
#include <map>
#include <vector>
#include "DrawBase.h"
#include "SceneBase.h"

using namespace std;

class DrawManager {
private:
	
public:
	map<string, vector<DrawBase*>> drawMap;
};
