#pragma once
#include "Blocs.h"

#define BLOC_FIRE_PATH

class Bloc_Fire :
	public Blocs
{
public:
	std::string BLOC_FIREBALL_PATH;
	std::string BLOC_HFIRELANE_PART1_PATH;
	std::string BLOC_HFIRELANE_PART2_PATH;
	std::string BLOC_HFIRELANE_PART3_PATH;
	std::string BLOC_VFIRELANE_PART1_PATH;
	std::string BLOC_VFIRELANE_PART2_PATH;
	std::string BLOC_VFIRELANE_PART3_PATH;
	
	Bloc_Fire();
	~Bloc_Fire();
};

