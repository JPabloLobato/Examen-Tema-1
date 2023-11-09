//Parte 2 -Ejercicio 4
#include <iostream>
#include <string>

void funcion_que_lanza_excepcion() {
    throw std::runtime_error("¡Error!");
}

int main () {
    try {
        funcion_que_lanza_excepcion();
    } catch (const std::exception& e) {
        std::cout << "Excepción: " << e.what() << std::endl;
    }
    return 0;
}