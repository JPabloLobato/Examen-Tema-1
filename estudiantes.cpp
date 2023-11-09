//Parte 2 - Ejercicio 2 y 5 (estaba escribiendo el 9 pero me daba error con class estudiante, por lo que lo hago en otro archivo)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Estudiante {
    public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;
    void mostrar_info () {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
    void registrar_materia (std::string materia) {
        materias.push_back(materia);
    }
    void mostrar_materia() {
        std::cout <<"Materias: " << std::endl;
        for (const auto& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
};

int main () {
    Estudiante estudiante1;
    estudiante1.nombre = "Ruben"; 
    estudiante1.edad = 20;
    estudiante1.grado = "Ingenieria Informatica";
    estudiante1.registrar_materia("Matemáticas");
    estudiante1.registrar_materia("Programación");
    estudiante1.mostrar_info();
    estudiante1.mostrar_materia();
    return 0;
};