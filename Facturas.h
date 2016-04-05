Facturas.h
#pragma once
#include <string>
#include "Fechas.h"
using namespace std;
class Facturas
{
private:
	string nombre;
	Fechas F1;
	string numFactura;
	string concepto;
	int cantidad;
	string firma;
	int nit;
public:
	string nombre();
	Fechas F1();
	string numFactura();
	string concepto();
	int cantidad();
	string firma();
	int nit();
	void LlenarFacturas();
	void ActualizarFacturas();
	Facturas(void);
	~Facturas(void);
};
