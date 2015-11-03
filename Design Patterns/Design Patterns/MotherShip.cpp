#include "MotherShip.hpp"

int * MotherShip::health , * MotherShip::shield;

MotherShip::MotherShip()
{
	health = new int();
	shield = new int();
}

MotherShip::~MotherShip()
{
	delete health;
	cout << "Health deleted\n";
	delete shield;
	cout << "Shield deleted\n";
}

MotherShip & MotherShip::getInstance()
{
	static MotherShip instance;
	return instance;
}

int MotherShip::getHealth() const
{
	return * health;
}

int MotherShip::getShield() const
{
	return * shield;
}

void MotherShip::timeWarp() const
{
	cout << "Time Warp\n";
}

void MotherShip::massRecall() const
{
	cout << "Mass Recall\n";
}

void MotherShip::cloakingField() const
{
	cout << "Cloaking Field\n";
}

void MotherShip::selfDestroy()
{
	cout << "Self Destruction\n";
}
