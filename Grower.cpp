#include "Grower.h"

Grower::Grower(std::string name, Gardner* gardner) : Person(name), gardner(gardner)
{
}

std::string Grower::getName()
{
	return "Grower " + Person::getName();

}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> b)
{
	std::cout << this->getName() << " forwards the request to " << gardner->getName() << std::endl;
	FlowersBouquet* bq = gardner->prepareBouquet(b);
	std::cout << gardner->getName() << " returns flowers to to " << this->getName() << std::endl;
	return bq;
	
}
