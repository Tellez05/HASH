#pragma once
#include "MyLinkedList.h"

class MyHashTable{
    public: 
    MyLinkedList* tabla; 
    int size; 
    int sizeA; 
    MyHashTable(); 
    ~MyHashTable(); 
    bool isEmpty();
    void put(string key, int value); 
    void get(string key); 
    void remove(string key);
};