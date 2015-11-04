#include "CentralProcessingUnit.hpp"

CentralProcessingUnit::CentralProcessingUnit()
{
	cout << "Central Processing Unit created!\n";
}

void CentralProcessingUnit::sendInstruction(Instruction instructionCode)
{
	switch (instructionCode)
	{
		case CentralProcessingUnit::FORWARD:
			cout << "Moving Forward!\n";
			break;
		case CentralProcessingUnit::LEFT:
			cout << "Turning Left!\n";
			break;
		case CentralProcessingUnit::RIGHT:
			cout << "Turning Right!\n";
			break;
		case CentralProcessingUnit::JUMP:
			cout << "Jump!!!\n";
			break;
		default:
			break;
	}
}

int CentralProcessingUnit::getPower() const
{
	return power;
}

int CentralProcessingUnit::getSpeed() const
{
	return speed;
}
