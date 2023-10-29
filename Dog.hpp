#ifndef DOG_HPP
#define DOG_HPP

#include "pet.hpp"

class Dog : public Pet
{
public:
    Dog(const std::string &name, float weight);
    virtual float CalculateFee() const override;

    static float LicensingRate; // Licensing rate per pound for dogs
};

#endif
