#include <iostream>
#include "Ejercicio5.h"
using namespace std;
int main() {
    int opcion;
   Ejercicio5::verContacto();
    cout<<"1: Registrar contacto \t2:VerContactos\t3:Buscar Contacto\t0:Salir"<<endl;
    cin >>opcion;
    while(opcion!=0){
        switch (opcion) {
            case 1:
                Ejercicio5::registrar();
                break;
            case 2:
                Ejercicio5::verContacto();
                break;
            case 3:
                Ejercicio5::buscarContacto();
        }
        cout<<"1: Registrar contacto \t2:VerContactos\t3:Buscar Contacto\t0:Salir"<<endl;
        cin >>opcion;
    }
    return 0;
}
