#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main(){
    float n;
    double Pi = 4;
    double numero = -1;
    double i;
    n = 3000000.2;

    for (i = 0; i < n; i++){
        Pi += numero*(4/(3+2*i));
        numero *= -1;
    }
    cout << "El numero Pi, con solo 6 digitos decimales, es: " << setprecision(7) << Pi << endl;
    getch();
}