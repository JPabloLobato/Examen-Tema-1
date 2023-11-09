//Parte 2 - Ejercicio 9
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

class MateriaYaRegistradaExcepion : public std::exception {
    public:
    const char* what() const throw() {
        return "La materia ya ha sido registrada";
    }
};

class Estudiante {
    public:
    std::string nombre;
    std::string grado;
    std::vector <std::string> materias;
    void registrar_materia (std::string materia) {
        if (std::find(materias.begin(), materias.end(), materia) != materias.end()) {
            throw MateriaYaRegistradaExcepion();
        } else {
        materias.push_back(materia);
    }
}
};
int main () {
    Estudiante estudiante;
    estudiante.nombre = "Gonzalo";
    estudiante.grado = "Ingenieria Informatica";
    try {
        estudiante.registrar_materia("Programacion");
        estudiante.registrar_materia("Programacion");
    } catch (MateriaYaRegistradaExcepion& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}