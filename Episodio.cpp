#include <iostream>
#include "Episodio.h"
#include <string>
#include "Video.h"
using std::cout;
using std::endl;
using std ::string;

Episodio::Episodio()
{
    temporadaN = 0;
    numEpN = 0;
}

Episodio::Episodio(string id, string nombre, string fecha_estreno, double cali, int duracion, int temporada, int numEp) : Video(id, nombre, fecha_estreno, cali, duracion)
{
    temporadaN = temporada;
    numEpN = numEp;
}

int Episodio::getTemp() { return temporadaN; }
int Episodio::getNoEp() { return numEpN; }

void Episodio::display()
{
    Video::display();
    cout << "Temporada: " << temporadaN << endl;
    cout << "Número de episodio: " << numEpN << endl;
}