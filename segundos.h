#ifndef SEGUNDOS_H
#define SEGUNDOS_H
#include <iostream>
using namespace std;
/*
Calcular el numero de segundos dado un valor en años, meses, dias, horas, minutos y segundos
*/
int calcseg(int anyo,int dia, int hora, int minuto, int segundos) {
    return segundos + minuto * 60 + hora * 3600 + dia * (3600*24) + anyo * (3600 * 24 * 365);
}

void Segundos(){
    cout << "Introduce, separado por espacios, los años, los dias, las horas, los minutos y los segundos que quieras convertir a segundos" << endl;
    int anyo, dia, hora, minuto, segundo;
    cin >> anyo >> dia >> hora >> minuto >> segundo;
    cout << "Eso son " << calcseg(anyo,dia,hora,minuto,segundo) << " segundos" << endl;
/*    cout << anyo << dia << hora << minuto << segundo << "asas" << endl;*/

}

#endif // SEGUNDOS_H
