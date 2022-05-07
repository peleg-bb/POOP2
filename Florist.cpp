#include "Florist.h"
#include "Person.h"



Florist::Florist(std::string, Wholesaler* w) : Person(name), wholesaler_(w)
{
}

std::string Florist::getName()
{
	std::string n = "Florist " + this->name;
	return n;
}
