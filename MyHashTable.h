#pragma once


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