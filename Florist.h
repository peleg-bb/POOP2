#pragma once
#include "Wholesaler.h"
#include "Delivery_Person.h"
#include "Flower_Arranger.h"

class Florist: public Person
{
private:
	Wholesaler* wholesaler;
	Flower_Arranger* flowerArranger;
	Delivery_Person* deliveryPerson;

public:
	Florist(std::string, Wholesaler*, Flower_Arranger*, Delivery_Person*);
	std::string getName();
	void acceptOrder(Person*, std::vector < std::string >);
};

