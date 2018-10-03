#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Nodo.cpp"
 
//CLASE LISTA
class Lista{
private:
    Nodo *lista; // ANCLA
public:
    Lista(void);// CONSTRUCTOR
    ~Lista(void);

    // METODOS BASICOS
    Nodo *Inicio() { return lista; }
    Nodo *Siguiente(Nodo *pos) { return pos->getSig(); }
    Nodo *Anterior(Nodo *pos) { return pos->getAnt(); }

    Nodo *Fin() {
        Nodo *aux = lista;

        if ( !Vacia() ) { while ( aux->getSig() ) { aux = aux->getSig(); } }
        return aux;
    }

    // METODOS DE LA LISTA
    void Inicializar() { lista = NULL; }
    bool Vacia() { return lista==NULL; }
    void Mostrar();
    void Insertar(int mat,string nom, Nodo* pos = NULL);
    void OrdenarSeleccion();
};

#endif // LIST_H

