#include "Dog.h"

int main() {

    Dog d("Sharik");
    d.add_talent(new Swimming());
    d.add_talent(new Counting());
    Dog b("Bobik");;
    b.add_talent(new Dancing());
    d.show_talent();
    b.show_talent();
    Dog z("Zero");
    z.show_talent();
    return 0;
}
