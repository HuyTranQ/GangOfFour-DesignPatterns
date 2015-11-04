#pragma once
#include "Cockroach.hpp"
#include "CentralProcessingUnit.hpp"
class RoboticCockroach : public Cockroach
{
public:
	RoboticCockroach(CentralProcessingUnit const & unit);
	~RoboticCockroach();
	void moveForward();
	void turnLeft();
	void turnRight();
	void jump();
private:
	CentralProcessingUnit * unit;
};