#pragma once
#include "Animal.h"

namespace Animals
{
    namespace Birds
    {
        class Bird : public Animal
        {
        public:
            virtual void makeSound()const = 0;
        };
    }
}