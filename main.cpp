#include <iostream>
#include "Empleado.h"

int main() {
	Empleado empleado1[3];

	empleado1[0].setNombre("Mike");
	empleado1[0].setAnioExperiencia(2);
	empleado1[0].setSalarioBase(1200000);

	empleado1[1].setNombre("Sebastian");
	empleado1[1].setAnioExperiencia(3);
	empleado1[1].setSalarioBase(1600000);

	empleado1[2].setNombre("Carolina");
	empleado1[2].setAnioExperiencia(8);
	empleado1[2].setSalarioBase(1800000);

	cout << empleado1[0].reporteEmpleado() << endl;
	

    return 0;
}