#include "Player.h"

std::string Player::PLAYER_PATH = "Images/Player1_Front.png";
std::string Player::PLAYER2_PATH = "Images/Player2_Front.png";

const float Player::speed = 10.0f;

Player::Player()
	: Sprite(PLAYER_PATH)
	, playerID(0)
{
	
}

Player::Player(int playerID)
	: playerID(playerID)
{
	//Setup pour les textures des joueurs au début de la partie
	if (playerID == 0)
	{
		SetTexture(&PLAYER_PATH);
	}
	
	if (playerID == 1)
	{
		SetTexture(&PLAYER2_PATH);
	}
}

Player::~Player()
{

}

void Player::Update()
{
	//inputs pour les joueurs
	if (playerID == 0)
	{
		dir =
		{
			cInput->IsKeyPressed(SDL_SCANCODE_LEFT) &&
			(!cInput->IsKeyPressed(SDL_SCANCODE_UP) &&
			!cInput->IsKeyPressed(SDL_SCANCODE_DOWN)) ? -1 : 0 + // for X movements
			cInput->IsKeyPressed(SDL_SCANCODE_RIGHT) &&
			(!cInput->IsKeyPressed(SDL_SCANCODE_UP)) &&
			!cInput->IsKeyPressed(SDL_SCANCODE_DOWN) ? 1 : 0
			,
			cInput->IsKeyPressed(SDL_SCANCODE_UP) ? -1 : 0 + // for Y movements
			cInput->IsKeyPressed(SDL_SCANCODE_DOWN) ? 1 : 0
		};

		cInput->IsKeyPressed(SDL_SCANCODE_0);
	}
	else if (playerID == 1)
	{
		dir =
		{
			cInput->IsKeyPressed(SDL_SCANCODE_A) &&
			(!cInput->IsKeyPressed(SDL_SCANCODE_W) &&
			!cInput->IsKeyPressed(SDL_SCANCODE_S)) ? -1 : 0 + // for X movements
			cInput->IsKeyPressed(SDL_SCANCODE_D) &&
			(!cInput->IsKeyPressed(SDL_SCANCODE_W)) &&
			!cInput->IsKeyPressed(SDL_SCANCODE_S) ? 1 : 0
			,
			cInput->IsKeyPressed(SDL_SCANCODE_W) ? -1 : 0 + // for Y movements
			cInput->IsKeyPressed(SDL_SCANCODE_S) ? 1 : 0
		};

		cInput->IsKeyPressed(SDL_SCANCODE_SPACE);
	}
		//normalize le vecteur pour appliquer le mouvement des différents inputs
		if (Normalize(&dir))
		{
			SetPosition(Add(&GetPosition(), &Scale(&dir, speed)));
		}
}
