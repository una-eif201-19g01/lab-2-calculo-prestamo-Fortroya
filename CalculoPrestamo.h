//
// Created by Maikol Guzman  on 2019-08-08.
//

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H


#include <cstdint>
#include <string>

class CalculoPrestamo {
private:
	std::string obtenerPorcentaje();
	float monto;

public:
    CalculoPrestamo();

    CalculoPrestamo(int64_t monto);

    std::string reporteCalculoPrestamo();

    float getMonto();

    void setMonto(float monto);
};
#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
