#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int dato)
{
    Nodo* n=(Nodo*)malloc (sieof(Nodo))
    // Todo: implementar la función }
if(n==NULL){
    return NULL;
}
    
void nodo_destruir(Nodo* nodo)
{
    // Todo: implementar la función 
    if (!nodo->siguiente){
        free(nodo);
    }
}
