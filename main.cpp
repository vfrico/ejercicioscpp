#include <iostream>
#include "rad2deg.h"
#include "segundos.h"
#include "HeronAlej.h"
using namespace std;

int main()
{
    cout << "Pascal to C++" << endl;
    cout << "Ejercicios pensados para pascal hechos en cpp" << endl;
    cout << endl;
    cout << "0.- Cerrar programa" << endl;
    cout << "1.- Pasar de radianes a grados (y viceversa)" << endl;
    cout << "2.- Pasar de Años y Dias a segundos." << endl;
    cout << "3.- Calcular el area de un triangulo." << endl;

    cout << "Introduce la seleccion" << endl;
    int seleccion;
    cin >> seleccion;

    if (seleccion == 0) {
        return 0;
    }
    else if (seleccion == 1) {
        Rad2Deg_u();
    }
    else if (seleccion == 2) {
        Segundos();
    }
    else if (seleccion == 3) {
        HeronAlejandria();
    }
    else {
        cout << "No valido" << endl;
        return 1;
    }
}

