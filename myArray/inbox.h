#ifndef INBOX_H
#define INBOX_H

#include <vector>
#include <string>
#include <unordered_set>
#include "email.h"

class Inbox {
private:
    // Alias para el conjunto de correos electrónicos
    using EmailSet = std::unordered_set<const Email*>; 
    // Conjunto que almacena todos los correos electrónicos
    EmailSet allEmails; 

public:
    // Alias para la lista de correos electrónicos
    using EmailList = std::vector<const Email*>; 

    // Método para agregar un correo electrónico al conjunto de correos electrónicos
    void addEmail(const Email* email); 

    // Método para eliminar un correo electrónico del conjunto de correos electrónicos
    void removeEmail(const Email* email); 

    // Método para filtrar correos electrónicos basados en el remitente y los criterios de lectura y destacado
    EmailList filterEmails(const std::string& sender, bool readFilter, bool starredFilter) const;
};

#endif 
