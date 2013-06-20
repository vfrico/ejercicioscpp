#include <iostream>
#include <time.h>
#include "rad2deg.h"
#include "segundos.h"
#include "HeronAlej.h"
#include "calcpi.h"
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
    cout << "4.- Calcular Pi." << endl;

    cout << "Introduce la seleccion" << endl;
    int seleccion;
    //cin >> seleccion;
    seleccion = 4 ;

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
    else if (seleccion == 4) {
        //long it;
        //cout << "Introduce iteraciones" << endl;
        //cin >> it;
        //it = 999999;
        //cout << it << endl;
        calcpi_2(1);

    }
    else {
        cout << "No valido" << endl;
        return 1;
    }
    float ti_ejec;
    ti_ejec = (float)clock()/CLOCKS_PER_SEC;
    cout << "Tiempo de ejecucion: " << ti_ejec << " segundos." << endl;
}

