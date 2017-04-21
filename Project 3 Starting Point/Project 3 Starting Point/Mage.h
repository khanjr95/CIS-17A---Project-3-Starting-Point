#pragma once
#include <string>
#include "AdvenClass.h"

class Mage : public AdvenClass
{
private:
	std::string _name;
public:
	Mage(std::string name);
	~Mage();

	//std::string GetName() { return _name + " a Mage.";}
	std::string Attack() { return GetName() + " casts magic missle at the darkness!"; }	
	std::string ClassName() { return GetName() + " a Mage"; }
};

