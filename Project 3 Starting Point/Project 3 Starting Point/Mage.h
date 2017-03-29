#pragma once
#include <string>
#include "AdvenClass.h"

class Mage : public AdvenClass
{
private:
	//std::string _name;
public:
	Mage(std::string name);
	~Mage();

	//std::string GetName() const { return GetName(); }
	std::string Attack() { return GetName() + " casts magic missle at the darkness!"; }	
};

