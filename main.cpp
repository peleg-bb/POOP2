#include <iostream>

#include "Person.h"
#include "Wholesaler.h"
#include "Florist.h"
#include "Delivery_Person.h"


int main(int argc, char** argv)
{
	std::cout << "Hello " << std::endl;
	
	Person* robin = new Person("Robin");
	Flower_Arranger* flora = new Flower_Arranger("Flora");
	Delivery_Person* dylan = new Delivery_Person("Dylan");
	Gardner* garret = new Gardner("Garret");
	Grower* gray = new Grower("Gray", garret);
	Wholesaler* watson = new Wholesaler("Watson", gray);
	Florist* fred = new Florist("Fred", watson, flora, dylan);
	Person* chris = new Person("Chris");
	std::vector<std::string> flowers = { "Roses", "Violets", "Gladiolus"};
	chris->orderFlowers(fred, robin, flowers);

	delete robin;
	delete chris;
	delete flora;
	delete dylan;
	delete garret;
	delete gray;
	delete watson;
	delete fred;
}
