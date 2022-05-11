#include "Person.h"
#include "Florist.h"

Person::Person(std::string name) : name(name)
{
}

void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> flowers)
{
	
	std::string concatenate = "";
	for (int i = 0; i < flowers.size()-1 ; ++i)
	{
		concatenate.append(flowers[i]);
		concatenate.append(" ");
	}
	concatenate.append(flowers[flowers.size() - 1]);

	std::cout << this->getName() << " orders flowers to " << 
		p->getName() << " from " << f->getName() << ": " << concatenate << "." << std::endl;
	f->acceptOrder(p, flowers);
}

void Person::acceptFlowers(FlowersBouquet* b)
{

	std::cout << this->getName() << " accepts the flowers: " << b->toString() << "." << std::endl;
}

std::string Person::getName()
{
	return this->name;
}
