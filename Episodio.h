#pragma once
#include "Video.h"

class Episodio : public Video {
	private:
		int temporada, numero;
		string serieId;
	
	public:
		Episodio(string id, string titulo, string genero, int duracion, int temporada, int numero, string serieId);
		void mostrarInformacion() const override;
		string getSerieId() const;
};