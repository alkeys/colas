#ifndef COLA_H
#define COLA_H
typedef int tipo_dato;

typedef struct Nodo {
    tipo_dato *dato;
    struct Nodo *siguiente;
}nodo;
 
typedef struct ListaUbicacion{
  nodo *inicio;
  nodo *fin;
  int tamanio;
} Cola;

void inicializacion_cola (Cola * serie);

int insertar_cola (Cola * serie, nodo * actual, char *dato);

int quitar_cola (Cola * serie);

void imprimir_cola(Cola *serie);




#endif

