#pragma once
#include <string>
#include "AdvenClass.h"
class Warrior : public AdvenClass
{
private:
	std::string _name;
public:
	Warrior(std::string name);
	~Warrior();

	//std::string GetName() const { return _name; }
	std::string Attack() { return GetName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};

