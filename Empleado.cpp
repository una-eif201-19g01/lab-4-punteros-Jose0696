/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include"Empleado.h"

Empleado::Empleado(){
	numeroEmpleado = rand() % NUMERO_MAXIMO;
}

Empleado::Empleado(const string & nom, int anioExperiencia, float salarioBase):nombre(nombre),
anioExperiencia(anioExperiencia),salarioBase(salarioBase){
	numeroEmpleado = rand() % NUMERO_MAXIMO;
}

string Empleado::reporteEmpleado(){
	string reporte = "";
	string random;
	if (getFlagRevision() == false) {
		random = "NO";
	}
	else {
		random = "SI"; 
	}
	reporte = "Empleado #[" + to_string(getNumeroEmpleado()) + "]\n\tNombre [" + getNombre() + "]\n\tAnios de experiencia[" +
		to_string(getAnioExperiencia()) + "]\n\tSalario Inicial[" + to_string(getSalarioBase()) + "]\n\tSalario Acumulado[" +
		to_string(EmpleaaumentaSalario(&anioExperiencia)) + "]\n\tNecesita Revision[" + random + "]]";
	return reporte;
}

string Empleado::getNombre(){
	return nombre;
}

int Empleado::getNumeroEmpleado(){
	return numeroEmpleado;
}

int Empleado::getAnioExperiencia() {
	return anioExperiencia;
}

float Empleado::getSalarioBase(){
	return salarioBase;
}

bool Empleado::getFlagRevision(){
	return flagRevision;
}

void Empleado::setNombre(string nom){
	nombre = nom;
}

void Empleado::setNumeroEmpleado(int emp){
	numeroEmpleado = emp;
}

void Empleado::setAnioExperiencia(int anioExp){
	anioExperiencia = anioExp;
}

void Empleado::setSalarioBase(float salBase){
	salarioBase = salBase;
}

void Empleado::setFlagRevision(bool rev){
	flagRevision = rev;
}

int Empleado::EmpleaaumentaSalario(const int *anioExperiencia){
	float aumento = 0;
	if (*anioExperiencia > 1 && *anioExperiencia < 3) {
		aumento += (aumento * 0.02);
	}
	else if (*anioExperiencia >= 3) {
		aumento += (aumento * 0.05);
	}
	return aumento;
}

void Empleado::procesoRevision(bool * flagRevision){
	if (rand() % 2 == 0) {
		*flagRevision = true;
	}
}
