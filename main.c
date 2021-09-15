#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

#include "cola.h"

int main(int argc, char** argv) {
    Cola cola;
    printf("Ingrese la opcion\n1: Crear Cola\n2: Insertar en cola\n3: Quitar de la cola\n4: Borrar Cola\n5: Frente de la cola\n6: Cola vaica\n7: Salir\n");
    int opcion, e;
    scanf("%d", &opcion);
    do {
        switch (opcion) {
            case 1: crearCola(&cola);
                printf("Cola creada\n");
                break;
            case 2: printf("Ingrese elemento nuevo de la cola\n");
                scanf("%d", &e);
                insertar(&cola, e);
                break;
            case 3: e = quitar(&cola);
                printf("El elemento %d fue quitado de la cola\n", e);
                break;
            case 4: borrarCola(&cola);
                printf("La cola ha sido borrada\n");
                break;
            case 5: e = frente(&cola);

        }
        printf("Ingrese la opcion\n1: Crear Cola\n2: Insertar en cola\n3: Quitar de la cola\n4: Borrar Cola\n5: Frente de la cola\n6: Cola vaica\n7: Salir\n");
        scanf("%d", &opcion);
    } while (opcion != 7);
    return (EXIT_SUCCESS);
}

