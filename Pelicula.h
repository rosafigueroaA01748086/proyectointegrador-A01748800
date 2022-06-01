#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
#include <string>
#include "Video.h"
using std ::string;

class Pelicula : public Video
{
private:
    int duracionN;
    string generoN;

public:
    Pelicula();
    Pelicula(string id, string nombre, string fecha_estreno, double cali, int duracion, string genero);
    int getDuracion();
    string getGenero();
};
#endif