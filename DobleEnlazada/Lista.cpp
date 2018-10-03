#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista(void) { Inicializar(); } // CONSTRUCTOR

    
void Lista::Insertar(int mat,string nom, Nodo* pos){

        Nodo* aux;
        Nodo* nuevo = new Nodo(mat,nom);

        if (Vacia()){
                lista = nuevo;

        }else{
                if(pos == Inicio()){

                        aux = Inicio();
                        aux->setAnt(nuevo);
                        nuevo->setSig(aux);
                        lista = nuevo;

                }else{
                    if (pos == NULL){

                        aux = Fin();
                        aux->setSig(nuevo);
                        nuevo->setAnt(aux);


                       }else{
                        aux = Inicio();

                          while (aux){
                                if (aux == pos){

                                        Anterior(aux)->setSig(nuevo);
                                        nuevo->setAnt( Anterior(aux) );
                                        nuevo->setSig( aux );
                                        aux->setAnt(nuevo);

                                }else {
                                    aux = aux->getSig();
                                    }
                          }
                       }
                }
            }
}

void Lista::Mostrar(){

    Nodo* aux;
        if ( !Vacia() ){
            aux = Inicio();
            do{
            cout << aux ->getMatricula()<<" "<<aux->getNombre();
            cout << "\n";
            aux = aux ->getSig();
            }while(aux!=NULL);
            cout<<endl;
            cout<<"Lista al reves"<<endl;
            aux = Fin();
            do{
            cout << aux ->getMatricula()<<" "<<aux->getNombre();
            cout << "\n";
            aux = aux ->getAnt();
           } while(aux!=NULL);
        }
}

Lista::~Lista(void){

}
