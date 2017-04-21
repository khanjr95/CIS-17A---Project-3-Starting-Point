#pragma once
#include <string>


class AdvenClass
{
private:
	std::string _name;

public:
	AdvenClass(std:: string _name);
	~AdvenClass();

	std::string GetName() { return _name; }
	std::string virtual Attack() { return GetName() + "Attack with bare hands"; }
	std::string virtual ClassName() { return GetName() + " a Adventurer."; }
};

