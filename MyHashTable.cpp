#include "MyHashTable.h"

MyHashTable::MyHashTable(){
    this->size=0; 
    this->sizeA = 7; 
    this->tabla = new MyLinkedList[this->sizeA];
};