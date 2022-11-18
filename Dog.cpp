#include "Dog.h"

Dog::Dog(const std::string _name){
    name = _name;
}
void Dog::show_talent(){
    std::cout << "This is " << name << " and it has some talent:\n";
    if (talents.size() > 0)
        for (int i = 0; i < talents.size(); ++i) {
            std::cout << talents[i]->talent();
        }
    else
        std::cout << "No talent";
}

void Dog::add_talent (Talent* _talent){
    talents.push_back(_talent);
}

void Dog::voice(){
    std::cout << "Bark!\n";
}