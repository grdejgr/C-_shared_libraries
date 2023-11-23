#include "classB.h"
#include <iostream>
using namespace std;


int B::getValue() const
{
    return this->value;
}

void B::setValue(int value)
{
    this->value = value;
}
