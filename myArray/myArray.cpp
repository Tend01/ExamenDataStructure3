#include "myArray.h"

// Implementación del constructor de MyArray (inicialmente vacío)
template <typename T>
MyArray<T>::MyArray() {}

// Implementación de la función push_back que agrega un elemento al final del MyArray
template <typename T>
void MyArray<T>::push_back(T value) {
    data.push_back(value);
}

template <typename T>
T MyArray<T>::MyFunction(int index) {
    // Si el índice es no negativo
    if (index >= 0) {
        // Si el índice está dentro de los límites del vector data
        if (index < static_cast<int>(data.size())) {
            // Devolvemos el elemento correspondiente
            return data[index];
        }
        else {
            throw std::out_of_range("Índice fuera de los límites del array.");
        }
    }
    // Si el índice es negativo
    else {
        // Si el índice calculado a partir del final está dentro de los límites del vector data
        if (data.size() + index >= 0) {
            // Devolvemos el elemento correspondiente a partir del final
            return data[data.size() + index];
        }
        else {
            throw std::out_of_range("Índice fuera de los límites del array.");
        }
    }
}

// Instanciaciones explícitas para int y char para evitar errores de enlace
template class MyArray<int>;
template class MyArray<char>;
