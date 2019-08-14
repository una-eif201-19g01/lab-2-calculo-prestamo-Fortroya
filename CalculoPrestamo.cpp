//lab2: Jose Sequeira H
#include <iostream>
#include "CalculoPrestamo.h"

CalculoPrestamo::CalculoPrestamo() {
    monto = 0;
}

CalculoPrestamo::CalculoPrestamo(int64_t monto) : monto(monto) {
    this->monto = monto;
}

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
    float porcentaje = 0;
    int buscarPorcentaje = porcentajeTXT.find("%");

    if (buscarPorcentaje > 0) {
        porcentaje = std::stof(porcentajeTXT.substr(0, buscarPorcentaje));
        if (porcentaje > 0) {
            porcentaje = porcentaje / 100;

        }
    }
    return porcentaje;
}

int CalculoPrestamo::calcularTiempoMeses(std::string tiempoTXT) {
    int meses = 0;
    int ano = 0;
    int buscarAno = tiempoTXT.find("A");
    int buscarMes = tiempoTXT.find("M");

    if (buscarAno > 0) {
        ano = stoi(tiempoTXT.substr(0, buscarAno));
        if (ano > 0) {
            meses = ano + 12;

        }

    } else if (buscarMes > 0) {
        meses = stoi(tiempoTXT.substr(0, buscarMes));

    }
    return meses;
}

float CalculoPrestamo::obtenerInteresMensual(float balance, float tasaAnual) {
    return (balance * (tasaAnual / 12));

}

std::string CalculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {
    std::string reporte = "";
    int meses = calcularTiempoMeses(tiempoTXT) + 1;
    float por = obtenerPorcentaje(porcentajeTXT);
    float balance = getMonto();
    float balanceInicial = getMonto();

    for (int m = 1; m < meses; ++m) {
        float interesMensual = obtenerInteresMensual(balanceInicial, por);
        balance = balanceInicial;
        balanceInicial = balance + interesMensual;

        reporte = reporte + "Tasa[" + porcentajeTXT + "],Mes[" + std::to_string(meses) + "],balance inicial[" + std::to_string(balance) + "],interes[" + std::to_string(interesMensual) + "],balance nuevo[" + std::to_string(balanceInicial) + "] \n";

    }

    return reporte;
}

float CalculoPrestamo::getMonto() {
    return monto;
}

void CalculoPrestamo::setMonto(float monto) {
    this->monto = monto;
}