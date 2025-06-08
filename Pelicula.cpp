#include "Pelicula.h"
#include <iostream>
using namespace std;

Pelicula::Pelicula(string id, string titulo, string genero, int duracion)
		: Video(id, titulo, genero, duracion) {}

void Pelicula::mostrarInformacion() const
{
	cout << "Pelicula: " << titulo << " (" << genero << ", " << duracion << " min)";
	double cal = obtenerCalificacionPromedio();
	cout << " | Calificacion: " << (cal == -1 ? "SC" : to_string(cal)) << endl;
}