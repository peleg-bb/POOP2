#pragma once
#include "Person.h"
#include "FlowersBouquet.h"

class Flower_Arranger : public Person
{
public:
	Flower_Arranger(std::string);
	std::string getName();
	void arrangeFlowers(FlowersBouquet*);
};

