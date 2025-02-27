#include "sensores.h"
#include "wifi.h"
#include <stdio.h>
#include <string.h>

void setup() {
    inicializaSensores();
    conectaWiFi();
}

void loop() {
    float temperatura = lerTemperatura();
    float umidade = lerUmidade();
    int qualidadeAr = lerQualidadeAr();

    char payload[128];
    sprintf(payload, "{\"temperatura\": %.2f, \"umidade\": %.2f, \"qualidadeAr\": %d}",
            temperatura, umidade, qualidadeAr);

    enviarDados(payload);
    delay(30000);  // 30 segundos
}

int main() {
    setup();
    while (1) {
        loop();
    }
    return 0;
}