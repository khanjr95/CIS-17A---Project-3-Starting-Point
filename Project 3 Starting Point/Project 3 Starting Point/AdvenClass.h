#pragma once
#include <string>


class AdvenClass
{
private:
	std::string _name;

public:
	AdvenClass(std:: string _name);
	~AdvenClass();

	std::string GetName();
	std::string virtual Attack();
};

