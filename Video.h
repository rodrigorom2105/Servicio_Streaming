#pragma once
#include <string>
#include <vector>
using namespace std;

class Video
{
protected:
	string id, titulo, genero;
	int duracion;
	vector<int> calificaciones;

public:
	Video(string id, string titulo, string genero, int duracion);
	virtual ~Video() {}
	void agregarCalificacion(int calificacion);
	double obtenerCalificacionPromedio() const;
	virtual void mostrarInformacion() const = 0;
	string getTitulo() const;
	string getGenero() const;
};