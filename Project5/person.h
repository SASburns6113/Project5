#pragma once
#include <string>

using namespace std;

class person
{
public:
	//Constructor - method which runs once for each
	// object created.
	person();

	void Talk(string StuffTosay);
	void SetName(string name);
	string GetName();
	bool hasGlasses;

	//Destructor - method which runs once for each 
	// object destroyed
	~person();
private:
	string Name;

};

