#pragma once
#include "Animal.h"

namespace Animals
{
    namespace Wild
    {
        class Wolf : public Animal
        {
        public:
            virtual void makeSound()const override;
        };
    }
}