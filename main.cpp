#include <vector>
#include <iostream>

using namespace std;


float CalculateFee(Animal* animal){
    float weight = animal->GetWeight();
    float feeMultiplier = 1.0;
    if(animal->GetType() == "dog"){
        feeMultiplier = 2.0;
    } else if(animal->GetType() == "cat"){
        feeMultiplier = 1.5;
    }
    return weight * feeMultiplier;
}
int main(){
    vector<int> vec;

    float totalFee = 0.0;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] -> GetName() << " " << vec[i] -> CalculateFee() << endl;
        totalFee += CalculateFee(vec[i]);
    }

}
