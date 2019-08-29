#include <iostream>
#include "Empleado.h"

int main() {
	Empleado empleado1[3];
	empleado1[0].setNombre("Mike");
	empleado1[0].setAnioExperiencia(2);
	empleado1[0].setSalarioBase(1200000);
	cout << empleado1[0].reporteEmpleado() << endl;
    return 0;
}