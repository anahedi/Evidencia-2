#pragma once
#ifndef triangulo_hpp
#define triangulo_hpp

#include <stdio.h>
#include "Punto.h"

class Triangulo
{
private:
	Punto v1, v2, v3;
public:
	//metodos constructores
	Triangulo();
	Triangulo(Punto _v1, Punto _v2, Punto _3);

	//metodos get 
	Punto getVertice1();
	Punto getVertice2();
	Punto getVertice3();

	//metodos set (cambian los valores de los atributos)
	void setVertice1(Punto _v1);
	void setVertice2(Punto _v2);
	void setVertice3(Punto _v3);

	//otros metodos
	double perimetro();
	double area();
	std::string str();
};
#endif 

