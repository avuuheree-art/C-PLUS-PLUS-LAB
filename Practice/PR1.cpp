#include <iostream>
using namespace std;

float areaTriangle(float b, float h) {
    return 0.5 * b * h;
}

float areaCircle(float r) {
    return 3.14 * r * r;
}

int main() {
    cout << "Triangle Area: " << areaTriangle(5, 4) << endl;
    cout << "Circle Area: " << areaCircle(3) << endl;
}