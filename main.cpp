#include <iostream>
#include "Empleado.h"

int main() {
    Empleado empleado[3];

    empleado[0].setNombre("Mike");
    empleado[0].setAnoExperiencia(2);
    empleado[0].setSalarioBase(1200000);

    return 0;
}