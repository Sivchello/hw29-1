#ifndef HW29_1_DOG_H
#define HW29_1_DOG_H
#include "Animal.h"

class Dog : virtual public Animal{
public:
    Dog(const std::string _name);
    virtual void show_talent();
    void add_talent (Talent* _talent);
    virtual void voice();
};


#endif //HW29_1_DOG_H
