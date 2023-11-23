#ifndef B_H
#define B_H

#include <iostream>
using namespace std;

class B
{
    public:
        int getValue() const;
        void setValue(int value);
    private:
        int value;
};

#endif