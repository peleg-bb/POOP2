#pragma once
#include <iostream>
#include <vector>

class Florist;

class Person
{protected:
	std::string name;
public:
	Person(std::string);
	void orderFlowers(Florist* f, Person* p, std::vector<std::string>);
	std::string getName();

	
};

