#include "Delivery_Person.h"

Delivery_Person::Delivery_Person(std::string name) : Person(name)
{
}

std::string Delivery_Person::getName()
{
	return "Delivery Person " + Person::getName();
}

void Delivery_Person::deliver(Person* p, FlowersBouquet* b)
{
	//Delivery Person Dylan delivers flowers Robin.
	std::cout << this->getName() << " delivers flowers to " << p->getName() << std::endl;
	p->acceptFlowers(b);
}
