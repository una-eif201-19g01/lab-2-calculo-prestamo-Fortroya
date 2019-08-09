//
// Created by Maikol Guzman  on 2019-08-08.
//

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H


#include <cstdint>
#include <string>

class CalculoPrestamo {
    float monto;

public:
    CalculoPrestamo();

    CalculoPrestamo(int64_t monto);

    std::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT);

    float getMonto();

    setMonto(float monto);
};

#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
