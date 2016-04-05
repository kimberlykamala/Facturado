Depositos.h

#pragma once
#include "Fechas.h"
#include "Facturas.h"
#include <string>
using namespace std;
class Depositos: public Fechas
{
private:
	int cuenta;
	string nombre;
	string nombreBanco;
	int cantidad;
	string nombreMercado;
	string firma;
	string firmaSupervisor;
	Fechas F2;
	string concepto;
public:
	int cuenta();
	string nombre();
	string nombreBanco();
	int cantidad();
	string nombreMercado();
	string firma();
	string firmaSupervisor();
	Fechas F2();
	string concepto();
	void Comprobante();
	void Deposito(Facturas f);
	void Pago(Facturas f);
	Depositos(void);
	~Depositos(void);
};
