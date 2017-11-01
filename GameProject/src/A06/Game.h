#pragma once

#include "Scene.h"

class Game {
private:
	Scene * currentScene;
public:
	Game() { };
	~Game() { };
	void Run() { };
};