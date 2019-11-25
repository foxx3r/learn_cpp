#include <iostream>
using namespace std;

template <class T>
class MyClass {
    public:
        MyClass (T x) {
            cout <<x<<" -  not a char"<<endl;
        }
};

template < >
class MyClass<char> {
    public:
        MyClass (char x) {
            cout <<x<<" is a char!"<<endl;
        }
};

int main () {
    MyClass<int> ob1(42);
    MyClass<double> ob2(5.47);
    MyClass<char> ob3('s');
}
