#pragma once
#include <iostream>

using std::cout;

class MotherShip
{
public:
	~MotherShip();
	static MotherShip & getInstance();
	int getHealth() const;
	int getShield() const;
	void timeWarp() const;
	void massRecall() const;
	void cloakingField() const;
	void selfDestroy();
protected:
	MotherShip();
	MotherShip(MotherShip const & mothership) = delete;
	void operator =(MotherShip const & mothership) = delete;
private:
	static int * health , * shield;
};