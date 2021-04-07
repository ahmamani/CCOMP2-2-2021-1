#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main () {

    Account myAccount; // creando un objeto de tipo Account

    // mostrando el valor inicial del nombre del objeto myAccount
    cout << "Nombre inicial de cuenta : " << myAccount.getName();

    cout << "\nPor favor ingrese un nombre: ";
    string name;
    cin >> name;

    myAccount.setName(name); // cambiando el nombre del objeto myAccount

    cout << "Nombre de cuenta " << myAccount.getName() << endl;

    return 0;
}
