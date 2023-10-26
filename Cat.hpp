#include "Pet.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Pet {
public:
    Cat(string name, float weight) : Pet(name, weight, "cat") {}
    virtual float GetLicensingRate() override {
        static float licensingRate = 1.5;
        return licensingRate;
    }
};

#endif
```