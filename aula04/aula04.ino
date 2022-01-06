// IMPORTAÇÃO DAS BIBLIOTECAS
#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>
#include"DHT.h"

// PINAGENS
int PinoSala1 = D2;
int PinoSala2 = D3;
int PinoSala3 = D4;
int PinoSensor = D6;

// DEFINIR O SERVIDOR
ESP8266WebServer meuservidor(80);

// DEFINIR O SENSOR
#define DHTTYPE DHT11
DHT meusensor(PinoSensor, DHTTYPE);

// CONFIGURAÇÕES
void setup()
{
    Serial.begin(115200);

    pinMode(PinoSala1, OUTPUT);
    pinMode(PinoSala2, OUTPUT);
    pinMode(PinoSala3, OUTPUT);

    Conectar("Supergeeks", "supergeeksitu");
    Serial.println(WiFi.localIP());

    // ROTAS PÁGINAS
    meuservidor.on("/", PaginaInicial);
    meuservidor.on("/sobre", PaginaSobre);
    meuservidor.on("/clima", PaginaClima);

    // ROTAS SALA 1
    meuservidor.on("/sala1on", Sala1ON);
    meuservidor.on("/sala1off", Sala1OFF);

    // ROTAS SALA 2
    meuservidor.on("/sala2on", Sala2ON);
    meuservidor.on("/sala2off", Sala2OFF);

    // ROTAS SALA 3
    meuservidor.on("/sala3on", Sala3ON);
    meuservidor.on("/sala3off", Sala3OFF);

    meuservidor.begin();
    meusensor.begin();
}

// EXECUÇÃO
void update()
{
    meuservidor.handleClient();
}