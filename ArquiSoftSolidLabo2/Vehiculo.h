#pragma once
#include <iostream>
#include <string>
#include "Cliente.h"

class Vehiculo
{
protected:
	Cliente* dueno;
	string placa;
	int impuesto;

public:
	Vehiculo();
	~Vehiculo();
	Cliente* getDueno();
	void setDueno(Cliente* dueno);
	string getPlaca();
	void setPlaca(string placa);
	int getImpuesto();
	virtual void mostrar();
	virtual void calcularImpuesto() = 0;
};

