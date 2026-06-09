#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{
 Lista*NewLista = (Lista*)malloc(sizeof(Lista));
 if(NewLista != NULL){
    NewLista -> head = NULL;
    NewLista -> tail = NULL;
 }
   
}

bool lista_vacia(Lista* lista)
{
    return (lista-> head == NULL && lista -> tail == NULL);
}

void lista_insertar_head(Lista* lista, int dato)
{
   Nodo* NewNode = nodo_crear(dato);
   NewNode -> siguiente = lista -> head;
    if (lista_vacia(lista)){
        lista -> head = NewNode;
        lista -> tail = NewNode;
    }else{
        NewNode -> siguiente = lista -> head;
        lista -> head = NewNode;
    }
}

void lista_insertar_tail(Lista* lista, int dato)
{
    Nodo* NewNode = nodo_crear(dato);
    NewNode -> siguiente = lista -> tail;
    if (lista_vacia(lista)){
        lista -> head = NewNode;
        lista -> tail = NewNode;
    }else{
        lista->tail->siguiente = NewNode;
        lista -> tail = NewNode;
    }
}

int lista_eliminar_head(Lista* lista)
{
    if (lista_vacia(lista))  return -1;

    Nodo* temp = lista -> head;
    int dato = temp -> dato;

    lista -> head = lista ->head -> siguiente;

    if (lista -> head == NULL){
        lista -> tail == NULL;
    }

    nodo_destruir(temp);
    return dato;
}

int lista_eliminar_tail(Lista* lista)
{
    if (lista_vacia(lista)) return -1;

    int dato;
    
    if (lista->head == lista->tail) {
        dato = lista->head->dato;
        nodo_destruir(lista->head);
        lista->head = NULL;
        lista->tail = NULL;
    } 
   
    else {
        Nodo* actual = lista->head;
       
        while (actual->siguiente != lista->tail) {
            actual = actual->siguiente;
        }
    
        dato = lista->tail->dato;
    
        nodo_destruir(lista->tail);
        actual->siguiente = NULL;
        lista->tail = actual;
    }

  
    return dato;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    if (!lista) return;
    while (!lista_vacia(lista)) {
        lista_eliminar_head(lista);
    }

    free(lista);
}