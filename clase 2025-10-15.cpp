#include <iostream>
#include <cmath>
using namespace std;

// --- Function declarations (prototypes) ---
void invertirNumero(int& numero);
void mantenerOrden(int& numero);
int cantidadDigitosPares(int numero);
int sumarDigitos(int& numero);
int cantidadDigitos(int& numero);
int cantidadDigitosPorValor(int numero);

int main() {
    int numero = 0;
    cout << "Escribe un numero: ";
    cin >> numero;

    // --- Ahora vamos a llamar a cada función (trabajador) ---

    cout << endl; // Un espacio para que se vea ordenado
    cout << "El numero que escribiste es: " << numero << endl;

    // 1. Llamamos a la función para contar los dígitos
    cout << "Tiene " << cantidadDigitosPorValor(numero) << " digitos." << endl;

    // 2. Llamamos a la función que suma los dígitos
    cout << "La suma de sus digitos es: " << sumarDigitos(numero) << endl;

    // 3. Llamamos a la función que cuenta los pares
    cout << "Tiene " << cantidadDigitosPares(numero) << " digitos pares." << endl;

    // 4. Llamamos a la función para invertir el número
    // ¡OJO! Esta función cambia el número original, así que lo mostramos al final.
    invertirNumero(numero);
    cout << "El numero al reves es: " << numero << endl;

    return 0;
}

// --- Function definitions (bodies) ---
void invertirNumero(int& numero){
    int nuevoNumero = 0;
    int digito = 0;

    while(numero > 0){
        digito = numero % 10;
        numero = numero / 10;
        nuevoNumero = nuevoNumero * 10 + digito;
    }
    numero = nuevoNumero;
}

void mantenerOrden(int& numero){
    int nuevoNumero = 0;
    int digito = 0;
    int exponente = 0;

    while(numero > 0){
        digito = numero % 10;
        numero = numero / 10;
        nuevoNumero = nuevoNumero + digito * pow(10,exponente);
        exponente++;
    }
    numero = nuevoNumero;
}

int cantidadDigitosPares(int numero){
    int numeroCopia = numero;
    int digito = 0;
    int cantidadPares = 0;

    while(numeroCopia > 0){
        digito = numeroCopia % 10;
        numeroCopia = numeroCopia / 10;

        if(digito % 2 == 0){
            cantidadPares++;
        }
    }
    return cantidadPares;
}

// //n=12345 => sumar todos los digitos=> 15            osea     1 + 2 + 3 4 + 5
int sumarDigitos(int& numero){
    int numeroCopia = numero;
    int digito = 0;
    int suma = 0;

    while(numeroCopia > 0){
        digito = numeroCopia % 10;
        numeroCopia = numeroCopia / 10;
        suma += digito; //abreviatura de suma = suma + digito
    }
    return suma;
}

int cantidadDigitos(int& numero){
    int numeroCopia = numero;
    int cantidadDigitos = 0;

    while(numeroCopia > 0){
        numeroCopia = numeroCopia / 10;
        cantidadDigitos++;
    }
    return cantidadDigitos;
}


int cantidadDigitosPorValor(int numero){
    int cantidadDeDigitos = 0;

    while(numero > 0){
        numero = numero / 10;
        cantidadDeDigitos++;
    }
    return cantidadDeDigitos;
}
