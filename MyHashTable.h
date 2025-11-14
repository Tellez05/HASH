#pragma once
#include "MyLinkedList.h"

class MyHashTable{
    public:
    MyLinkedList* tabla; 
    int size;  //cuantos elementos hay en la tabla
    int sizeA; // tamano del arrego
    void rehashing(); //Crece el arreglo al doble +1 de size actual 
    MyHashTable(); 
    ~MyHashTable(); 
    bool isEmpty();
    void put(string key, int value); 
    int get(string key); 
    void remove(string key);
    int getPos(string key);
};