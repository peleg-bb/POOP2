#include "Gardner.h"

Gardner::Gardner(std::string name) : Person(name)
{
}

std::string Gardner::getName()
{
	return "Gardner " + Person::getName();
}

FlowersBouquet* Gardner::prepareBouquet(std::vector<std::string> flowers)
{
	std::cout << this->getName() <<" prepares flowers " << std::endl;
	FlowersBouquet* b = new FlowersBouquet(flowers);
	return b;
}
