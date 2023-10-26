#include <vector>
#include <iostream>
#include "Pet.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using namespace std;

class Animal
{
public:
    virtual float CalculateFee() = 0;
    virtual float GetWeight() = 0;
    virtual string GetType() = 0;
};

int main()
{
    vector<Animal *> vec;
    Dog *Bob = new Dog("Bob", 65);
    Dog *Stan = new Dog("Stan", 37);
    Cat *Steve = new Cat("Steve", 12);

    vec.push_back(dynamic_cast<Animal *>(Bob));
    vec.push_back(dynamic_cast<Animal *>(Stan));
    vec.push_back(dynamic_cast<Animal *>(Steve));

    float totalFee = 0.0;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]->GetType() << " " << vec[i]->CalculateFee() << endl;
        totalFee += vec[i]->CalculateFee();
    }
    cout << "Total fee: " << totalFee << endl;

    delete Bob;
    delete Stan;
    delete Steve;
    return 0;
}
