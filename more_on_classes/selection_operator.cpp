#include <iostream>
#include "selection_operator.h"
using namespace std;

MyClass::MyClass() {
}
void MyClass::myPrint() {
    cout <<"Hello"<<endl;
}

int main() {
    MyClass obj;
    MyClass *ptr = &obj;
    ptr->myPrint();
}
