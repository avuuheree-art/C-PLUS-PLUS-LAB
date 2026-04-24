#include <iostream>
using namespace std;

class Bill {
public:
    int days;
    float charge;

    Bill(int d) {
        days = d;
        charge = days * 500;
    }

    void display() {
        cout << "Total = " << charge;
    }
};

int main() {
    int d;
    cin >> d;

    Bill b(d);
    b.display();
}