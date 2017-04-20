#pragma once
#include <string>
#include "AdvenClass.h"

class Paladin: public AdvenClass
{
private:
	std::string _name;
public:
	Paladin(std::string name);
	~Paladin();

	//std::string GetName() const { return _name; }
	std::string Attack() { return GetName() + " swings a giant maul at his foes!"; }
};

