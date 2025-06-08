#pragma once
#include "Video.h"

class Pelicula : public Video {
	public:
		Pelicula(string id, string titulo, string genero, int duracion);
		void mostrarInformacion() const override;
};