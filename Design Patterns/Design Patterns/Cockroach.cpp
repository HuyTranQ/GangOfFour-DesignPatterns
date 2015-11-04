#include "Cockroach.hpp"

Cockroach::Cockroach()
	: health(100), age(3)
{
}

void Cockroach::moveForward()
{
	cout << "Moved Forward\n";
}

void Cockroach::turnLeft()
{
	cout << "Cockroach turned Left\n";
}

void Cockroach::turnRight()
{
	cout << "Cockroach turned Right";
}

void Cockroach::jump()
{
	cout << "Cockroach jumped\n";
}

int Cockroach::getHealth() const
{
	return health;
}

int Cockroach::getAge()
{
	return age;
}
