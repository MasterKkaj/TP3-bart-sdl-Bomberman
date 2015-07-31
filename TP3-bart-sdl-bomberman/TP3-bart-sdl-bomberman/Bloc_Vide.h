#pragma once
#include "Blocs.h"

class Bloc_Vide :
	public Blocs
{
public:
	Bloc_Vide();
	~Bloc_Vide();

private:
	static std::string BLOC_VIDE_PATH;
};

