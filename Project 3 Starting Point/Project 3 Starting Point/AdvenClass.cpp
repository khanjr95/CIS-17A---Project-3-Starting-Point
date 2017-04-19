
#include "AdvenClass.h"



AdvenClass::AdvenClass(std::string _name)
{
}

AdvenClass::~AdvenClass()
{
}

std::string AdvenClass::GetName()
{
	return const std::string(_name);
}

std::string AdvenClass::Attack()
{
	 return std::string( _name + "Attacked with bare hands");
}
