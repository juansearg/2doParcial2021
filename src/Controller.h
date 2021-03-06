#ifndef CONTROLLER_H_
#define CONTROLLER_H_

int controller_loadFromText(char* path , LinkedList* pArrayListLibros);
int controller_loadFromBinary(char* path , LinkedList* pArrayListLibros);
int controller_addLibros(LinkedList* pArrayListLibros);
int controller_editLibros(LinkedList* pArrayListLibros);
int controller_removeLibros(LinkedList* pArrayListLibros);
int controller_ListLibros(LinkedList* pArrayListLibros);
int controller_sortLibros(LinkedList* pArrayListLibros);
int controller_saveAsText(char* path , LinkedList* pArrayListLibros);
int controller_saveAsBinary(char* path , LinkedList* pArrayListLibros);
int menu();
int controller_EditorialConDescuento(LinkedList* pArrayListLibros);
int controller_listaAutor(LinkedList* pListLibros);

#endif /* CONTROLLER_H_ */
