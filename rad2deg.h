#ifndef RAD2DEG_H
#define RAD2DEG_H
#include <iostream>
#include <cmath>
using namespace std;
/*
Ejercicio pag 34 (2.9.6 y 2.9.7)
Radianes y grados (y viceversa)

1 rad = 360 / (2*pi) degrees
*/
double pi = 3.141592;
double Rad2Deg(double radianes) {
    return 360/(2*pi) * radianes;
}

double Deg2Rad(double degrees){
    return 2*pi / 360 * degrees;
}

void Rad2Deg_u(){
    cout << "Elije una de las opciones" << endl;
    cout << "1.- Convertir de Radianes a grados" << endl << "2.- Convertir de grados a radianes" << endl;
    int decision;
    cin >> decision;
    if (decision == 1) {
        cout << "Introduce el valor en radianes a continuacion" << endl;
        float value;
        cin >> value;
        cout << value << " en radianes es igual a " << Rad2Deg(value) << " en grados"<< endl;
    }
    else if (decision == 2) {
        cout << "Introduce el valor en grados a continuacion" << endl;
        float value;
        cin >> value;
        cout << value << " en grados es igual a " << Deg2Rad(value)  << " en radianes"<< endl;
    }
    else {
        cout << "Error" << endl;
    }

}

#endif // RAD2DEG_H
