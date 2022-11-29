#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int listaNumeros[10], indice;
    cout << "ingrese la posicion donde quiere guardar el numero: ";
    cin >> indice;
    cout << "ingrese un numero: ";
    cin >> listaNumeros[indice];
    cout << "el numero que sumerce ingreso en la posicion "<< indice << " es: "<< listaNumeros[15];
    getch();
    return 0;
}