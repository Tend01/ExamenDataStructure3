#include "inbox.h"
#include "email.h"

void Inbox::addEmail(const Email* email) {
    // Agrega un correo electrónico al conjunto allEmails.
    allEmails.insert(email);
}

void Inbox::removeEmail(const Email* email) {
    // Elimina el correo electrónico del conjunto allEmails.
    allEmails.erase(email);
}

Inbox::EmailList Inbox::filterEmails(const std::string& sender, bool readFilter, bool starredFilter) const {
    // Crea una lista de correos electrónicos filtrados.
    EmailList filteredEmails;

    // Itera a través de los correos electrónicos en el conjunto allEmails.
    for (const Email* email : allEmails) {
        // Filtra los correos electrónicos basados en las opciones de filtro y el remitente.
        if ((sender.empty() || email->sender == sender) &&
            (!readFilter || email->isRead) && (!starredFilter || email->isStarred)) {
            // Agrega el correo electrónico a la lista filtrada si cumple con los criterios.
            filteredEmails.push_back(email);
        }
    }

    // Devuelve la lista de correos electrónicos filtrados.
    return filteredEmails;
}
