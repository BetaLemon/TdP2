#pragma once
#include <SDL.h>		// Always needs to be included for an SDL app
#include <SDL_image.h>	// Fons de pantalla - personatge - moviment
#include <SDL_ttf.h>	// Fonts - textos - botons
#include <SDL_mixer.h>  // Música - sons

class Scene {
	//protected background;

private:

public:
	Scene() { };
	~Scene() { };
	virtual void EventsHandler();
	virtual void Update();
	virtual void Draw();
};