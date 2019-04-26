#include "person.h"
#include <iostream>
#include <string>

person::person()
{
	cout << "\nA person is born!\n\n";
}

void person::Talk(string StuffTosay)
{
	cout << StuffTosay << endl;
}

void person::SetName(string name)
{
	Name = name;
}

string person::GetName()
{
	return Name;
}


person::~person()
{
}
