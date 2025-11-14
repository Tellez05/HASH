#include "MyLinkedList.h"

int MyLinkedList::getAt(string key){
    MyNodoLL* current = this->head;
    while(current!= nullptr){
        if(current->key = key){
            return current->value; 
        }else{
            current = current->next; 
        }
    }
    throw invalid_argument("No esta la llave: "+key); 
}

void MyLinkedList::removeAt(string key){

} 

void MyLinkedList::flush(){
    //borrar todos los nodos sin dejar un leak de memoria
}