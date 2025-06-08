#include "Serie.h"
#include <iostream>
using namespace std;

Serie::Serie(string id, string nombre) : id(id), nombre(nombre) {}

void Serie::agregarEpisodio(Episodio *episodio)
{
	episodios.push_back(episodio);
}

void Serie::mostrarEpisoidios(double calificacionMinima)
{
	for (const auto &episodio : episodios)
	{
		if (episodio->obtenerCalificacionPromedio() >= calificacionMinima)
		{
			episodio->mostrarInformacion();
		}
	}
}

string Serie::getNombre() const { return nombre; }
string Serie::getId() const { return id; }