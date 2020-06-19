#include <iostream> 
#include <fstream> 
#include <cstring>

using namespace std;

struct tipoRegistro { 
	char nombre[32]; 
	int edad;
	float altura;
};

int main() { 
	tipoRegistro pepe; //objeto de tipoRegistro
	tipoRegistro pepe2; //objeto de tipoRegistro
	ofstream fsalida("prueba.dat", ios::out | ios::binary);//abrimos el archivo
	strcpy(pepe.nombre, "Jose Luis");// le asginamos Jose Luis como nombre
	pepe.edad = 32;//edad del objeto
	pepe.altura = 1.78;//altura
	fsalida.write(reinterpret_cast<char *>(&pepe), sizeof(tipoRegistro));//escribimos el ojeto en el archivo binario
	fsalida.close();//cerramos fsalida
	ifstream fentrada("prueba.dat", ios::in | ios::binary);//Abrimos el archivo para realizar la lectura
	fentrada.read(reinterpret_cast<char *>(&pepe2), sizeof(tipoRegistro));//asignamos al objeto tipoRegistro
	cout << pepe2.nombre << endl; cout << pepe2.edad << endl; cout << pepe2.altura << endl; fentrada.close();//imprimimos

	return 0;
}
