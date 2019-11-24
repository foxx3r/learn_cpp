#include <iostream>
using namespace std;

int addNumbers(int x, int y, int z, int a) {
  int result = x + y + z + a;
  return result;
}

int main()
{
    cout << addNumbers(1, 7, 8, 3);

    return 0;
}
