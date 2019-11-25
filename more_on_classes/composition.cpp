#include <iostream>
using namespace std;

class Birthday {
    public:
        Birthday(int m, int d, int y)
        : month(m), day(d), year(y)
        {  }
        void printDate()
        {
            cout << month << "/" << day << "/" << year << endl;
        }
    private:
        int month;
        int day;
        int year;
};

class Person {
    public:
        Person(string n, Birthday b)
        : name(n), bd(b)
        {  }
        void printInfo()
        {
            cout << name << endl;
            bd.printDate();
        }
    private:
        string name;
        Birthday bd;
};

int main() {
    Birthday bd(2, 21, 1985);
    Person p("David", bd);
    p.printInfo();
}
