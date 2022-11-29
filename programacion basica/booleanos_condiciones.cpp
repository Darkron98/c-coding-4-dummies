#include <iostream> //librerias
#include <conio.h>

 using namespace std;

 int main(){
    //booleanos -> valores de falso y verdadero
    //tipo de dato booleano
    bool a = false, b = true;
    int inta = 7, intb = 5;
    //operadores logicos:
    //igualdad "=="
    //mayor que ">"
    //menor que "<"
    //mayor o igual que ">="
    //menor o igual que "<="
    //diferencia "!="
    //or "||" disyuncion
    //and "&&" conjuncion
    cout <<inta << " es igual a "<< intb << " : " << (inta == intb)<<endl; 
    cout <<inta << " > " << intb << " : " <<(inta > intb)<<endl;
    cout <<inta << " < " << intb << " : " <<(inta < intb)<<endl;
    cout <<inta << " >= " << intb << " : " <<(inta >= intb)<<endl;
    cout <<inta << " <= " << intb << " : " <<(inta <= intb)<<endl;
    cout <<inta << " diferente a " << intb << " : " <<(inta != intb)<<endl;

    cout <<a << " or " << b << " : " <<(a || b)<<endl;
    cout <<a << " and " << b << " : " <<(a && b)<<endl;
    cout << ((inta > intb) || (inta < intb)) << endl;
    cout << ((inta > intb) && (inta < intb)) << endl; 
    /* */ //comentario en bloque
    //condicionales
    //si a entonces b si no c : donde a es una operacion logica
    if(inta > intb){//si
      //entonces
        cout << inta << " si es mayor que " << intb<<endl;
    }else{//si no
        cout << inta << " no es mayor que " << intb<<endl;
    }

    //hallar si un numero es par

    if((inta % 2) == 0){
        cout << inta << " es par";
    }else{
        cout << inta << " no es par";
    }

    getch();
    return 0;
 }