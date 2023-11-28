#pragma once
#ifndef Punto_h
#define Punto_h

#include <stdio.h>
#include <string>
#include <math.h>

class Punto
{
private:
	double x, y;
public:
	//metodos constructores
	Punto();
	Punto(double _x, double _y);
	//metodos de acceso
	double getx();
	double gety();
	void setx(double _x);
	void sety(double _y);

	//otros metodos
	double calculadistancia(Punto p2);
	std::string str();

};

#endif

