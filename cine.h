// cine.h

#ifndef CINE_H
#define CINE_H

#include <string>

class cine {
public:
    void showMenu(); // Declaración del método showMenu
    void seating(const std::string& pelicula, const std::string& hora, int precio); // Declaración del método seating
};

#endif // CINE_H
