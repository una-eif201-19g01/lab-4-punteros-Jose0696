/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>
#include <iostream>
#include <time.h>

using namespace std;
class Empleado
{

protected:
	string nombre;
	int numeroEmpleado;
	int anioExperiencia;
	float salarioBase;
	bool flagRevision;

public:
	Empleado();
	Empleado(const string &nombre, int anioExperiencia, float salarioBase);
	string reporteEmpleado();

private:
	int EmpleaaumentaSalario(const int *);
	static void procesoRevision(bool *);
};




#endif //EMPLEADOPUNTEROS_EMPLEADO_H
