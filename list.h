#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include "util.h"

typedef struct List List;
typedef struct Node Node;

/**
 * @brief The Node struct, unidad de la lista
 */
struct Node {
    Node * next, * prev;
    long content;
};

/**
 * @brief The List struct, lista doblemente enlazada, permite guardar
 * datos de cualquier tipo por medio de un long que indica
 * la dirección de memoria.
 */
struct List {
    Node * start, * end;
    long size;
};

/**
 * @brief new_node, constructor del nodo
 * @return puntero al nodo creado
 */
Node * new_node(long);

/**
 * @brief new_list, constructor de la lista
 * @return puntero a la lista creada
 */
List * new_list();

/**
 * @brief add, añade un nodo al final de la lista
 * @param list, lista a la que se va agregar el nodo
 * @param info, informacion que contendra el nodo a crear
 */
void add(List * list, long info);

/**
 * @brief add, añade un nodo al inicio de la lista
 * @param list, lista a la que se va agregar el nodo
 * @param info, informacion que contendra el nodo a crear
 */
void push(List * list, long info);

/**
 * @brief peek, retorna el último elemento agregado pero si desvincularlo de la lista
 * @param list, lista del nodo a ver
 * @return
 */
long peek(List * list);

/**
 * @brief pop, borra el elemento en el tope
 * @param list, lista donde se borrara el nodo
 * @return
 */
long pop(List * list);

/**
 * @brief print_list, convierte la lista en un string
 * @param list, lista a convertir
 * @param format, Ej, "%s" o "%d"
 */

void print_list(List * list, char * format);

#endif // LIST_H
