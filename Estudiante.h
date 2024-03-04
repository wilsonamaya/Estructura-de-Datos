#pragma once
#include <iostream>
#include <string>

using namespace std;

class Estudiante
{
private:

	string nombre;
	int edad;
	string materia;
	float calificacion;

public:

	Estudiante();
	~Estudiante();
	void set_nombre(string _nombre);
	string get_nombre();

};
