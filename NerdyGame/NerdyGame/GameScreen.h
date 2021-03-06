#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <irrlicht.h>

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class GameScreen {
public:

	GameScreen();
	static ISceneManager* smgr;
	static IVideoDriver* driver;
	static IGUIEnvironment* guienv;
	void Update();

private:
};
#endif