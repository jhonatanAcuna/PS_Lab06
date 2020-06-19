#include <iostream>
#include "Ejercicio2.h"

using namespace std;

int main() {
    int opcion;
    cout
            << "1:Ingresar entero \t2: Ingresar double\t3: "
               "5 primeros\t4:10 Letras\n5:Tipo\t6:Leer entero\t7: Leer Double"
               "\t8:Leer Array \t9: Leer Cadena\n10:Leer tipo T\t0:Salir"
            << endl;
    cin >> opcion;
    while (opcion != 0) {
        switch (opcion) {
            case 1:
                Ejercicio2::datoEntero();
                break;
            case 2:
                Ejercicio2::datoDouble();
                break;
            case 3:
                Ejercicio2::arreglo();
                break;
            case 4:
                Ejercicio2::letras();
                break;
            case 5:
                Ejercicio2::tipoT();
                break;
            case 6:
                Ejercicio2::leerInt();
                break;
            case 7:
                Ejercicio2::leerDouble();
                break;
            case 8:
                Ejercicio2::leerArrayInt();
                break;
            case 9:
                Ejercicio2::cadCaracteres();
            case 10:
                Ejercicio2::leerTDato();
        }
        cout
                << "1:Ingresar entero \t2: Ingresar double\t3: 5 primeros"
                   "\t4:10 Letras\n5:Tipo\t6:Leer entero\t7: Leer Double\t8:Leer Array "
                   "\t9: Leer Cadena\n10:Leer tipo T\t0:Salir"
                << endl;
        cin >> opcion;
    }
    return 0;
}
