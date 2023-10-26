#include "Pet.hpp"
#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Pet {
public:
    Dog(string name, float weight) : Pet(name, weight, "dog") {}
    virtual float GetLicensingRate() override {
        static float licensingRate = 2.0;
        return licensingRate;
    }
};

#endif
```