
#include <stdlib.h>
#include <string.h>
#ifndef COLA_H
#define COLA_H

typedef int tipo_dato;

typedef struct nodo{
    tipo_dato dato;
    struct nodo* siguiente;
}nodo_cola;

typedef struct cola{
    nodo_cola* primer;
    nodo_cola* ultimo;
}Cola;

void crearCola(Cola *cola);
void insertar(Cola *cola,int elemento);
int quitar(Cola *cola);
void borrarCola(Cola *cola);
int frente(Cola *cola);
int colaVacia(Cola *cola);

#endif

