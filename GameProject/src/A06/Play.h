#pragma once

class Play : Scene {
public:
	Play();
	~Play();
	void EventsHandler () override { };
	void Update() override { };
	void Draw() override { };
};