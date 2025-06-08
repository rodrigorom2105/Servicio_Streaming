#include "Episodio.h"
#include <iostream>
using namespace std;

Episodio::Episodio(string id, string titulo, string genero, int duracion, int temporada, int numero, string serieId)
		: Video(id, titulo, genero, duracion), temporada(temporada), numero(numero), serieId(serieId) {}

void Episodio::mostrarInformacion() const
{
	cout << "Episodio: " << titulo << " T" << temporada << "E" << numero << " (" << genero << ")";
	double cal = obtenerCalificacionPromedio();
	cout << " | Calificación: " << (cal == -1 ? "SC" : to_string(cal)) << endl;
}

string Episodio::getSerieId() const { return serieId; }