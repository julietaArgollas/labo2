#pragma once
#include "Vehiculo.h"
class Particular : public Vehiculo
{
private:
	bool descapotable;
	int numPuertas;

public:
	Particular();
	~Particular();
	bool getDescapotable();
	void setDescapotable(bool descapotable);
	int getNumPuertas();
	void setNumPuertas(int numPuertas);
	void mostrar();
	void calcularImpuesto();
};

