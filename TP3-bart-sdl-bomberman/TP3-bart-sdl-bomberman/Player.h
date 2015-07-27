#pragma once
#include "Sprite.h"
#include "Grid.h"
//#include "Bomb.h" to be included later

class Player :
	public Sprite
{
public:
	Player();
	Player(int playerID);
	~Player();

	void Update();
	Rectangle GetRect(){ return rect; }

private:

	static std::string PLAYER_PATH;
	static std::string PLAYER2_PATH;

	static const float speed;

	Vector2D dir;
	Rectangle rect;

	int playerID;

};

