#include <iostream>
#include <conio.h>

using namespace std;

int funcion(int x) {
    int y = x*x;
    return y;
}

void texto(){
    cout << "F(X) = ";
}

int main(){
    int x = 2;
    texto();
    cout << funcion(x);
    return 0;
}

//f(x)=x^2



