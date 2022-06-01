#include <iostream>
#include "Episodio.h"
#include <string>
#include "Video.h"
using std ::string;

Episodio::Episodio()
{
    temporadaN = 0;
    numEpN = 0;
}

Episodio::Episodio(string id, string nombre, string fecha_estreno, double cali, int temporada, int numEp) : Video(id, nombre, fecha_estreno, cali)
{
    temporadaN = temporada;
    numEpN = numEp;
}

int Episodio::getTemp() { return temporadaN; }
int Episodio::getNoEp() { return numEpN; }