#include <iostream> //librerias
#include <conio.h>

 using namespace std;

int main(){
    //tema: operaciones aritmeticas basicas.
    //programa que reciba 2 numeros y que retorne las operaciones basicas con estos.
    //operador de asignacion "="
    string texto1 = "ingrese un numero a = "; //se definieron 2 variables de tipo string para mostrar enunciados al usuario
    string texto2 = "ingrese un numero b = ";
    int a, b, c; //definimos las variables enteras para guardar los resultados de la +, - y *
    float div, Fa, Fb;//se definieron variables flotantes para el resultado de la division
    // +, -, *, /
    cout << texto1; //imprimimos el primer enunciado
    cin >> a; //pedimos al usuario ingresar el primer valor por teclado(a)
    cout << texto2; //imprimimos el segundo enunciado
    cin >> b; //pedimos al usuario ingresar el segundo valor por teclado(b)

    Fa = a;//re-definimos las variables Fa y Fb para guardar los valores flotantes de a y de b
    Fb = b;
    //realizamos y mostramos las operaciones por consola
    c = a + b;
    cout << a <<" + "<< b <<" = "<< c << endl;
    c = a - b;
    cout << a <<" - "<< b <<" = "<< c << endl;
    c = a * b;
    cout << a <<" * "<< b <<" = "<< c << endl;
    div = Fa / Fb;
    cout << Fa <<" / "<< Fb <<" = "<< div << " con modulo = "<< a % b;
    
    getch();
    return 0;
}