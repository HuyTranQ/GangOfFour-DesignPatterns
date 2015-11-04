#include "Cockroach.hpp"
#include "CentralProcessingUnit.hpp"
#include "RoboticCockroach.hpp"

int main()
{
	Cockroach ** listCockroach = new Cockroach* [2];
	CentralProcessingUnit unit;
	listCockroach[0] = new Cockroach();
	listCockroach[1] = new RoboticCockroach(unit);
	for (int i = 0; i < 2; ++i)
	{
		listCockroach[i]->moveForward();
		listCockroach[i]->turnLeft();
		listCockroach[i]->turnRight();
		listCockroach[i]->jump();
	}
	delete[] listCockroach;
	return 0;
}