#include "MotherShip.hpp"

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	cout << MotherShip::getInstance().getHealth() << '\n';
	cout << MotherShip::getInstance().getShield() << '\n';
	MotherShip & mothership = MotherShip::getInstance();
	mothership.cloakingField();
	mothership.timeWarp();
	mothership.selfDestroy();
	return 0;
}