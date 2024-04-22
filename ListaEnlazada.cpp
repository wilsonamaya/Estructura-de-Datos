#include "ListaEnlazada.h"
#include <iostream>

using namespace std;
ListaEnlazada::ListaEnlazada(){
	primero = nullptr;
	ultimo = nullptr;
}
void ListaEnlazada::agregarAnimal(string n, string habitat, string estado)
{
	Nodo* nuevonodo = new Nodo(n, habitat, estado);
	if (primero == NULL)
	{
		primero = nuevonodo;
		ultimo = nuevonodo;
	}
	else 
	{
		ultimo->siguiente = nuevonodo; //El puntero siguiente del ultimo apunta al nuevo
		ultimo = nuevonodo; //El nuevo nodo es el puntero al ultimo
	}
}
void ListaEnlazada::eliminarAnimal(string nombre)
{
	Nodo* actual = primero;
	Nodo* anterior = nullptr;
	while (actual != nullptr && actual->nombre != nombre)
	{
		anterior = actual;
		actual = actual->siguiente;
	}
	//Encontro el animal o llego nulo/nullptr
	if (actual == nullptr)
	{
		cout << "No se encontro el animal en la lista" << endl;
		return;
	}
	if (actual == primero)
		primero = primero->siguiente;
	else
		anterior->siguiente = actual->siguiente;
	delete actual; //si queremos eliminar el nodo fisicamente
}

void ListaEnlazada::buscarAnimal(string nombre)
{
	Nodo* actual = primero;
	while(actual!=nullptr)
	{
		if (actual->nombre == nombre)
		{
			cout << "Nombre" << actual->nombre;
			cout << "Habitat" << actual->habitat;
			cout << "Estado" << actual->estadoConservacion;
			return;
		}
	actual = actual->siguiente;
	}
	cout << "El animal no fue encontado" << endl;
}

void ListaEnlazada::mostrarLista()
{
	Nodo* actual = primero;
	while (actual != nullptr);
	{
		cout << "Nombre" << actual->nombre;
		cout << "Habitat" << actual->habitat;
		cout << "Estado" << actual->estadoConservacion;
		actual = actual->siguiente;
	}
}
