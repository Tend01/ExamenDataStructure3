#include "email.h"

Email::Email(const std::string& sender, const std::string& subject)
    : sender(sender), subject(subject), isRead(false), isStarred(false) {}

void Email::markAsRead() {
    // Marca el correo como leído, estableciendo el valor de isRead a verdadero.
    isRead = true;
}

void Email::markAsUnread() {
    // Marca el correo como no leído, estableciendo el valor de isRead a falso
    isRead = false;
}

void Email::markAsStarred() {
    // Marca el correo como destacado, estableciendo el valor de isStarred a verdadero.
    isStarred = true;
}

void Email::unmarkAsStarred() {
    // Marca el correo como no destacado, estableciendo el valor de isStarred a falso.
    isStarred = false;
}

