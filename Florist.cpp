#include "Florist.h"
#include "Person.h"
#include "Wholesaler.h"




Florist::Florist(std::string name, Wholesaler* w, Flower_Arranger* fa, Delivery_Person* dp) : Person(name), wholesaler(w) ,flowerArranger(fa) , deliveryPerson(dp)
{
}

 std::string Florist::getName()
{
	return "Florist " + Person::getName();
	
}

void Florist::acceptOrder(Person* p, std::vector<std::string> flowers)
{
	std::cout << this->getName() << " forwards request to " << wholesaler->getName() << std::endl;
	FlowersBouquet* b =  wholesaler->acceptOrder(flowers);
	std::cout << wholesaler->getName() << " returns flowers to " << this->getName() << std::endl;
	std::cout << this->getName() << " request flower arrangement from " << flowerArranger->getName() << std::endl;
	flowerArranger->arrangeFlowers(b);
	std::cout << flowerArranger->getName() << " returns arranged flowers to " << this->getName() << std::endl;
	std::cout << this->getName() << " forwards flowers to " << deliveryPerson->getName() << std::endl;
	deliveryPerson->deliver(p,b);

}
