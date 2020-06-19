#include <iostream>
#include "Ejercicio1.h"
using namespace std;
int main()
{
    system ("color f0");
    int opc;

    do{
        system("cls");

        cout<<"\n\tManejo de archivos en c++\n\n";
        cout<<"\n\t1.-Altas";
        cout<<"\n\t2.-Bajas";
        cout<<"\n\t3.-Consultas";
        cout<<"\n\t4.-Buscar un registro";
        cout<<"\n\t5.-Modificaciones";
        cout<<"\n\t6.-Salir";
        cout<<"\n\n\tElige una opcion:  ";
        cin>>opc;
        switch (opc)
        {
            case 1:{
                system("cls");
                Ejercicio1::altas();
                cout<<"\n\t\t";
                system ("pause");
                break;
            }
            case 2:{
                system("cls");
                Ejercicio1::bajas();
                cout<<"\n\t\t";
                system ("pause");
                break;
            }

            case 3:{
                system("cls");
                Ejercicio1::consultas();
                cout<<"\n\t\t";
                system ("pause");
                break;
            }
            case 4:{
                system("cls");
                Ejercicio1::buscar();
                cout<<"\n\t\t";
                system ("pause");
                break;
            }
            case 5:{
                system("cls");
                Ejercicio1::modificar();
                cout<<"\n\t\t";
                system ("pause");

                break;
            }
            case 6:{
                cout<<"\n\n\tHa elegido salir...\n\n\t\t"; system ("pause");
                break;
            }
            default:{
                cout<<"\n\n\tHa elegido una opcion inexistente...\n\n\t\t"; system ("pause");
                break;
            }
        }//fin switch

    }while (opc!=6);

    system("cls");

    return 0;
}
