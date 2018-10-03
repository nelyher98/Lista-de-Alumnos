#include "Nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo(void)
{
        sig =NULL;
        ant = NULL;
}

Nodo::Nodo( int mat,string nom , Nodo* s = NULL , Nodo* a = NULL )
  {
        matricula=mat;
        nombre=nom;
        sig=s;
        ant=a;
 }


//SETTERS
void Nodo::setMatricula(int mat) { matricula = mat;}
 
void Nodo::setNombre(string nom){ nombre=nom; }

void Nodo::setAnt(Nodo *a){ ant=a; }

void Nodo::setSig(Nodo *s){ sig=s; }

//GETTERS
