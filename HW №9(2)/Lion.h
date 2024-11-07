#pragma once
#include "Animal.h"

namespace Animals
{
    namespace Wild
    {
        class Lion : public Animal
        {
        public:
            virtual void makeSound()const override;
        };
    }
}