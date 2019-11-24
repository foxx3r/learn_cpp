#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    x *= 3; // equivalent to x = x * 3
    x /= 2; // equivalent to x = x / 2
    x %= 4; // equivalent to x = x % 4
    x++; //equivalent to x = x + 1
    x = 5;
    int y = ++x;
    // x is 6, y is 6
    cout << x
        << endl
        << y
        << endl;

    return 0;
}
