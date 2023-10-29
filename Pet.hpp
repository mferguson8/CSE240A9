#ifndef PET_HPP
#define PET_HPP

class Pet
{
public:
    Pet(const std::string &name, float weight);
    virtual ~Pet() {}

    virtual float CalculateFee() const = 0;
    const std::string &GetName() const;
    float GetWeight() const;

private:
    std::string name;
    float weight;
};

#endif
