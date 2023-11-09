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
    std::vector<int> calificaciones = {90, 85, 88, 92, 86};
    double promedio = calcular_promedio(calificaciones);
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
    return 0;
}