//
// Created by jacun on 17/06/2020.
//
#include <iostream>
#include "Ejercicio5.h"
#include <fstream>

using namespace std;
ofstream agenda;// archivo donde escribiremos
int cont = 1;//contador para saber cuantos contactos almacenar
string nombre, direccion, email, vacio;
int tlf, dia, mes, anio;


void Ejercicio5::registrar() {//metodo para registrar datos
    char opc = 's';//carafcter de verificacion
    agenda.open("agenda.txt", ios::out | ios::app);//escritura en archivo .txt
    while (opc == 's' || opc == 'S') {
        if (cont <= 20) {
            cout << "Nombre: ";
            getline(cin, nombre);
            getline(cin, nombre);
            cout << "Direccion: ";
            getline(cin, direccion);
            cout << "Telefono: ";
            cin >> tlf;
            cout << "Email: ";
            getline(cin, email);
            getline(cin, email);
            cout << "Fecha de Nacimiento" << endl;
            cout << "Dia: ";
            cin >> dia;
            cout << "Mes [1-12]: ";
            cin >> mes;
            cout << "Año: ";
            cin >> anio;

            agenda << nombre << " " << direccion << " " << tlf << " " << email << " " << dia << "/"
                   << mes << "/" << anio << endl;//escritura en agenda
            cout << "Contacto registrado correctamente" << endl;
            cont++;//incrementa en 1
        } else {
            cout << "Agenda llena" << endl;
        }
        cout << "Desea ingresar otro contacto (S/N)" << endl;
        cin >> opc;
        getline(cin, vacio);

    }
    agenda.close();
}

void Ejercicio5::verContacto() {
    ifstream lect;//archivo de lectura
    string aux;
    lect.open("agenda.txt", ios::in);//abrimos archivo
    if (lect.fail()) {//verificamos is hubo error al abrir
        cout << "No se pudo abrir";
        exit(1);
    }
    while (!lect.eof()) {//mientras no sea el fin de linea
        getline(lect, aux);// obtenemos los datos
        cout << aux << endl;//imprimimos
        cont++;//incrementa contador

    }
    cont = cont - 1;//se le resta uno ya que lee la ultima linea vacia
    lect.close();//cerramos archivo
}

void Ejercicio5::buscarContacto() {//busqueda de contacto por nombre
    ifstream busqueda;
    string nomAux;
    string texto;
    busqueda.open("agenda.txt",ios::in|ios::out);
    if(busqueda.fail()){
        cout << "No se pudo abrir";//verificacion d archivo
        exit(1);
    }
    cout << "Busqueda\nNombre: "<<endl;
    cin >> nomAux;
    busqueda>>nombre;//obtenemos el nombre
    while (!busqueda.eof()){
        if(nombre.compare(nomAux)==0){//verificamos mientras no se halla llegado al fin del archivo
            cout << nombre<<endl;//imprimimos el nombre
            getline(busqueda,texto);// obtenemos linea de datos
            cout << texto<<endl;//mostramos
        }
        busqueda>>nombre;//obtenemos el nombre a siguiente en caso de no haber encontrado coincidencia
    }
    busqueda.close();//cerramos

}