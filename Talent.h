#ifndef HW29_1_TALENT_H
#define HW29_1_TALENT_H
#include <iostream>
#include <string>

class Talent{
public:
    virtual std::string talent() = 0;
};

class Swimming : public Talent {
public:
    virtual std::string talent() {
        return "It can \"Swim\"\n";
    }
};

class Dancing : public Talent {
public:
    virtual std::string talent() {
        return "It can \"Dance\"\n";
    }
};

class Counting : public Talent {
public:
    virtual std::string talent() {
        return "It can \"Count\"\n";
    }
};

#endif //HW29_1_TALENT_H
