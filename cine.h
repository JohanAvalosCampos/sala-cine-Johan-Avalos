// cine.h

#ifndef CINE_H
#define CINE_H

#include <string>

class cine {
public:
    void showMenu(); // Declaraci�n del m�todo showMenu
    void seating(const std::string& pelicula, const std::string& hora, int precio); // Declaraci�n del m�todo seating
};

#endif // CINE_H
