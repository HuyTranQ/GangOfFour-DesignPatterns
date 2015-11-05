#include "Hatchery.hpp"

string Hatchery::name[] = {
	"Drone" , "Zergling" , "Hydralisk" , "Mutalisk" , "Viper" , "Overseer"
};

void Hatchery::hatch(ZergUnit unitType)
{
	cout << "The Hatcher has given birth a " << name[unitType] << '\n';
	switch (unitType)
	{
		case Hatchery::ZERGLING:
			children.push_back(new Zergling());
			break;
		case Hatchery::HYDRALISK:
			children.push_back(new Hydralisk());
			break;
		case Hatchery::MUTALISK:
			children.push_back(new Mutalisk());
			break;
		case Hatchery::VIPER:
			children.push_back(new Viper());
			break;
		default:
			break;
	}
}

void Hatchery::notifyAttack()
{
	cout << "Children! Bring me their blood! Hahahahaha!";
	int size = children.size();
	for (int i = 0; i < size; ++i)
		children[i]->attack();
}

void Hatchery::notifyRetreat()
{
	cout << "Hatchery: I'm being attacked! My children, SAVE ME!!!\n";
	int size = children.size();
	for (int i = 0; i < size; ++i)
		children[i]->moveBack();
}

Hatchery::~Hatchery()
{
	int size = children.size();
	for (int i = 0; i < size; ++i)
		delete children[i];
}