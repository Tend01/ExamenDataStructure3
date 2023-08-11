#ifndef INBOX_H
#define INBOX_H

#include <vector>
#include <string>
#include <unordered_set>
#include "email.h"

class Inbox {
private:
    // Alias para el conjunto de correos electr�nicos
    using EmailSet = std::unordered_set<const Email*>; 
    // Conjunto que almacena todos los correos electr�nicos
    EmailSet allEmails; 

public:
    // Alias para la lista de correos electr�nicos
    using EmailList = std::vector<const Email*>; 

    // M�todo para agregar un correo electr�nico al conjunto de correos electr�nicos
    void addEmail(const Email* email); 

    // M�todo para eliminar un correo electr�nico del conjunto de correos electr�nicos
    void removeEmail(const Email* email); 

    // M�todo para filtrar correos electr�nicos basados en el remitente y los criterios de lectura y destacado
    EmailList filterEmails(const std::string& sender, bool readFilter, bool starredFilter) const;
};

#endif 
