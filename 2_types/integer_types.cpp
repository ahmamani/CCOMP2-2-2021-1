#include <iostream>

using namespace std;

// Este un comentario de una linea
int main() {
    /*
    * Para tipos enteros se tiene: short, int, long, long long
    */

    unsigned short x = 32767; 

    // la función sizeof me retorna el tamaño en bytes en memoria de la variable.
    cout << "El tamaño del tipo es " << sizeof(x) << endl;
    cout << "El valor de la variable es " << x << endl;

    x = x + 1;

    cout << "El valor de la variable es " << x << endl;

    return 0;
}