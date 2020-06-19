//
// Created by jacun on 17/06/2020.
//

#include "Ejercicio1.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Ejercicio1.h"

using namespace std;
//DEFINIENDO LAS VARIABLES NECESARIAS
string nombre, auxnombre, semestre, edad;
int clave = 0, auxclave = 0;
char grupo[10];
char opca;
bool encontrado = false;


void Ejercicio1::altas() {
    ///Variables de la biblioteca fstream para el manejo de archivos
    ofstream escritura;
    ifstream consulta;

    do {
        escritura.open("alumnos.txt", ios::out | ios::app);//crea y escribe, si ya tiene texto une al final del archivo
        consulta.open("alumnos.txt",
                      ios::in);//solamente consulta o lee usando la variable sobre el archivo basico alumnos.txt

        if (escritura.is_open() && consulta.is_open()) {//verificamos si ammbos estan abiertos


            bool repetido = false;// variable de verificacion de repeticion

            cout << "\n";
            cout << "\tIngresa la clave del alumno:    ";
            cin >> auxclave;

            //A continuaciÃ³n se aplica el tipo de lectura de archivos secuencial
            consulta >> clave;//obtenemos la clave de consulta
            while (!consulta.eof()) {//verificamos que no se haya llegado a fin del documento
                consulta >> nombre >> semestre >> grupo >> edad;//obtenemos nombre, semestre, grupo, edad
                if (auxclave == clave) {//si la clave obtenida de consulta es la misma de de la clave de consulta
                    cout << "\t\tYa existe la clave del alumno...\n";
                    repetido = true;//a repetido asignamos true
                    break;
                }
                consulta >> clave;// clave
            }

            if (repetido == false) {//si repetido esta en false
                cout << "\tIngresa el nombre del alumno:   ";
                cin >> nombre;
                cout << "\tIngresa el semestre del alumno: ";
                cin >> semestre;
                cout << "\tIngresa el grupo del alumno:    ";
                cin >> grupo;
                cout << "\tIngresa la edad del alumno:     ";
                cin >> edad;
                //ESCRIBIENDO LOS DATOS CAPTURADOS POR EL USUARIO EN EL ARCHIVO
                escritura << auxclave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;
                cout << "\n\tRegistro agregado...\n";
            }

            cout << "\n\tDeseas ingresar otro alumno? (S/N): ";//Seguir agregando alumnos
            cin >> opca;

        } else {
            cout << "El archivo no se pudo abrir \n";
        }

        escritura.close();//cerramos escritura
        consulta.close();//cerramos consulta

    } while (opca == 'S' or opca == 's');//mientras opca sea igual a S o s seguira realizando

}

void Ejercicio1::bajas() {
    ofstream aux;
    ifstream lectura;

    encontrado = false;//flag que usaremos para verificar si encontramos al alumno adecuado

    aux.open("auxiliar.txt", ios::out);// abrimo aux con el fichero a revisar (auxiliar)
    lectura.open("alumnos.txt", ios::in);//abrimos lectura con el fichero a revisar (alumnos)

    if (aux.is_open() && lectura.is_open()) {//verificamos si estan abiertos correctamente

        cout << "\n";
        cout << "\tIngresa la clave del alumno que deseas eliminar: ";
        cin >> auxclave;

        ///De nuevo se aplica el tipo de lectura de archivos secuencial, esto quiere decir que lee campo por campo hasta
        ///hasta llegar al final del archivo gracias a la funciÃ³n .eof()
        lectura >> clave;//obtenemos la clave
        while (!lectura.eof()) {
            lectura >> nombre >> semestre >> grupo >> edad;// otenemos nombre semestre grupo y edad
            if (auxclave == clave) {// si coinciden
                encontrado = true;//actualizamos nuestro flag
                cout << "\n";
                cout << "\tClave:    " << clave << endl;
                cout << "\tNombre:   " << nombre << endl;
                cout << "\tSemestre: " << semestre << endl;
                cout << "\tGrupo:    " << grupo << endl;
                cout << "\tEdad:     " << edad << endl;
                cout << "\t________________________________\n\n";
                cout << "\tRealmente deseas eliminar el registro actual (S/N)? ---> ";
                cin >> opca;

                if (opca == 'S' or opca == 's') {// verificamos la opcion
                    cout << "\n\n\t\t\tRegistro eliminado...\n\n\t\t\a";//se concreta la eliminacion
                } else {
                    aux << clave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;// se asigna los datos del alumno en el archivo
                }

            } else {
                aux << clave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;// guardamos los datos de los demas alumno en el archivo
            }
            lectura >> clave;
        }
    } else {
        cout << "\n\tEl archivo no se pudo abrir \n";//de haber fallas entonces
    }

    if (encontrado == false) {// si nuestro flag fuera false
        cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";// en caso no haya coinciedencias
    }

    aux.close();
    lectura.close();
    remove("alumnos.txt");//eliminamos alumnos
    rename("auxiliar.txt", "alumnos.txt");//renombramos a auxiliar como alumnos
}


void Ejercicio1::consultas() {
    //Lectura de archivos

    ifstream lectura;
    lectura.open("alumnos.txt", ios::out | ios::in);//CREA, ESCRIBE O LEE
    if (lectura.is_open()) {
        //LEYENDO Y MOSTRANDO CADA CAMPO DEL ARCHIVO DE FORMA SECUENCIAL
        lectura >> clave;//obtenemos la clave
        while (!lectura.eof()) {//mientras no haya llegado a la ultima linea
            lectura >> nombre >> semestre >> grupo >> edad;
            cout << "\n";
            cout << "\tClave:    " << clave << endl;
            cout << "\tNombre:   " << nombre << endl;
            cout << "\tSemestre: " << semestre << endl;
            cout << "\tGrupo:    " << grupo << endl;
            cout << "\tEdad:     " << edad << endl;
            lectura >> clave;
            cout << "\t________________________________\n";
        }

    } else {
        cout << "El archivo no se pudo abrir \n";
    }
    lectura.close();//cerramos
}


void Ejercicio1::buscar() {
    ifstream lectura;
    lectura.open("alumnos.txt", ios::out | ios::in);

    encontrado = false;//flag verifica si encontramios al alumno

    if (lectura.is_open()) {
        cout << "\n\tIngresa la clave del alumno que deseas buscar: ";
        cin >> auxclave;

        lectura >> clave;
        while (!lectura.eof()) {
            lectura >> nombre >> semestre >> grupo >> edad;
            //comparar cada registro para ver si es encontrado

            if (auxclave == clave) {
                cout << "\n";
                cout << "\tClave:    " << clave << endl;
                cout << "\tNombre:   " << nombre << endl;
                cout << "\tSemestre: " << semestre << endl;
                cout << "\tGrupo:    " << grupo << endl;
                cout << "\tEdad:     " << edad << endl;
                cout << "\t________________________________\n";
                encontrado = true;
                break;
            }//fin del if mostrar encontrado

            //lectura adelantada
            lectura >> clave;
        }//fin del while
        if (encontrado == false) {
            cout << "\n\n\tNo hay registros con la clave: " << auxclave << "\n\n\t\t\t";
        }
    } else {
        cout << "\n\tAun no se pudo abrir el archivo...";
    }

    lectura.close();
}

void Ejercicio1::modificar() {
    ofstream aux;//archivo de escritura
    ifstream lectura;//archivo de lectura

    encontrado = false;// flag verifica si encontramos al alumno

    aux.open("auxiliar.txt", ios::out);
    lectura.open("alumnos.txt", ios::in);

    if (aux.is_open() && lectura.is_open()) {

        cout << "\n";
        cout << "\tIngresa la clave del alumno que deseas modificar: ";
        cin >> auxclave;//clave del alumno a intercambiar

        lectura >> clave;//obtenemos la clave de alumnos
        while (!lectura.eof()) {//verificamos si no hemos llegado al final del documento
            lectura >> nombre >> semestre >> grupo >> edad;//obtenemos los datos
            if (auxclave == clave) {//comparacion
                encontrado = true;//flag en estado de true
                cout << "\n";
                cout << "\tClave:    " << clave << endl;
                cout << "\tNombre:   " << nombre << endl;
                cout << "\tSemestre: " << semestre << endl;
                cout << "\tGrupo:    " << grupo << endl;
                cout << "\tEdad:     " << edad << endl;
                cout << "\t________________________________\n\n";
                cout << "\tIngresa el nuevo nombre del alumno con la clave: " << auxclave << "\n\n\t---> ";
                cin >> auxnombre;

                aux << clave << " " << auxnombre << " " << semestre << " " << grupo << " " << edad << endl;//nuevos valores de nuestro alumno
                cout << "\n\n\t\t\tRegistro modificado...\n\t\t\a";
            } else {
                aux << clave << " " << nombre << " " << semestre << " " << grupo << " " << edad << endl;//agregamos los nuevos alumnos al nuevo txt
            }
            lectura >> clave;//obtenemos siguiente clave a analizar
        }
    } else {
        cout << "\n\tEl archivo no se pudo abrir \n";//mensaje de error
    }

    if (encontrado == false) {//si el flag en false
        cout << "\n\tNo se encontro ningun registro con la clave: " << auxclave << "\n\n\t\t\t";
    }

    aux.close();//cerramos
    lectura.close();//cerramos
    remove("alumnos.txt");//eliminamos el antiguo fichero
    rename("auxiliar.txt", "alumnos.txt");// creamos el nuevo fichero
}




