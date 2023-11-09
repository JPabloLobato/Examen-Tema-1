//Parte 2 - Ejercicio 6
#include <iostream>
#include <vector>

double calcular_promedio (std::vector<int> calificaciones) {
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
    return static_cast <double> (suma) / calificaciones.size();
}

int main () {
    std::vector<int> calificaciones;
    int numCalificaciones, calificacion;
    std::cout <<"Ingrese el número de las calificaciones: ";
    std::cin >> numCalificaciones;
    for (int i = 0; i < numCalificaciones; i++) {
        std::cout << "Ingrese la calificación " << i + 1 << ": ";
        std::cin >> calificacion;
        calificaciones.push_back(calificacion);
    }
    double promedio = calcular_promedio(calificaciones);
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
    return 0;
}