#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a+b;
}

int main () {
    double x=7.15, y=15.54;
    cout << sum(x, y) << endl;
}
