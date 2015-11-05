#pragma once

#include "Unit.hpp"

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

class Hatchery
{
public:
	enum ZergUnit
	{
		ZERGLING , HYDRALISK ,
		MUTALISK , VIPER , Size
	};
	~Hatchery();
	void hatch(ZergUnit ZergUnitType);
	void notifyAttack();
	void notifyRetreat();
private:
	static string name[];
	vector<Unit *> children;
};