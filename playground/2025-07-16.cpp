/*
Practica
• Tienes un número n, y tienes que determinar si n es par o impar
• Analice le problema (Entradas, salidas, pruebas)
• Realice el pseudo código
• Realice el código en C++

• Debe utilizar el operador %.
*/

#include <iostream>
using namespace std;
int main() {
    int n = 5;
    if(n % 2 == 0){
        cout << "Este numero es par/even" << endl;
    } else{
        cout << "Este numero es impar/odd" << endl;
    }
    return 0;
}






