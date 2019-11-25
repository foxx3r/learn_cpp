#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass(int a, int b);
    private:
        int regVar;
        const int constVar;
};

MyClass::MyClass(int a, int b)
: regVar(a), constVar(b)
{
    cout << regVar << endl;
    cout << constVar << endl;
}

int main() {
    MyClass obj(42, 33);
}

