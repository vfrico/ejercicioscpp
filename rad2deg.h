#ifndef RAD2DEG_H
#define RAD2DEG_H
#include <iostream>
using namespace std;
/*
Ejercicio pag 34 (2.9.6 y 2.9.7)
Radianes y grados (y viceversa)

1 rad = 360 / (2*pi) degrees
*/
float Rad2Deg(float radianes) {
    float pi = 3.141592;
    return 360/(2*pi) * radianes;
}

void Rad2Deg_u(){
    cout << "Introduce un valor en radianes para convertirlo en grados" << endl;
    float value;
    cin >> value;
    cout << value << " en radianes es igual a " << Rad2Deg(value) << " en grados"<< endl;
}

#endif // RAD2DEG_H
