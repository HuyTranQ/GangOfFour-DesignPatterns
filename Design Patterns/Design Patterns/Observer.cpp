#include "Hatchery.hpp"

using std::cin;

int main()
{
	Hatchery hatchery;
	for (int i = 0; i < Hatchery::ZergUnit::Size; ++i)
		hatchery.hatch(static_cast<Hatchery::ZergUnit>(i));
	cout << "Sir! We found a new hatchery, do you want to attack or retrieve?\n";
	int answer;
	cin >> answer;
	if (answer == 0)
	{
		hatchery.notifyAttack();
		cout << "Sir! You are so stupid!!! We are so doomed!!!\n";
	}
	else
	{
		hatchery.notifyRetreat();
		cout << "Sir! They are coming back for their mother! You're better hurry\n";
	}
	return 0;
}