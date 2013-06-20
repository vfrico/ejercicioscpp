#ifndef CALCPI_H
#define CALCPI_H
//PI = 2 * 2/1 * 2/3 * 4/3 *4/5 * 6/5 * 6/7 * 8/7
#include <stdio.h>
using namespace std;
double calcpi(int iterations) {
    double mypi = 1.0;
    float arriba = 2.0;
    float abajo = 1.0;
    for(long int i = 0; i <= iterations ; i++ ){
        if (i % 2 == 0 &&  i != 0) {//par
            //cout << i << " es par" << endl;
            abajo = abajo + 2;
            arriba = arriba;
        }
        else if ( (i+1) % 2 == 0 && i != 1) { //Impar
            //cout << i << "es impar" << endl;
            arriba = arriba + 2;
            abajo = abajo;
        }

        //cout << mypi << "   " << arriba << "   " << abajo << endl;
        mypi = mypi * (arriba/abajo);
    //cout << mypi << endl;
    }
    cout << "Pi vale " << mypi << endl;
    return mypi;
}

#include <iostream>
#include <iomanip>
using namespace std;
void calcpi_2(double veces){
    cout << fixed << showpoint << setprecision(20);
    //~ cout << "Introduce el número de veces: " ;
    //~ cin >> veces;
    veces = 9999999999;
    cout << "Usando " << veces << endl;

    bool par = true;
    int denom = 3;
    double numPi = 4.0;

    for ( int i = 1; i <= veces; i++ ){

        if (par) {
            numPi -= ( 4.0 / denom );
        }

        else {
            numPi += ( 4.0 / denom );
        }

        par = !par;
        denom += 2;
    }

          cout << numPi << endl;

}


#endif // CALCPI_H
