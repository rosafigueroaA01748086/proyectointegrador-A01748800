#include <iostream>
#include "Video.h"
#include <string>
using namespace std;

Video::Video()
{
    idN = "";
    nombreN = "";
    fecha_estrenoN = "";
    caliN = 0;
}

Video::Video(string id, string nombre, string fecha_estreno, double cali)
{
    idN = id;
    nombreN = nombre;
    fecha_estrenoN = fecha_estreno;
    caliN = cali;
}

string Video::getId() { return idN; }
string Video::getNombre() { return nombreN; }
string Video::getFechaE() { return fecha_estrenoN; }
double Video::getCalificacion() { return caliN; }