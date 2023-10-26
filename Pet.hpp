#ifndef PET_HPP
#define PET_HPP

class Pet : public Animal {
protected:
    string name;
    float weight;
    string type;
public:
    Pet(string name, float weight, string type) : name(name), weight(weight), type(type) {}
    virtual float CalculateFee() override {
        return weight * GetLicensingRate();
    }
    virtual float GetWeight() override {
        return weight;
    }
    virtual string GetType() override {
        return type;
    }
    virtual float GetLicensingRate() = 0;
};


#endif 