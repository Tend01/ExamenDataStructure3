#ifndef MYARRAY_H
#define MYARRAY_H

#include <iostream>
#include <vector>

// Definición de la clase MyArray con plantilla (template)
template <typename T>
class MyArray {
private:
    std::vector<T> data; // Vector que almacenará los elementos de MyArray

public:
    // Constructor de la clase MyArray
    MyArray(); 
    // agregar elementos al final del MyArray
    void push_back(T value); 
    // permite acceder a los elementos con índices negativos
    T MyFunction(int index); 
};

#endif // MYARRAY_H
