#include <iostream>
using namespace std;

class Library {
public:
    string book;
    int available;

    void input() {
        cin >> book >> available;
    }

    void issue() {
        if(available > 0) {
            cout << "Book Issued";
        } else {
            cout << "Not Available";
        }
    }
};

int main() {
    Library l;
    l.input();
    l.issue();
}