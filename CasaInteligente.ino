#include "DHT.h"
#define DHTTYPE DHT11

#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

ESP8266WebServer meuservidor(80);
DHT dht(D6, DHTTYPE);

void setup() {
  Serial.begin(115200);

  Conectar("Supergeeks", "supergeeksitu");
  Serial.println(WiFi.localIP());

  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  meuservidor.on("/", paginaprincipal);
  meuservidor.on("/onsala1", onsala1);
  meuservidor.on("/offsala1", offsala1);
  meuservidor.on("/onsala2", onsala2);
  meuservidor.on("/offsala2", offsala2);
  meuservidor.on("/onsala3", onsala3);
  meuservidor.on("/offsala3", offsala3);

  meuservidor.begin();
  dht.begin();
}

void loop() {
  float temperatura = dht.readTemperature();
  Serial.println(temperatura);
  meuservidor.handleClient();
}
