//Parte 2 - Ejerecicio 10 
#include <iostream>
#include <string>

class Profesor {
    public:
    std::string nombre;
    int edad;
    std::string materia;
    int anos_experiencia;
    void mostrar_info_profesor() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Materia: " << materia << std::endl;
        std::cout << "Años de experiencia: " << anos_experiencia << std::endl;
    }
};
int main () {
    Profesor profesor;
    profesor.nombre = "Ruben";
    profesor.edad = 35;
    profesor.materia = "Programacion";
    profesor.anos_experiencia = 15;
    profesor.mostrar_info_profesor();
    return 0;
}