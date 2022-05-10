#pragma once
#include <vector>
#include "Person.h"
#include "FlowersBouquet.h"

class Gardner : public Person
{
public:
	Gardner(std::string);
	std::string getName();
	FlowersBouquet* prepareBouquet(std::vector < std::string >);
};

