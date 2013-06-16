#ifndef HERONALEJ_H
#define HERONALEJ_H
#include <cmath>
#include <stdio.h>
using namespace std;
/*
* Formula de Heron de Alejandria:
* semiper = (a + b + c) / 2
* superficie = sqrt(semiper * (semiper-a) * (semiper-b) * (semiper-c))
*/
double area_triang_HerAlej(int a, int b, int c)
{
    float semiper = (a + b + c) / 2; //Semiperimetro
    float superficie = sqrt(semiper * (semiper-a) * (semiper-b) * (semiper-c) );
    return superficie;
}

void HeronAlejandria()
{
    int a,b,c; //Lados del triangulo
    cout << "Introduzca a continuacion los lados del triangulo del cual quiere calcular su area:" << endl;
    cin >> a >> b >> c;
    cout << "El area del triangulo vale " << area_triang_HerAlej(a,b,c) << " unidades cuadradas." << endl;

}

#endif // HERONALEJ_H
