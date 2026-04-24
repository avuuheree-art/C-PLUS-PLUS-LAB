#include <iostream>
using namespace std;

class Prime {
public:
    int n;

    void input() {
        cin >> n;
    }

    void check() {
        for(int i=2;i<n;i++) {
            if(n%i==0) {
                cout << "Not Prime";
                return;
            }
        }
        cout << "Prime";
    }
};

int main() {
    Prime p;
    p.input();
    p.check();
}