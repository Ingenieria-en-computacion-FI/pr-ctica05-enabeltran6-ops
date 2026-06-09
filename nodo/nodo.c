#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo* NewNode = (Nodo*)malloc(sizeof(Nodo));
    if (NewNode != NULL){
        NewNode -> dato = dato;
        NewNode -> siguiente = NULL;
    } return NewNode;
}
    
void nodo_destruir(Nodo* nodo)
{
    // Todo: implementar la función 
    if (!nodo->siguiente){
        free(nodo);
    }
}
