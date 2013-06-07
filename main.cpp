#include <iostream>
#include "rad2deg.h"

using namespace std;

int main()
{
    cout << "Pascal to C++" << endl;
    cout << "Ejercicios pensados para pascal hechos en cpp" << endl;
    cout << endl;
    cout << "0.- Cerrar programa" << endl;
    cout << "1.- Pasar de radianes a grados" << endl;

    cout << "Introduce la seleccion" << endl;
    int seleccion;
    cin >> seleccion;

    if (seleccion == 0) {
        return 0;
    }
    else if (seleccion == 1) {
        Rad2Deg_u();
    }
    else {
        cout << "No valido" << endl;
    }
}

