#pragma once

#include <iostream>

using std::cout;

class Cockroach
{
public:
	Cockroach();
	void virtual moveForward();
	void virtual turnLeft();
	void virtual turnRight();
	void virtual jump();
	int virtual getHealth() const;
	int virtual getAge();
private:
	int health , age;
};