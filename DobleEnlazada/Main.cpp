#include <iostream>
#include <conio.h>
#include "Lista.cpp"
 
using namespace std;
 
main()
{

Lista *Alumno=new Lista; //INSTANCIAR
    int opc;
    int mat;
    string nom;


    do{
        cout<<"*****************************"<<endl;
        cout<<"LISTA DOBLEMENTE ENLAZADA "<<endl;
        cout<<"*****************************"<<endl;
        cout<<"\n MENU";
        cout<<"\n 1. AGREGAR A LA LISTA ";
        cout<<"\n 2. MOSTRAR LOS DATOS ";
        cout<<"\n 3. SALIR ";
        cout<<endl<<"\n OPCION: ";
        cin >> opc;

        switch(opc){
        case 1:
            cout<<"\n INGRESE DATOS"<<endl;
            cout<<"INGRESE MATRICULA: ";
            cin>>mat;
            cout<<"INGRESE NOMBRE: ";
            cin>>nom;
            Alumno->Insertar(mat,nom);
            cout<<endl<<"\nAGREGADO"<<endl;
            break;
        case 2:
            if(Alumno->Vacia())
            {
                cout << "\n NO SE ENCONTRARON REGISTROS";
                break;
            }

            cout << "\n DATOS GUARDADOS EN LA LISTA: \n ";
            Alumno->Mostrar();
            break;
        case 3:
            cout << " SALIENDO..." << endl;
            break;
        default:
            cout << "OPCION NO EXISTENTE" << endl;
            break;
        }

       cout<<endl<<endl;
       getch();
       system("cls");

    }while(opc!=3);

    return 0;
}
