#include "Pet.hpp"
#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Pet
{
    public:
        Cat();
        virtual ~Cat();
    private:
        float weight;
}

#endif
```