#include <iostream>
using namespace std;

class Palindrome {
public:
    int n, rev=0, temp;

    inline void check() {
        cin >> n;
        temp = n;

        while(n>0) {
            rev = rev*10 + n%10;
            n/=10;
        }

        if(temp == rev)
            cout << "Palindrome";
        else
            cout << "Not Palindrome";
    }
};

int main() {
    Palindrome p;
    p.check();
}