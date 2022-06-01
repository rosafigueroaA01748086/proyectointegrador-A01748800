#include <iostream>
#include <string>
#include "Video.h"
#include "Pelicula.h"
#include "Episodio.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    Video peli1("ID35", "Shrek", "2/2008", 8.5);
    /*cout << "Los datos de la pelicula: " << endl;
    cout << peli1.getId() << endl;
    cout << peli1.getNombre() << endl;
    cout << peli1.getCalificacion() << endl;
    cout << peli1.getFechaE() << endl;*/

    cout << "Los datos de la CLASE pelicula: " << endl;
    Pelicula pelicula1("ID35", "Shrek", "2/2008", 8.5, 28, "Terror");
    cout << pelicula1.getNombre() << endl;
    cout << pelicula1.getId() << endl;
    cout << pelicula1.getCalificacion() << endl;
    cout << pelicula1.getFechaE() << endl;
    cout << pelicula1.getGenero() << endl;
    cout << pelicula1.getDuracion() << endl;

    cout << "Los datos de la CLASE Episodio: " << endl;

    Episodio epi1("ID36", "Cap2", "6/2009", 9.5, 2, 5);

    cout << epi1.getNombre() << endl;
    cout << epi1.getId() << endl;
    cout << epi1.getCalificacion() << endl;
    cout << epi1.getFechaE() << endl;
    cout << epi1.getTemp() << endl;
    cout << epi1.getNoEp() << endl;
}
