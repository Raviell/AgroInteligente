#include "wifi.h"
#include <bitdoglab.h>
#include <stdio.h>

void conectaWiFi() {
    wifi_connect("NomeDaRede", "SenhaDaRede");
}

void enviarDados(const char* payload) {
    http_post("http://plataformaonline.com/dados", payload);
}