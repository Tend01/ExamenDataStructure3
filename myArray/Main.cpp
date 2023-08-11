#include <iostream>
#include "email.h"   
#include "inbox.h"   
#include "myArray.h"

int main() {
    // Ejemplo con MyArray de chars
    MyArray<char> myCharArray;
    myCharArray.push_back('a');
    myCharArray.push_back('b');
    myCharArray.push_back('c');
    myCharArray.push_back('d');
    myCharArray.push_back('e');
    std::cout << myCharArray.MyFunction(-1) << std::endl; // Salida: 'e'

    // Ejemplo con MyArray de ints
    MyArray<int> myIntArray;
    myIntArray.push_back(1);
    myIntArray.push_back(2);
    myIntArray.push_back(3);
    std::cout << myIntArray.MyFunction(-1) << std::endl; // Salida: 3

    // Crear instancias de correos electrónicos
    Email email1("lalo@example.com", "Conocernos");
    Email email2("derikBotInsanito777@example.com", "Plan para jugar valorant");
    email2.markAsRead();
    email2.markAsStarred();

    // Crear una instancia de Inbox y agregar correos
    Inbox inbox;
    inbox.addEmail(&email1);
    inbox.addEmail(&email2);

    // Filtrar y mostrar correos electrónicos

    Inbox::EmailList filteredEmails = inbox.filterEmails("derikBotInsanito777@example.com", true, true);

    for (const Email* email : filteredEmails) {
        std::cout << "Para: " << email->sender << ", Asunto: " << email->subject << std::endl;

    }


    return 0;
}

