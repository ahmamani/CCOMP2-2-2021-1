#include <iostream>

using namespace std;

int main () {

    // Las comillas simples ('') representan carater
    // las comillas dobles ("") representan cadena (string)
    char c = '1';

    cout << sizeof(c) << endl;  

    int valor = static_cast<int>(c); 

    cout << "El valor entero de " << c << " es " << valor << endl; 

    return 0;
}