
#include <iostream>
using namespace std;

void guessnumber(int My)
{
	int a;
	do
	{
		cin >> a;
		if (a > My + 2)
			cout << "TOO HIGH, Enter again";
		else if (a > My)
		{
			cout << "You are high, Enter again";
		}
		else if (a < My - 2)
		{
			cout << "TOO LOW, Enter again";
		}
		else if (a < My)
		{
			cout << "You are low, Enter again";
		}
	} while (a != My);

	cout << "Yeah! You guessed right";
}
