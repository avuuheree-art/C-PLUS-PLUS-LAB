#include <iostream>
using namespace std;

class Print {
public:
    int n;

    void input() {
        cin >> n;
    }

    void show() {
        for(int i=1;i<=n;i++)
            cout << i << " ";
    }
};

int main() {
    Print p;
    p.input();
    p.show();
}