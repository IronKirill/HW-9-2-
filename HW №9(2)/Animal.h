#pragma once
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

namespace Animals
{
	class Animal
	{
		vector<Animals::Animal*>animal;
	public:
		~Animal();
		virtual void makeSound()const = 0;
	};
}

