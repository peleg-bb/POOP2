#include <iostream>

#include "Person.h"
#include "Wholesaler.h"
#include "Florist.h"


int main(int argc, char** argv)
{
	std::cout << "Hello " << std::endl;
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	Wholesaler* john = new Wholesaler("John");
	Florist* jake = new Florist("Jake", john);
	std::vector<std::string> flowers = { "Buttercup", "Primrose", "Hibiscus" };
	robin->orderFlowers(jake, chris, flowers);
}
