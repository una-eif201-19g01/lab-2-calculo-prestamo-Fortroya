#include <iostream>
#include "CalculoPrestamo.h"

int main() {
    CalculoPrestamo calculoPrestamo(3000);

    std::string reporte;

    reporte = calculoPrestamo.reporteCalculoPrestamo("1 A", "8.40%");

    std::cout << "Calcular prestamo: " << std::endl;

    std::cout << reporte << std::endl;


    return 0;
}
