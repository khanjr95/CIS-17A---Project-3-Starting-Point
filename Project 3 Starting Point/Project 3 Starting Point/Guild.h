#pragma once
#include <string>
#include <vector>
#include <memory>
#include "AdvenClass.h"
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"

class Guild
{
private:
	std::vector<std::shared_ptr<AdvenClass>> _advClass;
	//std::vector<std::shared_ptr<Mage>> _mages;
	//std::vector<std::shared_ptr<Paladin>> _paladins;
	//std::vector<std::shared_ptr<Ranger>> _rangers;
	//std::vector<std::shared_ptr<Warrior>> _warriors;
	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddAdvenClass(std::shared_ptr<AdvenClass> newAdven);
	//void AddMage(std::string name);
	//void AddPaladin(std::string name);
	//void AddRanger(std::string name);
	//void AddWarrior(std::string name);

	std::string GetInfo();

	std::string AttackwithAdvenClass();

//	std::string AttackWithMages();
	//std::string AttackWithPaladins();
	//std::string AttackWithRangers();
	//std::string AttackWithWarriors();
	std::string AttackWithAllAdventurers();
};

