#pragma once

#include <iostream>

using std::cout;

class CentralProcessingUnit
{
public:
	enum Instruction
	{
		FORWARD , LEFT , RIGHT , JUMP
	};
	CentralProcessingUnit();
	void sendInstruction(Instruction instructionCode);
	int getPower() const;
	int getSpeed() const;
private:
	int speed , power;
};