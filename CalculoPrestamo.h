#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H


#include <cstdint>
#include <string>

class CalculoPrestamo {
private:

    float monto;

    float obtenerPorcentaje(std::string porcentajeTXT);
    int calcularTiempoMeses(std::string tiempoTXT);
    float obtenerInteresMensual(float balance, float tasaAnual);

public:
    CalculoPrestamo();

    explicit CalculoPrestamo(int64_t monto);

    std::string reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT);

    float getMonto();

    void setMonto(float);
};
#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
