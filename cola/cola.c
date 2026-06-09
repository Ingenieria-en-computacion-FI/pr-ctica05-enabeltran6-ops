#include "cola.h"

Cola* cola_crear()
{
    return lista_crear();
}

int cola_vacia(Cola* cola)
{
    return lista_vacia(cola);
}

void cola_enqueue(Cola* cola, int dato)
{
    lista_insertar_tail(cola, dato);
}

int cola_dequeue(Cola* cola)
{
     return lista_eliminar_head(cola);
}

int cola_frente(Cola* cola)
{
     return lista_ver_head(cola);
}

void cola_destruir(Cola* cola)
{
    lista_destruir(cola);
}
