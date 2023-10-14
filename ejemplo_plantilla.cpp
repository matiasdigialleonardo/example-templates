#include <iostream>
using namespace std;

template <typename T>
bool areEqual(T a, T b) {
    return a == b;
}

int main() {

    int x = 5, y = 5;
    double p = 3.14, q = 2.71;
    char c1 = 'A', c2 = 'B';

    bool result1 = areEqual(x, y);
    bool result2 = areEqual(p, q);
    bool result3 = areEqual(c1, c2);

    cout << "Result1 (x, y): " << (result1 ? "Son iguales" : "No son iguales") << endl;
    cout << "Result2 (p, q): " << (result2 ? "Son iguales" : "No son iguales") << endl;
    cout << "Result3 (c1, c2): " << (result3 ? "Son iguales" : "No son iguales") << endl;

    return 0;
}
