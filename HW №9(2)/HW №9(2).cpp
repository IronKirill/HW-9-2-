#include "Animal.h"
#include "Bird.h"
#include "Wolf.h"
#include "Dog.h"
#include "Lion.h"
#include "Chicken.h"
#include "Duck.h"
#include "Eagle.h"

int main()
{
	Animals::Wild::Lion lion;
	lion.makeSound();
	cout << endl;

	Animals::Wild::Wolf wolf;
	wolf.makeSound();
	cout << endl;

	Animals::Wild::Dog dog;
	dog.makeSound();
	cout << endl;

	Animals::Birds::Domestic::Chicken chicken;
	chicken.makeSound();
	cout << endl;

	Animals::Birds::Domestic::Duck duck;
	duck.makeSound();
	cout << endl;

	Animals::Birds::Domestic::Eagle eagle;
	eagle.makeSound();
	cout << endl;
}