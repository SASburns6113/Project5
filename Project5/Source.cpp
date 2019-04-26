#include <iostream>
#include <string>
#include "person.h"
#include "BodyGuard.h"
#include "Friend.h"

using namespace std;

int main()
{
	
	cout << "\n\n\tWelcome to the Group\n\n" << endl;

	Friend Jane;
	BodyGuard Tom;

	Jane.SetName("Jane Doe");
	Tom.SetName("Tom Train");

	Jane.hasGlasses = true;
	Tom.hasGlasses = false;

	string JanesName = Jane.GetName();
	Jane.Talk(JanesName + " says, My favorite band is JA.");

	Jane.LendMoney();

	Tom.Talk("I am your bodyguard, watch this!");
	Tom.Attack();
	
	system("pause");
	
	return 0;
}