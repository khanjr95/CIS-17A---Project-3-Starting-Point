#pragma once
#include <string>


class AdvenClass
{
private:
	std::string _name;

public:
	AdvenClass(std:: string _name);
	~AdvenClass();

	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + "Attack with bare hands"; }
};

