#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void input() {
        cin >> name >> marks;
    }

    void display() {
        cout << name << " " << marks << endl;
    }
};

int main() {
    Student s[10];

    for(int i=0;i<10;i++)
        s[i].input();

    for(int i=0;i<10;i++)
        s[i].display();
}