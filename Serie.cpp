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

double Serie::obtenerCalificacionesPromedio() const
{
	if (episodios.empty())
	{
		return -1; // o 0.0 si prefieres evitar negativos
	}

	double suma = 0.0;
	int contador = 0;

	for (Episodio *ep : episodios)
	{
		double calif = ep->obtenerCalificacionPromedio();
		if (calif != -1)
		{ // considera solo episodios con calificaciones
			suma += calif;
			contador++;
		}
	}

	if (contador == 0)
	{
		return -1; // ningún episodio tenía calificaciones
	}

	return suma / contador;
}

string Serie::getNombre() const { return nombre; }
string Serie::getId() const { return id; }