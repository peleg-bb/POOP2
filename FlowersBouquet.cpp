
#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> b) : bouquet(b)
{
	isArranged = false;
}

void FlowersBouquet::arrange()
{
	isArranged = true;
}

std::string FlowersBouquet::toString()
{
	std::string concatenate = "";
	for (int i = 0; i < bouquet.size()-1; ++i)
	{
		concatenate.append(bouquet[i]);
		concatenate.append(" ");
	}
	concatenate.append(bouquet[bouquet.size() - 1]);
	
	
	return concatenate;
}
