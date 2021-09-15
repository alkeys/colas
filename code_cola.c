 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cola.h"


void inicializacion_cola (Cola * serie){
  serie->inicio = NULL;
  serie->fin = NULL;
  serie->tamanio = 0;
}
 
int insertar_cola (Cola * serie, nodo * actual, char *dato){
  
  nodo *nuevo_elemento;
  
  if ((nuevo_elemento = (nodo *) malloc (sizeof (nodo))) == NULL)
        return -1;
  if ((nuevo_elemento->dato = (char *) malloc (50 * sizeof (char)))== NULL)
        return -1;
  
  strcpy (nuevo_elemento->dato, dato);
 
  if(actual == NULL)
  {
    if(serie->tamanio == 0)
    {
                
        serie->fin = nuevo_elemento;
        }
        nuevo_elemento->siguiente = serie->inicio;
        serie->inicio = nuevo_elemento;
  } 
  else 
  {
    if(actual->siguiente == NULL)
        serie->fin = nuevo_elemento;
        
        nuevo_elemento->siguiente = actual->siguiente;
        actual->siguiente = nuevo_elemento;
  }
  serie->tamanio++;
  return 0;
}
 
int quitar_cola (Cola * serie)
{
  nodo *sup_elemento;
  
  if (serie->tamanio == 0)
    return -1;
  
  sup_elemento = serie->inicio;
  serie->inicio = serie->inicio->siguiente;
  
  free (sup_elemento->dato);
  free (sup_elemento);
  
  serie->tamanio--;
  return 0;
}
 
void imprimir_cola(Cola *serie){
  nodo *actual;
  int i;
  actual = serie->inicio;
 
  for(i=0;i<serie->tamanio;++i){
    printf("%p - %s \n",actual, actual->dato);
    actual = actual->siguiente;
  }
}