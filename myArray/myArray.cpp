#include "myArray.h"

// Implementaci�n del constructor de MyArray (inicialmente vac�o)
template <typename T>
MyArray<T>::MyArray() {}

// Implementaci�n de la funci�n push_back que agrega un elemento al final del MyArray
template <typename T>
void MyArray<T>::push_back(T value) {
    data.push_back(value);
}

template <typename T>
T MyArray<T>::MyFunction(int index) {
    // Si el �ndice es no negativo
    if (index >= 0) {
        // Si el �ndice est� dentro de los l�mites del vector data
        if (index < static_cast<int>(data.size())) {
            // Devolvemos el elemento correspondiente
            return data[index];
        }
        else {
            throw std::out_of_range("�ndice fuera de los l�mites del array.");
        }
    }
    // Si el �ndice es negativo
    else {
        // Si el �ndice calculado a partir del final est� dentro de los l�mites del vector data
        if (data.size() + index >= 0) {
            // Devolvemos el elemento correspondiente a partir del final
            return data[data.size() + index];
        }
        else {
            throw std::out_of_range("�ndice fuera de los l�mites del array.");
        }
    }
}

// Instanciaciones expl�citas para int y char para evitar errores de enlace
template class MyArray<int>;
template class MyArray<char>;
