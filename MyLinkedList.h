#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <functional>
using namespace std; 

struct MyNodoLL{
    string key; 
    int value; 
    MyNodoLL* next; 
    MyNodoLL(string key, int value, MyNodoLL* next){
        this->key = key; 
        this->value = value; 
        this->next = next; 
    }
    MyNodoLL(string key, int value):MyNodoLL(key, value, nullptr){};
};

class MyLinkedList{

    MyLinkedList(); 
    ~MyLinkedList(); 
    int getAt(string key);
    void removeAt(string key); 
    void flush(); 
};