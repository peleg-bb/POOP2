#pragma once
#include "Person.h"
#include "Gardner.h"

class Grower : public Person
{
private:
	Gardner* gardner;
public:
	Grower(std::string, Gardner*);
	std::string getName();
	FlowersBouquet* prepareOrder(std::vector < std::string >);

};

