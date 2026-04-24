#include <iostream>
using namespace std;

class Swap {
public:
    int a, b;

    void input() {
        cin >> a >> b;
    }

    void swapNum() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << a << " " << b;
    }
};

int main() {
    Swap s;
    s.input();
    s.swapNum();
    s.display();
}