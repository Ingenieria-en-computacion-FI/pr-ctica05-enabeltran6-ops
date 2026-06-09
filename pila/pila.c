
#include "pila.h"

Pila* pila_crear()
{
    return lista_crear();
}

int pila_vacia(Pila* pila)
{
    return lista_vacia(pila);
}

void pila_push(Pila* pila, int dato)
{
// Insertamos al final para que el tail sea el top
    lista_insertar_tail(pila, dato);
}

int pila_pop(Pila* pila)
{
    if (pila_vacia(pila)) {
        return -1;
    }
    // Eliminamos del final (el último en entrar es el primero en salir)
    return lista_eliminar_tail(pila);
}

int pila_top(Pila* pila)
{
    if (pila_vacia(pila)) {
        return -1;
    }
    // El top es el dato en el nodo tail
    return pila -> tail -> dato;
}

void pila_destruir(Pila* pila)
{
    lista_destruir(pila);
}