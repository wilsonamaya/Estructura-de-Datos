#include <iostream>
#include <string>
#include "Estudiante.h"

using namespace std;


int main()
{

    //Declarar un objeto de la clase estudiante
    Estudiante alumno;
    string nombre;
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    alumno.set_nombre(nombre); //Lllamando al metedo set_nombre de la clase Estudiante a traves del objeto alumno
    cout << "El nombre del estudiante es: " << alumno.get_nombre()<<endl; //Muestra el atributo de la clase
    cout << "El nombre es: " << nombre; //Muestra la varible local
    return 0;
    

}
