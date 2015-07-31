#include "Engine.h"

#define WIDTH 1000
#define HEIGTH 1200

int main(int argc, char* argv[])
{
	// Size of the play screen
	Engine::GetInstance()->Init(WIDTH, HEIGTH);


	return 0;
}