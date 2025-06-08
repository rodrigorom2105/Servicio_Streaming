#include <iostream>
#include <vector>
#include <map>
#include "Pelicula.h"
#include "Episodio.h"
#include "Serie.h"

using namespace std;

int main()
{
	int opc;
	do
	{
		cout << "\nMENU\n";
		cout << "1. Cargar archivo de datos\n";
		cout << "2. Mostrar videos con cierta calificacion o genero\n";
		cout << "3. Mostrar episodios de una serie\n";
		cout << "4. Mostrar peliculas con cierta calificacion\n";
		cout << "5. Calificar un video\n";
		cout << "0. Salir\n";
		cout << "Opcion: ";
		cin >> opc;

		if (opc == 1)
		{
		}
		else if (opc == 2)
		{
		}
		else if (opc == 3)
		{
		}
		else if (opc == 4)
		{
		}
		else if (opc == 5)
		{
		}
		else if (opc != 0)
		{
			cout << "Opcion no valida. Intente de nuevo." << endl;
		}

	} while (opc != 0);

	return 0;
}
