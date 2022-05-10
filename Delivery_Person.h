#pragma once
#include "Person.h"

class Delivery_Person : public Person
{
public:
	Delivery_Person(std::string);
	std::string getName();
	void deliver(Person*, FlowersBouquet*);	
};

