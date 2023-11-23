#include "Headers/class.h"
#include "Headers/classB.h"

#include <iostream>
using namespace std;

int main(void){
    A a;
    a.setValue(2);
    printf("%d\n", a.getValue());
    sayHello();
    B b;
    b.setValue(3);
    printf("%d\n", b.getValue());
}