#include <iostream>
using namespace std;

template <class T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double a = 1.5, b = 2.5;
    char c1 = 'A', c2 = 'B';

    cout << "Before swap int: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After swap int: " << x << " " << y << endl;

    cout << "Before swap double: " << a << " " << b << endl;
    swapValues(a, b);
    cout << "After swap double: " << a << " " << b << endl;

    cout << "Before swap char: " << c1 << " " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap char: " << c1 << " " << c2 << endl;

    return 0;
}