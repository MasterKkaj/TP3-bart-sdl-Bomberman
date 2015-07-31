#pragma once
#include "Component.h"
#include "Bloc_Destructible.h"
#include "Blocs_Indestructible.h"
#include "Bloc_Bomb.h"
#include "Bloc_Fire.h"
#include "Player.h"

class Game :
	public Component
{
public:
	Game();
	~Game();

	void Update();
	bool CollisionFireBlocs();
	bool CollisionFirePlayer();
	bool CollisionBlocsPlayer();

private:
	std::vector<Bloc_Destructible*> destructibles;
	std::vector<Blocs_Indestructible*> indestructibles;
	std::vector<Bloc_Bomb*> bombs;
	std::vector<Bloc_Fire*> fires;
	std::vector<Player*> player1;
	std::vector<Player*> player2;

	int currentPlayer1;
	int currentPlayer2;
};

