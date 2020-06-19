//
// Created by jacun on 17/06/2020.
//
#include <iostream>
#include "Ejercicio04.h"
#include <fstream>

using namespace std;
ifstream archivo;
int cont=0;
void Ejercicio04::lectura() {
    string name;
    string texto;
    cout << "Digite el nombre del archivo: ";
    getline(cin,name);
    archivo.open(name.c_str(),ios::in);//abrimos archivo modo lectura
    if(archivo.fail()){//error al abrir el archivo
        cout << "No se pudo abrir"<<endl;
        exit(1);//salida error tipo 1
    }
    while (!archivo.eof()){//mientras no sea el final del archivo
        if(cont ==25){// de llegar a 25 lineas
            system("pause");//el sistema entra en pausa
            cont=0;//y contador pasa a 0
        }
        getline(archivo,texto);
        cout << texto<<endl;
        cont++;//contador para contener 25 lineas

    }
    archivo.close();//cerramos el archivo
}