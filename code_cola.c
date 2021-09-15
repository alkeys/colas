#include "cola.h"
#include <stdio.h>
#include <stdlib.h>

void crearCola(Cola *cola) {
    cola->primer = cola->ultimo = NULL;
}

void insertar(Cola *cola, int elemento) {
    nodo_cola *a;
    a = (nodo_cola*) malloc(sizeof (nodo_cola));
    a->dato = elemento;
    a -> siguiente = NULL;
    if (cola -> primer == NULL) {
        cola -> primer = a;
    } else {
        cola -> ultimo -> siguiente = a;
    }
    cola -> ultimo = a;
}

int quitar(Cola *cola) {
    int e;
    nodo_cola *a;
    if (!colaVacia(cola)) {
        e = cola -> primer -> dato;
        a = cola -> primer;
        cola -> primer = cola -> primer -> siguiente;
        free(a);
        return e;
    }
}

void borrarCola(Cola *cola) {
    while (!colaVacia(cola)) {
        printf("%d - ", quitar(cola));
    }
}

int frente(Cola *cola) {
    if (!colaVacia(cola)) return cola -> primer-> dato;
}

int colaVacia(Cola *cola) {
    if (cola -> primer == NULL) return 1;
    else return 0;
}