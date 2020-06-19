//
// Created by jacun on 16/06/2020.
//
#include <iostream>
#include <fstream>
#include "Ejercicio3.h"

using namespace std;

void Ejercicio3::llenado() {
    ofstream archivo;//archivo a escribir
    string frase, nombre;
    archivo.open("C:/Users/jacun/OneDrive/Escritorio/2020-A/PS-L/Lab06/Ejercicio3/Ficha.txt",
                 ios::out);//creando el  archivo en tipo salida
    if (archivo.fail()) {//verificamos si hubiese algun tipo de error
        cout << "No se pudo abrir" << endl;
        exit(1);
    }
    while (true) {//bucle
        cout << "Ingrese frase: ";
        getline(cin, frase);//ingresamos frase completa
        if (frase.empty()) {//verificamos si la cadena esta vacia? rompemos
            break;
        }
        archivo << frase << endl;//escribimos
    }
    archivo.close();//cerramos
}

void Ejercicio3::mostrarFich() {
    ifstream archivo;//archivo de lectura
    //buscamos la ubicacion del archivo y lo abrimos
    archivo.open("C:/Users/jacun/OneDrive/Escritorio/2020-A/PS-L/Lab06/Ejercicio3/Ficha.txt");
    string aux;
    while (!archivo.eof()) {//En caso no haya llegado a la ultima linea
        cout << "Lectura de Ficha: ";
        getline(archivo, aux);
        cout << aux << endl;
    }
    archivo.close();//cerramos

}
