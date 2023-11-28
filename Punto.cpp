#include "Punto.h"

//metodos constructores
Punto::Punto() {
	x = 0;
	y = 0;
}

Punto::Punto(double _x, double _y) {
	x = _x;
	y = _y;
}

//metodos de acceso
double Punto::getx() {
	return x;
}

double Punto::gety() {
	return y;
}

//metodos modificadores
void Punto::setx(double _x) {
	x = _x;
}
void Punto::sety(double _y) {
	y = _y;
}

//otras metodos 
double Punto::calculadistancia(Punto p2) {
	return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
}

std::string Punto::str() {
	return '(' + std::to_string(x) + ',' + std::to_string(y) + ')';
}
