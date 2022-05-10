#pragma once
#include <iostream>
#include <vector>

class FlowersBouquet
{
private:
	std::vector < std::string > bouquet;
	bool isArranged;
public:
	FlowersBouquet(std::vector < std::string >);
	void arrange();
	std::string toString();
};

