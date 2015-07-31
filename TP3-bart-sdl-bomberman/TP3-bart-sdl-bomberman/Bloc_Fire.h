#pragma once
#include "Blocs.h"

class Bloc_Fire :
	public Blocs
{
public:
	Bloc_Fire();
	~Bloc_Fire();

private:
	static std::string BLOC_FIREBALL_PATH;
	static std::string BLOC_HFIRELANE_PART1_PATH;
	static std::string BLOC_HFIRELANE_PART2_PATH;
	static std::string BLOC_HFIRELANE_PART3_PATH;
	static std::string BLOC_VFIRELANE_PART1_PATH;
	static std::string BLOC_VFIRELANE_PART2_PATH;
	static std::string BLOC_VFIRELANE_PART3_PATH;
};

