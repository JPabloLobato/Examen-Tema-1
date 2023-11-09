//Parte 2 - Ejercicio 3

#include <iostream>

void intercambiar (int* a, int* b) { // Utilizamos "*" para declarar el puntero.
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int num1 = 5;
    int num2 = 10; 
    std::cout <<"Antes del intercambio: " << std::endl;
    intercambiar (&num1, &num2); //Utilizamos "&" para pasar la direccion de memoria de la variable.
    std::cout << "Despues del intercambio: " << std::endl;
    return 0;
}