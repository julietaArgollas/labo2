#pragma once
#include "Cliente.h"
class ClienteContado : public Cliente
{
private:
	int totalPagado;
	string fechaPago;

public:
	ClienteContado();
	~ClienteContado();
	int getTotalPagado();
	void setTotalPagado(int totalPagado);
	string getFechaPago();
	void setFechaPago(string fechaPago);
	void mostrar();
};

