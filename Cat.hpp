#ifndef CAT_HPP
#define CAT_HPP

#include "pet.hpp"

class Cat : public Pet
{
public:
    Cat(const std::string &name, float weight);
    virtual float CalculateFee() const override;

    static float LicensingRate; // Licensing rate per pound for cats
};

#endif
