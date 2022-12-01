#include <iostream> //librerias
#include <conio.h>

 using namespace std;

 int main(){
    char cadena[10];

    for(int i =0; i< 9 ;i++){//agregamos datos en cada posicion del array
        cin >> cadena[i];
    }
    cout << "\n";
    for(int i=0; i<10;i++){//imprimimos el array
        cout << cadena[i];
    }



    getch();
    return 0;
 }