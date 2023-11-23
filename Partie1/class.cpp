#include "class.h"
#include <iostream>
using namespace std;


int A::getValue() const
{
    return this->value;
}

void A::setValue(int value)
{
    this->value = value;
}

void sayHello() {
    std::cout << "Hello from the shared library!\n";
}

// int main(void){
//     A a;
//     a.setValue(2);
//     printf("%d\n", a.getValue());
//     sayHello();
// }