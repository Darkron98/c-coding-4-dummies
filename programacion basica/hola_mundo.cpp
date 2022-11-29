#include <iostream> //librerias
#include <conio.h>

 using namespace std;

int main(){
    //temas: variables, entradas y salidas por consola
    string entrada; //variable -> contenedor para guardar datos

    cout << "hola mundo" << endl; //cout -> console out -> salida por consola
    cout << "ingrese lo que sea: ";
    cin >> entrada; //cin -> console in -> entrada por consola

    cout << "este es el dato que ingreso: " << entrada; 
    getch();
    return 0;
}

