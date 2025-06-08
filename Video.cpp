#include "Video.h"
#include <numeric>
#include <iostream>
using namespace std;

Video::Video(string id, string titulo, string genero, int duracion)
{
	Video::id = id;
	Video::titulo = titulo;
	Video::genero = genero;
	Video::duracion = duracion;
}

void Video::agregarCalificacion(int calificacion)
{
	if (calificacion >= 1 && calificacion <= 5)
	{
		calificaciones.push_back(calificacion);
	}
	else
	{
		cerr << "Calificacion invalida. Debe estar entre 1 y 5." << endl;
	}
}

double Video::obtenerCalificacionPromedio() const
{
	if (calificaciones.empty())
		return -1; // No hay calificaciones, retorna -1 para indicar "Sin Calificacion"
	double suma = accumulate(calificaciones.begin(), calificaciones.end(), 0);
	return suma / calificaciones.size();
}

string Video::getTitulo() const { return titulo; }

string Video::getGenero() const { return genero; }