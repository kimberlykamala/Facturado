Fechas.h

#pragma once
#include <string>
class Fechas
{
private:
	int hora;
	int minuto;
	int segundo;
public:
	int hora();
	int minuto();
	int segundo();
	void IngresarHora();
	void IngresarMinuto();
	void IngresarSegundo();
	Fechas(void);
	~Fechas(void);
};
