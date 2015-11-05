#include "Unit.hpp"

void Unit::moveBack()
{
	cout << " is moving back!\n";
}

void Unit::attack()
{
	cout << " is attacking the enemy!\n";
}

void Zergling::moveBack()
{
	cout << "Zergling";
	Unit::moveBack();
}

void Zergling::attack()
{
	cout << "Zergling";
	Unit::attack();
}

void Hydralisk::moveBack()
{
	cout << "Hydralisk";
	Unit::moveBack();
}

void Hydralisk::attack()
{
	cout << "Hydralisk";
	Unit::attack();
}

void Mutalisk::moveBack()
{
	cout << "Mutalisk";
	Unit::moveBack();
}

void Mutalisk::attack()
{
	cout << "Mutalisk";
	Unit::attack();
}

void Viper::moveBack()
{
	cout << "Viper";
	Unit::moveBack();
}

void Viper::attack()
{
	cout << "Viper";
	Unit::attack();
}
