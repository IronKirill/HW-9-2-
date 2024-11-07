#include "Animal.h"

Animals::Animal::~Animal()
{
	for (auto item : animal)
	{
		delete item;
	}
}