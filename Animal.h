#ifndef HW29_1_ANIMAL_H
#define HW29_1_ANIMAL_H
#include "Talent.h"
#include <vector>

class Animal{
protected:
    std::string name;
    std::vector<Talent*> talents;
public:
    virtual void voice() = 0;
    void setName(const std::string _name){
        name = _name;
    }
};

#endif //HW29_1_ANIMAL_H
