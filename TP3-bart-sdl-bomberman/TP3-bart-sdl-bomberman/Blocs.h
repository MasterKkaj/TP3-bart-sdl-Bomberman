#pragma once
#include "Sprite.h"


class Blocs :
	public Sprite
{
public:
	Blocs();
	Blocs(std::string path);
	~Blocs();

	void Update();
private:
	
};

