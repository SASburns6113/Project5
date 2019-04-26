#pragma once
#include "person.h"
class Friend :
	public person
{
public:
	Friend();
	
	void LendMoney();
	
	~Friend();
};

