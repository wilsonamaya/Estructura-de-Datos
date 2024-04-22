#include "Nodo.h"
Nodo::Nodo(string n, string h, string estado)
{
	this->nombre = n;
	this->habitat = h;
	this->estadoConservacion = estado;
	siguiente = nullptr;
}
