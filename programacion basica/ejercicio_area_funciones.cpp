#include <iostream> //librerias
#include <conio.h>

using namespace std;

int area(int h, int b){
    int area = b*h;
    return area;
}

int perimetro(int h, int b){
    int perimetro = 2*h + 2*b;
    return perimetro;
}

int main(){
    int h, b;
    cout << "ingrese altura: "; cin >> h;
    cout << "ingrese base: "; cin >> b;
    cout << "area = " << area(h,b) << endl;
    cout << "perimetro = "<< perimetro(h,b)<< endl;
    return 0;
}