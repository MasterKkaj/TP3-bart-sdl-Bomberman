#include "Game.h"

Game::Game()
	: currentPlayer1(0)
	, currentPlayer2(0)
{
	//Ajouter le Background
	Sprite* grass1 = new Sprite("Images/Grass.png");
	grass1->SetPosition(0, 0);
	Sprite* grass2 = new Sprite("Images/Grass.png");
	grass2->SetPosition(100, 0);
	Sprite* grass3 = new Sprite("Images/Grass.png");
	grass3->SetPosition(200, 0);
	Sprite* grass4 = new Sprite("Images/Grass.png");
	grass4->SetPosition(300, 0);
	Sprite* grass5 = new Sprite("Images/Grass.png");
	grass5->SetPosition(400, 0);
	Sprite* grass6 = new Sprite("Images/Grass.png");
	grass6->SetPosition(500, 0);
	Sprite* grass7 = new Sprite("Images/Grass.png");
	grass7->SetPosition(600, 0);
	Sprite* grass8 = new Sprite("Images/Grass.png");
	grass8->SetPosition(700, 0);
	Sprite* grass9 = new Sprite("Images/Grass.png");
	grass9->SetPosition(0, 100);
	Sprite* grass10 = new Sprite("Images/Grass.png");
	grass10->SetPosition(0, 200);
	Sprite* grass11 = new Sprite("Images/Grass.png");
	grass11->SetPosition(0, 300);
	Sprite* grass12 = new Sprite("Images/Grass.png");
	grass12->SetPosition(0, 400);
	Sprite* grass13 = new Sprite("Images/Grass.png");
	grass13->SetPosition(0, 500);
	Sprite* grass14 = new Sprite("Images/Grass.png");
	grass14->SetPosition(100, 100);
	Sprite* grass15 = new Sprite("Images/Grass.png");
	grass15->SetPosition(100, 200);
	Sprite* grass16 = new Sprite("Images/Grass.png");
	grass16->SetPosition(100, 300);
	Sprite* grass17 = new Sprite("Images/Grass.png");
	grass17->SetPosition(100, 400);
	Sprite* grass18 = new Sprite("Images/Grass.png");
	grass18->SetPosition(100, 500);
	Sprite* grass19 = new Sprite("Images/Grass.png");
	grass19->SetPosition(200, 100);
	Sprite* grass20 = new Sprite("Images/Grass.png");
	grass20->SetPosition(200, 200);
	Sprite* grass21 = new Sprite("Images/Grass.png");
	grass21->SetPosition(200, 300);
	Sprite* grass22 = new Sprite("Images/Grass.png");
	grass22->SetPosition(200, 400);
	Sprite* grass23 = new Sprite("Images/Grass.png");
	grass23->SetPosition(200, 500);
	Sprite* grass24 = new Sprite("Images/Grass.png");
	grass24->SetPosition(300, 100);
	Sprite* grass25 = new Sprite("Images/Grass.png");
	grass25->SetPosition(300, 200);
	Sprite* grass26 = new Sprite("Images/Grass.png");
	grass26->SetPosition(300, 300);
	Sprite* grass27 = new Sprite("Images/Grass.png");
	grass27->SetPosition(300, 400);
	Sprite* grass28 = new Sprite("Images/Grass.png");
	grass28->SetPosition(300, 500);
	Sprite* grass29 = new Sprite("Images/Grass.png");
	grass29->SetPosition(400, 100);
	Sprite* grass30 = new Sprite("Images/Grass.png");
	grass30->SetPosition(400, 200);
	Sprite* grass31 = new Sprite("Images/Grass.png");
	grass31->SetPosition(400, 300);
	Sprite* grass32 = new Sprite("Images/Grass.png");
	grass32->SetPosition(400, 400);
	Sprite* grass33 = new Sprite("Images/Grass.png");
	grass33->SetPosition(400, 500);
	Sprite* grass34 = new Sprite("Images/Grass.png");
	grass34->SetPosition(500, 100);
	Sprite* grass35 = new Sprite("Images/Grass.png");
	grass35->SetPosition(500, 200);
	Sprite* grass36 = new Sprite("Images/Grass.png");
	grass36->SetPosition(500, 300);
	Sprite* grass37 = new Sprite("Images/Grass.png");
	grass37->SetPosition(500, 400);
	Sprite* grass38 = new Sprite("Images/Grass.png");
	grass38->SetPosition(500, 500);
	Sprite* grass39 = new Sprite("Images/Grass.png");
	grass39->SetPosition(600, 100);
	Sprite* grass40 = new Sprite("Images/Grass.png");
	grass40->SetPosition(600, 200);
	Sprite* grass41 = new Sprite("Images/Grass.png");
	grass41->SetPosition(600, 300);
	Sprite* grass42 = new Sprite("Images/Grass.png");
	grass42->SetPosition(600, 400);
	Sprite* grass43 = new Sprite("Images/Grass.png");
	grass43->SetPosition(600, 500);
	Sprite* grass44 = new Sprite("Images/Grass.png");
	grass44->SetPosition(700, 100);
	Sprite* grass45 = new Sprite("Images/Grass.png");
	grass45->SetPosition(700, 200);
	Sprite* grass46 = new Sprite("Images/Grass.png");
	grass46->SetPosition(700, 300);
	Sprite* grass47 = new Sprite("Images/Grass.png");
	grass47->SetPosition(700, 400);
	Sprite* grass48 = new Sprite("Images/Grass.png");
	grass48->SetPosition(700, 500);


	//Ajouter les blocs
		//Les blocs indestructibles
	Blocs_Indestructible* indestructible1 = new Blocs_Indestructible();
	indestructible1->SetPosition(75, 75);
	indestructibles.push_back(indestructible1);
	
	Blocs_Indestructible* indestructible2 = new Blocs_Indestructible();
	indestructible2->SetPosition(175, 75);
	indestructibles.push_back(indestructible2);
	
	Blocs_Indestructible* indestructible3 = new Blocs_Indestructible();
	indestructible3->SetPosition(275, 75);
	indestructibles.push_back(indestructible3);
	
	Blocs_Indestructible* indestructible4 = new Blocs_Indestructible();
	indestructible4->SetPosition(375, 75);
	indestructibles.push_back(indestructible4);
	
	Blocs_Indestructible* indestructible5 = new Blocs_Indestructible();
	indestructible5->SetPosition(475, 75);
	indestructibles.push_back(indestructible5);
	
	Blocs_Indestructible* indestructible6 = new Blocs_Indestructible();
	indestructible6->SetPosition(575, 75);
	indestructibles.push_back(indestructible6);
	
	Blocs_Indestructible* indestructible7 = new Blocs_Indestructible();
	indestructible7->SetPosition(675, 75);
	indestructibles.push_back(indestructible7);
	
	Blocs_Indestructible* indestructible8 = new Blocs_Indestructible();
	indestructible8->SetPosition(75, 175);
	indestructibles.push_back(indestructible8);
	
	Blocs_Indestructible* indestructible9 = new Blocs_Indestructible();
	indestructible9->SetPosition(75, 275);
	indestructibles.push_back(indestructible9);
	
	Blocs_Indestructible* indestructible10 = new Blocs_Indestructible();
	indestructible10->SetPosition(75, 375);
	indestructibles.push_back(indestructible10);
	
	Blocs_Indestructible* indestructible11 = new Blocs_Indestructible();
	indestructible11->SetPosition(75, 475);
	indestructibles.push_back(indestructible11);
	
	Blocs_Indestructible* indestructible12 = new Blocs_Indestructible();
	indestructible12->SetPosition(175, 175);
	indestructibles.push_back(indestructible12);
	
	Blocs_Indestructible* indestructible13 = new Blocs_Indestructible();
	indestructible13->SetPosition(175, 275);
	indestructibles.push_back(indestructible13);
	
	Blocs_Indestructible* indestructible14 = new Blocs_Indestructible();
	indestructible14->SetPosition(175, 375);
	indestructibles.push_back(indestructible14);
	
	Blocs_Indestructible* indestructible15 = new Blocs_Indestructible();
	indestructible15->SetPosition(175, 475);
	indestructibles.push_back(indestructible15);
	
	Blocs_Indestructible* indestructible16 = new Blocs_Indestructible();
	indestructible16->SetPosition(275, 175);
	indestructibles.push_back(indestructible16);
	
	Blocs_Indestructible* indestructible17 = new Blocs_Indestructible();
	indestructible17->SetPosition(275, 275);
	indestructibles.push_back(indestructible17);
	
	Blocs_Indestructible* indestructible18 = new Blocs_Indestructible();
	indestructible18->SetPosition(275, 375);
	indestructibles.push_back(indestructible18);
	
	Blocs_Indestructible* indestructible19 = new Blocs_Indestructible();
	indestructible19->SetPosition(275, 475);
	indestructibles.push_back(indestructible19);
	
	Blocs_Indestructible* indestructible20 = new Blocs_Indestructible();
	indestructible20->SetPosition(375, 175);
	indestructibles.push_back(indestructible20);
	
	Blocs_Indestructible* indestructible21 = new Blocs_Indestructible();
	indestructible21->SetPosition(375, 275);
	indestructibles.push_back(indestructible21);
	
	Blocs_Indestructible* indestructible22 = new Blocs_Indestructible();
	indestructible22->SetPosition(375, 375);
	indestructibles.push_back(indestructible22);
	
	Blocs_Indestructible* indestructible23 = new Blocs_Indestructible();
	indestructible23->SetPosition(375, 475);
	indestructibles.push_back(indestructible23);
	
	Blocs_Indestructible* indestructible24 = new Blocs_Indestructible();
	indestructible24->SetPosition(475, 175);
	indestructibles.push_back(indestructible24);
	
	Blocs_Indestructible* indestructible25 = new Blocs_Indestructible();
	indestructible25->SetPosition(475, 275);
	indestructibles.push_back(indestructible25);
	
	Blocs_Indestructible* indestructible26 = new Blocs_Indestructible();
	indestructible26->SetPosition(475, 375);
	indestructibles.push_back(indestructible26);
	
	Blocs_Indestructible* indestructible27 = new Blocs_Indestructible();
	indestructible27->SetPosition(475, 475);
	indestructibles.push_back(indestructible27);
	
	Blocs_Indestructible* indestructible28 = new Blocs_Indestructible();
	indestructible28->SetPosition(575, 175);
	indestructibles.push_back(indestructible28);
	
	Blocs_Indestructible* indestructible29 = new Blocs_Indestructible();
	indestructible29->SetPosition(575, 275);
	indestructibles.push_back(indestructible29);
	
	Blocs_Indestructible* indestructible30 = new Blocs_Indestructible();
	indestructible30->SetPosition(575, 375);
	indestructibles.push_back(indestructible30);
	
	Blocs_Indestructible* indestructible31 = new Blocs_Indestructible();
	indestructible31->SetPosition(575, 475);
	indestructibles.push_back(indestructible31);
	
	Blocs_Indestructible* indestructible32 = new Blocs_Indestructible();
	indestructible32->SetPosition(675, 175);
	indestructibles.push_back(indestructible32);
	
	Blocs_Indestructible* indestructible33 = new Blocs_Indestructible();
	indestructible33->SetPosition(675, 275);
	indestructibles.push_back(indestructible33);
	
	Blocs_Indestructible* indestructible34 = new Blocs_Indestructible();
	indestructible34->SetPosition(675, 375);
	indestructibles.push_back(indestructible34);
	
	Blocs_Indestructible* indestructible35 = new Blocs_Indestructible();
	indestructible35->SetPosition(675, 475);
	indestructibles.push_back(indestructible35);
	
	
		//Les blocs destructibles
	Bloc_Destructible* destructible1 = new Bloc_Destructible();
	destructible1->SetPosition(75, 125);					 
	destructibles.push_back(destructible1);					 
															 
	Bloc_Destructible* destructible2 = new Bloc_Destructible();
	destructible2->SetPosition(125, 125);					 
	destructibles.push_back(destructible2);					 
															 
	Bloc_Destructible* destructible3 = new Bloc_Destructible();
	destructible3->SetPosition(125, 75);					 
	destructibles.push_back(destructible3);					 
															 
	Bloc_Destructible* destructible4 = new Bloc_Destructible();
	destructible4->SetPosition(225, 225);					 
	destructibles.push_back(destructible4);					 
															 
	Bloc_Destructible* destructible5 = new Bloc_Destructible();
	destructible5->SetPosition(125, 225);					 
	destructibles.push_back(destructible5);					 
															 
	Bloc_Destructible* destructible6 = new Bloc_Destructible();
	destructible6->SetPosition(125, 325);					 
	destructibles.push_back(destructible6);					 
															 
	Bloc_Destructible* destructible7 = new Bloc_Destructible();
	destructible7->SetPosition(225, 425);					 
	destructibles.push_back(destructible7);					 
															 
	Bloc_Destructible* destructible8 = new Bloc_Destructible();
	destructible8->SetPosition(225, 525);					
	destructibles.push_back(destructible8);					
															
	Bloc_Destructible* destructible9 = new Bloc_Destructible();
	destructible9->SetPosition(225, 625);
	destructibles.push_back(destructible9);
	
	Bloc_Destructible* destructible10 = new Bloc_Destructible();
	destructible10->SetPosition(225, 725);
	destructibles.push_back(destructible10);
	
	Bloc_Destructible* destructible11 = new Bloc_Destructible();
	destructible11->SetPosition(275, 125);
	destructibles.push_back(destructible11);
	
	Bloc_Destructible* destructible12 = new Bloc_Destructible();
	destructible12->SetPosition(225, 125);
	destructibles.push_back(destructible12);
	
	Bloc_Destructible* destructible13 = new Bloc_Destructible();
	destructible13->SetPosition(125, 375);
	destructibles.push_back(destructible13);
	
	Bloc_Destructible* destructible14 = new Bloc_Destructible();
	destructible14->SetPosition(425, 425);
	destructibles.push_back(destructible14);
	
	Bloc_Destructible* destructible15 = new Bloc_Destructible();
	destructible15->SetPosition(325, 275);
	destructibles.push_back(destructible15);
	
	Bloc_Destructible* destructible16 = new Bloc_Destructible();
	destructible16->SetPosition(475, 325);
	destructibles.push_back(destructible16);
	
	Bloc_Destructible* destructible17 = new Bloc_Destructible();
	destructible17->SetPosition(175, 225);
	destructibles.push_back(destructible17);
	
	Bloc_Destructible* destructible18 = new Bloc_Destructible();
	destructible18->SetPosition(325, 225);
	destructibles.push_back(destructible18);
	
	Bloc_Destructible* destructible19 = new Bloc_Destructible();
	destructible19->SetPosition(425, 525);
	destructibles.push_back(destructible19);
	
	Bloc_Destructible* destructible20 = new Bloc_Destructible();
	destructible20->SetPosition(525, 475);
	destructibles.push_back(destructible20);
	
	Bloc_Destructible* destructible21 = new Bloc_Destructible();
	destructible21->SetPosition(625, 75);
	destructibles.push_back(destructible21);
	
	Bloc_Destructible* destructible22 = new Bloc_Destructible();
	destructible22->SetPosition(625, 125);
	destructibles.push_back(destructible22);
	
	Bloc_Destructible* destructible23 = new Bloc_Destructible();
	destructible23->SetPosition(625, 225);
	destructibles.push_back(destructible23);
	
	Bloc_Destructible* destructible24 = new Bloc_Destructible();
	destructible24->SetPosition(575, 225);
	destructibles.push_back(destructible24);
	
	Bloc_Destructible* destructible25 = new Bloc_Destructible();
	destructible25->SetPosition(525, 75);
	destructibles.push_back(destructible25);
	
	Bloc_Destructible* destructible26 = new Bloc_Destructible();
	destructible26->SetPosition(475, 125);
	destructibles.push_back(destructible26);
	
	Bloc_Destructible* destructible27 = new Bloc_Destructible();
	destructible27->SetPosition(425, 125);
	destructibles.push_back(destructible27);
	
	Bloc_Destructible* destructible28 = new Bloc_Destructible();
	destructible28->SetPosition(325, 25);
	destructibles.push_back(destructible28);
	
	Bloc_Destructible* destructible29 = new Bloc_Destructible();
	destructible29->SetPosition(325, 125);
	destructibles.push_back(destructible29);
	
	Bloc_Destructible* destructible30 = new Bloc_Destructible();
	destructible30->SetPosition(425, 225);
	destructibles.push_back(destructible30);
	
	Bloc_Destructible* destructible31 = new Bloc_Destructible();
	destructible31->SetPosition(525, 425);
	destructibles.push_back(destructible31);
	
	Bloc_Destructible* destructible32 = new Bloc_Destructible();
	destructible32->SetPosition(325, 375);
	destructibles.push_back(destructible32);
	
	Bloc_Destructible* destructible33 = new Bloc_Destructible();
	destructible33->SetPosition(325, 375);
	destructibles.push_back(destructible33);
	
	Bloc_Destructible* destructible34 = new Bloc_Destructible();
	destructible34->SetPosition(225, 325);
	destructibles.push_back(destructible34);
	
	Bloc_Destructible* destructible35 = new Bloc_Destructible();
	destructible35->SetPosition(225, 375);
	destructibles.push_back(destructible35);
	
	Bloc_Destructible* destructible36 = new Bloc_Destructible();
	destructible36->SetPosition(625, 225);
	destructibles.push_back(destructible36);
	
	Bloc_Destructible* destructible37 = new Bloc_Destructible();
	destructible37->SetPosition(625, 275);
	destructibles.push_back(destructible37);
	
	Bloc_Destructible* destructible38 = new Bloc_Destructible();
	destructible38->SetPosition(525, 225);
	destructibles.push_back(destructible38);
	
	Bloc_Destructible* destructible39 = new Bloc_Destructible();
	destructible39->SetPosition(225, 225);
	destructibles.push_back(destructible39);
	
	Bloc_Destructible* destructible40 = new Bloc_Destructible();
	destructible40->SetPosition(225, 325);
	destructibles.push_back(destructible40);
	
	Bloc_Destructible* destructible41 = new Bloc_Destructible();
	destructible41->SetPosition(275, 425);
	destructibles.push_back(destructible41);
	
	Bloc_Destructible* destructible42 = new Bloc_Destructible();
	destructible42->SetPosition(375, 325);
	destructibles.push_back(destructible42);
	
	Bloc_Destructible* destructible43 = new Bloc_Destructible();
	destructible43->SetPosition(425, 325);
	destructibles.push_back(destructible43);
	
	Bloc_Destructible* destructible44 = new Bloc_Destructible();
	destructible44->SetPosition(625, 425);
	destructibles.push_back(destructible44);
	
	Bloc_Destructible* destructible45 = new Bloc_Destructible();
	destructible45->SetPosition(675, 225);
	destructibles.push_back(destructible45);
	
	Bloc_Destructible* destructible46 = new Bloc_Destructible();
	destructible46->SetPosition(575, 325);
	destructibles.push_back(destructible46);
	
	Bloc_Destructible* destructible47 = new Bloc_Destructible();
	destructible47->SetPosition(625, 325);
	destructibles.push_back(destructible47);
	
	Bloc_Destructible* destructible48 = new Bloc_Destructible();
	destructible48->SetPosition(625, 425);
	destructibles.push_back(destructible48);
	
	Bloc_Destructible* destructible49 = new Bloc_Destructible();
	destructible49->SetPosition(675, 425);
	destructibles.push_back(destructible49);
	
	Bloc_Destructible* destructible50 = new Bloc_Destructible();
	destructible50->SetPosition(75, 425);
	destructibles.push_back(destructible50);
	
	Bloc_Destructible* destructible51 = new Bloc_Destructible();
	destructible51->SetPosition(125, 425);
	destructibles.push_back(destructible51);
	
	Bloc_Destructible* destructible52 = new Bloc_Destructible();
	destructible52->SetPosition(25, 325);
	destructibles.push_back(destructible52);
	
		//Bombe
	Bloc_Bomb* bomb = new Bloc_Bomb();
	bomb->SetPosition(bomb->GetX(), bomb->GetY());
	bombs.push_back(bomb);
	
		//Blocs de feu
	//dBloc_Fire* fireBall = new Bloc_Fire("Images/FireBall.png");
	//fireBall->SetPosition(bomb->GetX(), bomb->GetY());
	//fires.push_back(fireBall);
	//
	//		//En haut
	//Bloc_Fire* fireUp1 = new Bloc_Fire("Images/VFireLane_Part2.png");
	//fireUp1->SetPosition(fireBall->GetX(), fireBall->GetY() - 50);
	//fires.push_back(fireUp1);
	//
	//Bloc_Fire* fireUp2 = new Bloc_Fire("Images/VFireLane_Part3.png");
	//fireUp2->SetPosition(fireUp1->GetX(), fireUp1->GetY() - 50);
	//fires.push_back(fireUp2);
	//
	//		//En bas
	//Bloc_Fire* fireDown1 = new Bloc_Fire("Images/VFireLane_Part2.png");
	//fireDown1->SetPosition(fireBall->GetX(), fireBall->GetY() + 50);
	//fires.push_back(fireDown1);
	//
	//Bloc_Fire* fireDown2 = new Bloc_Fire("Images/VFireLane_Part1.png");
	//fireDown2->SetPosition(fireDown1->GetX(), fireDown1->GetY() + 50);
	//fires.push_back(fireDown2);
	//
	//		//A droite
	//Bloc_Fire* fireRight1 = new Bloc_Fire("Images/HFireLane_Part2.png");
	//fireRight1->SetPosition(fireBall->GetX() + 50, fireBall->GetY());
	//fires.push_back(fireRight1);
	//
	//Bloc_Fire* fireRight2 = new Bloc_Fire("Images/HFireLane_Part3.png");
	//fireRight2->SetPosition(fireRight1->GetX() + 50, fireRight1->GetY());
	//fires.push_back(fireRight2);
	//
	//		//A gauche
	//Bloc_Fire* fireLeft1 = new Bloc_Fire("Images/HFireLane_Part2.png");
	//fireLeft1->SetPosition(fireBall->GetX() - 50, fireBall->GetY());
	//fires.push_back(fireLeft1);
	//
	//Bloc_Fire* fireLeft2 = new Bloc_Fire("Images/HFireLane_Part1.png");
	//fireLeft2->SetPosition(fireLeft1->GetX() - 50, fireLeft1->GetY());
	//fires.push_back(fireLeft2);
	
	//Ajouter le joueur1
	Player* temp1 = new Player(0);
	temp1->SetPosition(1, 1);
	temp1->SetVisible(false);
	player1.push_back(temp1);

	player1[currentPlayer1]->SetVisible(true);

	//Ajouter le joueur2
	Player* temp2 = new Player(1);
	temp2->SetPosition(745, 550);
	temp2->SetVisible(false);
	player2.push_back(temp2);

	player2[currentPlayer2]->SetVisible(true);
}

Game::~Game()
{

}

//Appel des fonctions
void Game::Update()
{
	CollisionFireBlocs();
	CollisionFirePlayer();
	CollisionBlocsPlayer();
}

//Détection des collisions entre le feu et les blocs
bool Game::CollisionFireBlocs()
{
	//Collision entre le feu et les blocs destructibles
	for (int i = 0; i < destructibles.size(); i++)
	{
		Rectangle* destrucRect = new Rectangle(destructibles[i]->GetX(), destructibles[i]->GetY(), 50, 50);
	
		for (int i = 0; i < fires.size(); i++)
		{
			Rectangle* fireRect = new Rectangle(fires[i]->GetX(), fires[i]->GetY(), 50, 50);
	
			if (fireRect->CollidesWith(destrucRect))
			{
				delete destrucRect;
				delete fireRect;
				return true;
			}
		}
	}

	//Collision entre le feu et les blocs indestructibles
	for (int i = 0; i < indestructibles.size(); i++)
	{
		Rectangle* indestrucRect = new Rectangle(indestructibles[i]->GetX(), indestructibles[i]->GetY(), 50, 50);

		for (int i = 0; i < fires.size(); i++)
		{
			Rectangle* fireRect = new Rectangle(fires[i]->GetX(), fires[i]->GetY(), 50, 50);

			if (fireRect->CollidesWith(indestrucRect))
			{
				delete fireRect;
				return true;
			}
		}
	}

	return false;
}

//Detection de collision entre le feu et les joueurs
bool Game::CollisionFirePlayer()
{
	//Collision entre le feu et le joueur1
	Rectangle* player1Rect = new Rectangle(player1[currentPlayer1]->GetX(), player1[currentPlayer1]->GetY(), 10, 10);
	
	for (int i = 0; i < fires.size(); i++)
	{
		Rectangle* fireRect = new Rectangle(fires[i]->GetX(), fires[i]->GetY(), 50, 50);
	
		if (fireRect->CollidesWith(player1Rect))
		{
			delete fireRect;
			
			player1[currentPlayer1]->SetPosition(1, 1);
			currentPlayer1++;
			return true;
		}
	}
	
	//Collision entre le feu et le joueur2
	Rectangle* player2Rect = new Rectangle(player2[currentPlayer2]->GetX(), player2[currentPlayer2]->GetY(), 10, 10);
	
	for (int i = 0; i < fires.size(); i++)
	{
		Rectangle* fireRect = new Rectangle(fires[i]->GetX(), fires[i]->GetY(), 50, 50);
	
		if (player2Rect->CollidesWith(fireRect))
		{
			delete fireRect;
			
			player2[currentPlayer2]->SetPosition(10, 10);
			currentPlayer2++;
			return true;
		}
	}

	return false;
}

//Detection de collision entre les blocs et les joueurs
bool Game::CollisionBlocsPlayer()
{
	//Collision entre un bloc indestructible et le joueur1
	Rectangle* player1Rect = new Rectangle(player1[currentPlayer1]->GetX(), player1[currentPlayer1]->GetY(), 10, 10);
	
	for (int i = 0; i < indestructibles.size(); i++)
	{
		Rectangle* indestrucRect = new Rectangle(indestructibles[i]->GetX(), indestructibles[i]->GetY(), 50, 50);
	
		if (player1Rect->CollidesWith(indestrucRect))
		{
			//Collision a gauche
			if (player1[currentPlayer1]->GetX() < indestructibles[i]->GetX())
			{
				player1[currentPlayer1]->SetPosition(player1[currentPlayer1]->GetX() - 1, player1[currentPlayer1]->GetY());
				return true;
			}

			//Collision a droite
			if (player1[currentPlayer1]->GetX() > indestructibles[i]->GetX())
			{
				player1[currentPlayer1]->SetPosition(player1[currentPlayer1]->GetX() + 1, player1[currentPlayer1]->GetY());
				return true;
			}

			//Collision en haut
			if (player1[currentPlayer1]->GetY() < indestructibles[i]->GetY())
			{
				player1[currentPlayer1]->SetPosition(player1[currentPlayer1]->GetX(), player1[currentPlayer1]->GetY() - 1);
				return true;
			}

			//Collision en bas
			if (player1[currentPlayer1]->GetY() > indestructibles[i]->GetY())
			{
				player1[currentPlayer1]->SetPosition(player1[currentPlayer1]->GetX(), player1[currentPlayer1]->GetY() + 1);
				return true;
			}
		}
	}
	
	//Collision entre un bloc indestructible et le joueur2
	Rectangle* player2Rect = new Rectangle(player2[currentPlayer2]->GetX(), player2[currentPlayer2]->GetY(), 10, 10);
	
	for (int i = 0; i < destructibles.size(); i++)
	{
		Rectangle* indestrucRect = new Rectangle(destructibles[i]->GetX(), destructibles[i]->GetY(), 50, 50);
	
		if (player2Rect->CollidesWith(indestrucRect))
		{
			//Collision a gauche
			if (player2[currentPlayer2]->GetX() < indestructibles[i]->GetX())
			{
				player2[currentPlayer2]->SetPosition(player2[currentPlayer2]->GetX() - 1, player2[currentPlayer2]->GetY());
				return true;
			}

			//Collision a droite
			if (player2[currentPlayer2]->GetX() > indestructibles[i]->GetX())
			{
				player2[currentPlayer2]->SetPosition(player2[currentPlayer2]->GetX() + 1, player2[currentPlayer2]->GetY());
				return true;
			}

			//Collision en haut
			if (player2[currentPlayer2]->GetY() < indestructibles[i]->GetY())
			{
				player2[currentPlayer2]->SetPosition(player2[currentPlayer2]->GetX(), player2[currentPlayer2]->GetY() - 1);
				return true;
			}

			//Collision en bas
			if (player2[currentPlayer2]->GetY() > indestructibles[i]->GetY())
			{
				player2[currentPlayer2]->SetPosition(player2[currentPlayer2]->GetX(), player2[currentPlayer2]->GetY() + 1);
				return true;
			}
		}
	}

	return false;
}
