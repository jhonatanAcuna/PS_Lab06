//
// Created by jacun on 15/06/2020.
//

#include "Ejercicio2.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
struct Tdato {
    int b;
    char s[100];
};
int x, n, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
double f;
char nombre[] = "Ejercicios ficheros binarios";
Tdato p;
ifstream f1;
ofstream f2;
void Ejercicio2::datoEntero() {//1:Escribir el dato entero x en el fichero.
    f2.open("salida.dat", ios::binary);//abrimos fichero de entrada
    cin >> x;
    f2.write(reinterpret_cast<char *>(&x), sizeof(x));//casteamos y escribimos en el fichero
    f2.close();//se cierra
    cout << "Asignacion completada........." << endl;
}

void Ejercicio2::datoDouble() {//2:Escribir el dato double f en el fichero.
    f2.open("salida.dat", ios::binary);//abrimos fichero de entrada
    cin >> f;
    f2.write(reinterpret_cast<char *>(&f), sizeof(f));//casteamos y escribimos en el fichero
    f2.close();//se cierra
    cout << "Asignacion completada........." << endl;
}

void Ejercicio2::arreglo() {//3:Escribir los 5 primeros elementos del array a en el fichero.
    f2.open("salida.dat", ios::binary);//abrimos fichero de entrada
    for (int i = 0; i < 5; i++) {
        f2.write((char *) (&a[i]), sizeof(int));//casteamos y escribimos en el fichero
    }
    f2.close();//se cierra
    cout << "Se ha copiado con exito" << endl;
}

void Ejercicio2::letras() {//4:Escribir los 10 primeros caracteres de la cadena nombre en el fichero.
    f2.open("salida.dat", ios::binary);//abrimos fichero de entrada
    for (int i = 0; i < 10; i++) {
        f2.write((char *) (&nombre[i]), sizeof(char));//casteamos y escribimos en el fichero
    }
    f2.close();//se cierra
    cout << "Se ha copiado con exito" << endl;
}

void Ejercicio2::tipoT() {//5:Escribir el dato de tipo Tdato p en el fichero.
    f2.open("salida.dat", ios::binary);//abrimos fichero de entrada
    strcpy(p.s, "Archivo");//le damos un nombre al tipo TDato
    cin >> p.b;
    f2.write(reinterpret_cast<char *>(&p), sizeof(Tdato));//casteamos y escribimos en el fichero
    f2.close();//se cierra
    cout << "Creacion con exito" << endl;
}

void Ejercicio2::leerInt() {//6: Leer un dato entero del fichero y almacenarlo en la variable x.
    f1.open("salida.dat", ios::in | ios::binary);//abrimos fichero de lectura
    f1.read((char *) &x, sizeof(int));//leemo y asgiamos valor a x
    cout << x << endl;
    f1.close();//cerramos el fichero
}

void Ejercicio2::leerDouble() {//7:Leer un dato double del fichero y almacenarlo en la variable f
    f1.open("salida.dat", ios::in | ios::binary);//abrimos fichero de lectura
    f1.read(reinterpret_cast<char *>(&f), sizeof(double));;//leemo y asgiamos valor a f
    cout << f << endl;
    f1.close();//cerramos el fichero
}

void Ejercicio2::leerArrayInt() {//8: Leer 5 enteros y almacenarlos en el array a.
    f1.open("salida.dat", ios::in | ios::binary);//abrimos fichero de lectura
    for (int i = 0; i < 5; i++) {
        f1.read((char *) (&a[i]), sizeof(int));//leemo y asgiamos valor al arreglo a
        cout << a[i] << endl;
    }
    f1.close();//cerramos el fichero
}

void Ejercicio2::cadCaracteres() {//9:Leer 10 caracteres y almacenarlos en la cadena nombre.
    f1.open("salida.dat", ios::in | ios::binary);//abrimos fichero de lectura
    for (int i = 0; i < 10; i++) {
        f1.read((char *) (&nombre[i]), sizeof(char));//leemo y asgiamos valor al arreglo nombre
        cout << nombre[i];
    }
    cout << endl;
    f1.close();//cerramos el fichero

}

void Ejercicio2::leerTDato() {//10: Leer un dato de tipo Tdato y almacenarlo en la variable p.
    f1.open("salida.dat", ios::in | ios::binary);//abrimos fichero de lectura
    f1.read((char *) &p, sizeof(Tdato));//leemos y asignamos a p el tipoDato
    cout << p.b << endl;//imprimimos el valor
    cout << p.s << endl;//imprimimos el nombre;2
    f1.close();//cerramos el fichero
}