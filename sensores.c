#include "sensores.h"
#include <bitdoglab.h>

void inicializaSensores() {
    adc_init();
}

float lerTemperatura() {
    int leitura = adc_read(A1);
    return (leitura / 1023.0) * 100.0;
}

float lerUmidade() {
    int leitura = adc_read(A0);
    return (leitura / 1023.0) * 100.0;
}

int lerQualidadeAr() {
    return adc_read(A2);
}