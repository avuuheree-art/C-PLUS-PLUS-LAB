#include <iostream>
using namespace std;

class Leap {
public:
    int year;

    void input() {
        cin >> year;
    }

    void check() {
        if((year%4==0 && year%100!=0) || (year%400==0))
            cout << "Leap Year";
        else
            cout << "Not Leap Year";
    }
};

int main() {
    Leap l;
    l.input();
    l.check();
}