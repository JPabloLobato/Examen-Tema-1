//Parte 2 - Ejercicio 7
#include <iostream>
#include <string>

class RegistroAsistencia {
    public:
    std::string fecha;
    std::string estado;
    void mostrar_asistencia() {
        std::cout << "Fecha: " << fecha << std::endl;
        std::cout << "Estado: " << estado << std::endl;
    }
};

int main () {
    RegistroAsistencia registro1;
    registro1.fecha = "2022-03-01";
    registro1.estado = "Asistio";
    registro1.mostrar_asistencia();
    return 0;
}