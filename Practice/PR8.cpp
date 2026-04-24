#include <iostream>
using namespace std;

class Bill {
public:
    int units;
    float amount;

    void input() {
        cin >> units;
    }

    void calculate() {
        amount = units * 5;
        amount -= amount * 0.02;
    }

    void display() {
        cout << "Bill = " << amount;
    }
};

int main() {
    Bill b;
    b.input();
    b.calculate();
    b.display();
}