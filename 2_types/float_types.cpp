#include <iostream>

using namespace std;

int main () {
    int a = 10;
    int b = 3;
    float c = 3; // double

    cout << "Suma : " << a + b << endl;
    cout << "Mult : " << a * b << endl;

    // Entero dividido con Entero me dará un ENTERO.
    cout << "Div. : " << a / b << endl;

    cout << "Div. : " << a / c << endl;

    return 0;
}