#ifndef NODO_H
#define NODO_H
 
#include <iostream>
using namespace std;
 
class Nodo{
private:
    int matricula;
    string nombre;
    Nodo *sig;
    Nodo *ant;
public:
    //CONSTRUCTORES
    Nodo(void);
    Nodo( int,string, Nodo* , Nodo*);
    //SETTERS
    void setMatricula(int);
    void setNombre(string);
    void setAnt(Nodo *);
    void setSig(Nodo *);
    //GETTERS
    int getMatricula()  { return matricula;}
    string getNombre(){return nombre;}
    Nodo *getAnt() { return ant; }
    Nodo *getSig() { return sig; }
    
    friend class Lista;
};

#endif // NODE_H
