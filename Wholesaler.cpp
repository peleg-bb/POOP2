#include "Wholesaler.h"
#include "Person.h"



Wholesaler::Wholesaler(std::string name, Grower* grower) : Person(name), grower(grower)
{
}

std::string Wholesaler::getName()
{
	return "Wholesaler " + Person::getName();
}

FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers)
{
	std::cout << this->getName() << " forwards the request to " << grower->getName() << "." << std::endl;
	FlowersBouquet* bq =  grower->prepareOrder(flowers);
	std::cout << grower->getName() << " returns flowers to " << this->getName() << "." << std::endl;
	return bq;
}


