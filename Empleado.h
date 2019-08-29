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


const int NUMERO_MAXIMO = 100;

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
	Empleado(const string &nombre, int anioExperiencia, float salarioBase,bool flagRevision);
	string reporteEmpleado();
	string getNombre();
	int getNumeroEmpleado()const;
	int getAnioExperiencia();
	float getSalarioBase();
	bool getFlagRevision();

	void setNombre(string);
	void setNumeroEmpleado(int&);
	void setAnioExperiencia(int);
	void setSalarioBase(float);
	void setFlagRevision(bool);

private:
	int EmpleaaumentaSalario(const int *);
	static void procesoRevision(bool *);
};

#endif //EMPLEADOPUNTEROS_EMPLEADO_H
