#include <iostream> //librerias
#include <conio.h>

 using namespace std;

 int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,15};
    int j = 0;
    cout << "[";

    while(j < 9){
        cout << array[j] << ", ";
        j++;
    }
    cout << "]\n";
    j=0;

    do{
        cout << array[j] << ", ";
        j++;
    }while(j < 9);
    cout << "\n";
    for(int i =0; i < 9; i++){
        cout << array[i] << ", ";
    }

    getch();
    return 0;
 }