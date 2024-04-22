#include <iostream>
#include "ListaEnlazada.h"
using namespace std;

int main()
{
    string nombre, habitat, estado;
    ListaEnlazada listaAnimales;
    cout << "Ingresar animal: ";
    getline(cin, nombre);
    cout << "Ingesar habitat: ";
    getline(cin, habitat);
    cout << "Ingresar estado: ";
    getline(cin, estado);
    listaAnimales.agregarAnimal(nombre, habitat, estado);
}
