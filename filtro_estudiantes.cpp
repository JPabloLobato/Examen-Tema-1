//Parte 2 - Ejercicio 8 
#include <vector>
#include <string>
#include <iostream>

class Estudiante {
    public:
    std::string nombre;
    std::string grado;
};

std::vector<Estudiante> filtrar_por_grado(std::vector<Estudiante> estudiantes, std::string grado) {
    std::vector<Estudiante> filtrados;
    for (Estudiante estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            filtrados.push_back(estudiante);
        }
    }
    return filtrados;
}
int main () {
    std::vector<Estudiante> estudiantes = {
        {"Juan", "Ingenieria Informatica"},
        {"María", "Ingenieria Civil"},
        {"Carlos", "Ingenieria Informatica"},
    };
    std::string grado = "Ingenieria Informatica";
    std::vector<Estudiante> estudiantes_filtrados = filtrar_por_grado(estudiantes, grado);
    for (const Estudiante& estudiante : estudiantes_filtrados) {
        std::cout << "Nombre: " << estudiante.nombre << ", Grado: " << estudiante.grado << std::endl;
    }
    return 0;
}