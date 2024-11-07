#pragma once
#include "Bird.h"

namespace Animals
{
    namespace Birds
    {
        namespace Domestic
        {
            class Duck : public Bird
            {
            public:
                virtual void makeSound()const override;
            };
        }
    }
}