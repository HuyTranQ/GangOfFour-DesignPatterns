#pragma once

#include <iostream>

using std::cout;

class Unit
{
public:
	void virtual moveBack();
	void virtual attack();
private:
};

class Zergling : public Unit
{
public:
	void virtual moveBack();
	void virtual attack();
private:
	
};

class Hydralisk : public Unit
{
public:
	void moveBack();
	void attack();
private:

};

class Mutalisk : public Unit
{
public:
	void moveBack();
	void attack();
private:

};

class Viper : public Unit
{
public:
	void moveBack();
	void attack();

private:

};