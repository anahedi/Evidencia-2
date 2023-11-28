#include <iostream>
#include "Triangulo.h"
#include "Punto.h"

using namespace std;

int main() {
    // Crear objetos Punto con las coordenadas específicas
    Punto p1(0, 0);
    Punto p2(50, 30);
    Punto p3(25, 10);

    // Crear un Triangulo con los puntos específicos
    Triangulo miTriangulo(p1, p2, p3);

    // Mostrar información del triángulo
    cout << "Triangulo con vertices en:\n"
        << "Punto 1: " << miTriangulo.getVertice1().str() << "\n"
        << "Punto 2: " << miTriangulo.getVertice2().str() << "\n"
        << "Punto 3: " << miTriangulo.getVertice3().str() << "\n"
        << "Perimetro: " << miTriangulo.perimetro() << "\n"
        << "Area: " << miTriangulo.area() << "\n";

    return 0;
}
