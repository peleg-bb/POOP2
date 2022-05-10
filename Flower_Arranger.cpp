#include "Flower_Arranger.h"

Flower_Arranger::Flower_Arranger(std::string name) : Person(name)
{
}

std::string Flower_Arranger::getName()
{
	return "Flower Arranger " + Person::getName();
}

void Flower_Arranger::arrangeFlowers(FlowersBouquet* b)
{
	std::cout << this->getName() << " arranges flowers " << std::endl;
	b->arrange();

}
