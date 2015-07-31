#include "Engine.h"
#include "Game.h"
int main(int argc, char* argv[]) 
{
	Engine::GetInstance()->Init(DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT);
	
	Game* game = new Game();
	
	Engine::GetInstance()->Start();

	delete game;
	
	return 0;
}