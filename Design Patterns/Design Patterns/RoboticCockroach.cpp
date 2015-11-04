#include "RoboticCockroach.hpp"

RoboticCockroach::RoboticCockroach(CentralProcessingUnit const & unit)
{
	this->unit = new CentralProcessingUnit(unit);
}

RoboticCockroach::~RoboticCockroach()
{
	if (unit != nullptr)
		delete unit;
}

void RoboticCockroach::moveForward()
{
	unit->sendInstruction(CentralProcessingUnit::Instruction::FORWARD);
}

void RoboticCockroach::turnLeft()
{
	unit->sendInstruction(CentralProcessingUnit::Instruction::LEFT);
}

void RoboticCockroach::turnRight()
{
	unit->sendInstruction(CentralProcessingUnit::Instruction::RIGHT);
}

void RoboticCockroach::jump()
{
	unit->sendInstruction(CentralProcessingUnit::Instruction::JUMP);
}
