#include <iostream>
#include <string>

class Estudiante {
    public:
    std::string nombre;
    int edad;
    std::string grado;
    void mostrar_info () {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

int main () {
    Estudiante estudiante1;
    estudiante1.nombre = "Ruben"; 
    estudiante1.edad = 15;
    estudiante1.grado = "Ingenieria Informatica";
    estudiante1.mostrar_infor();
    return 0;
};