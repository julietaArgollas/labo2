#pragma once
#include "Vehiculo.h"
class Publico : public Vehiculo
{
private:
	int cantidadPasajeros;
	string nombreEmpresa;
public:
	Publico();
	~Publico();
	void calcularImpuesto();
	int getCantidadPasajeros();
	void setCatindadPasajeros(int cantidadPasajeros);
	string getNombreEmpresa();
	void setNombreEmpresa(string nombreEmpresa);
	void mostrar();
};

