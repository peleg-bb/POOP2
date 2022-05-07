#pragma once
#include "Person.h"
#include "Wholesaler.h"
class Florist: public Person
{
private:
	Wholesaler* wholesaler_;
public:
	Florist(std::string, Wholesaler*);
	Florist(std::string, Wholesaler w);
	std::string getName();
};

