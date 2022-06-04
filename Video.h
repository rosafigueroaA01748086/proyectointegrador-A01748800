#ifndef VIDEO_H
#define VIDEO_H
using namespace std;
#include <iostream>
#include <string>
using std::string;

class Video
{
private:
    // Atributos
    string idN;
    string nombreN;
    string fecha_estrenoN;
    double caliN;
    int duracionN;

public:
    // métodos
    Video();
    Video(string id, string nombre, string fecha_estreno, double cali, int duracion);
    string getId();
    string getNombre();
    string getFechaE();
    double getCalificacion();
    int getDuracion();

    void display();
};
#endif
