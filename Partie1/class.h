#ifndef A_H
#define A_H

#include <iostream>
using namespace std;

class A
{
    public:
        int getValue() const;
        void setValue(int value);
    private:
        int value;
};

void sayHello();

#endif