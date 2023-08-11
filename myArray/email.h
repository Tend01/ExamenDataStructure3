#ifndef EMAIL_H
#define EMAIL_H

#include <string>

class Email {
public:
    // Constructor de la clase Email que acepta el remitente y el asunto como argumentos.
    Email(const std::string& sender, const std::string& subject);

    // Marca el correo como leído.
    void markAsRead();

    // Marca el correo como no leído.
    void markAsUnread();

    // Marca el correo como destacado.
    void markAsStarred();

    // Marca el correo como no destacado.
    void unmarkAsStarred();

    // Atributo booleano que indica si el correo está leído.
    bool isRead;

    // Atributo booleano que indica si el correo está destacado.
    bool isStarred;

    // Atributo que almacena el remitente del correo.
    std::string sender;

    // Atributo que almacena el asunto del correo.
    std::string subject;
};

#endif // EMAIL_H
