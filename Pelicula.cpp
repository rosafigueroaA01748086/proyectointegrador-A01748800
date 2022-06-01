#include "Pelicula.h"
#include <iostream>
#include <string>
#include "Video.h"
using std ::string;

Pelicula::Pelicula()
{
    duracionN = 0;
    generoN = "no tiene genero";
}
Pelicula::Pelicula(string id, string nombre, string fecha_estreno, double cali, int duracion, string genero) : Video(id, nombre, fecha_estreno, cali)
{
    duracionN = duracion;
    generoN = genero;
}
int Pelicula::getDuracion() { return duracionN; }
string Pelicula::getGenero() { return generoN; }
