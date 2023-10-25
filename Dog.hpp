#include "Pet.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Pet
{
    public:
        Dog();
        virtual ~Dog();
    private:
        float weight;
}

#endif
```