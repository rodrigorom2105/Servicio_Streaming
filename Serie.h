#pragma once
#include "Episodio.h"
#include <vector>
using namespace std;

class Serie
{
private:
	string id, nombre;
	vector<Episodio *> episodios;

public:
	Serie(string id, string nombre);
	void agregarEpisodio(Episodio *episodio);
	void mostrarEpisoidios(double calificacionMinima = 0);
	double obtenerCalificacionesPromedio() const;
	string getNombre() const;
	string getId() const;
};