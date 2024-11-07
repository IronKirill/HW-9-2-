#pragma once
#include "Animal.h"

namespace Animals
{
    namespace Wild
    {
        class Dog : public Animal
        {
        public:
            virtual void makeSound()const override;
        };
    }
}