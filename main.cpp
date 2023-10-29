#include <iostream>
#include <vector>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"

float Dog::LicensingRate = 2.0; // Set licensing rate for dogs
float Cat::LicensingRate = 1.5; // Set licensing rate for cats

Pet::Pet(const std::string &name, float weight) : name(name), weight(weight) {}

const std::string &Pet::GetName() const
{
    return name;
}

float Pet::GetWeight() const
{
    return weight;
}

Dog::Dog(const std::string &name, float weight) : Pet(name, weight) {}

float Dog::CalculateFee() const
{
    return GetWeight() * LicensingRate;
}

Cat::Cat(const std::string &name, float weight) : Pet(name, weight) {}

float Cat::CalculateFee() const
{
    return GetWeight() * LicensingRate;
}

int main()
{
    std::vector<Pet *> pvec;

    // Create three pets
    pvec.push_back(new Dog("Bob", 65));
    pvec.push_back(new Dog("Stan", 37));
    pvec.push_back(new Cat("Tom", 12));

    float total_fee = 0.0;
    for (int i = 0; i < pvec.size(); i++)
    {
        std::cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateFee() << std::endl;
        total_fee = total_fee + pvec[i]->CalculateFee();
    }

    // Clean up memory
    for (int i = 0; i < pvec.size(); i++)
    {
        delete pvec[i];
    }

    std::cout << "total licensing fee = " << total_fee << std::endl;

    return 0;
}
