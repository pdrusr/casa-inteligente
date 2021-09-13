#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer meuservidor(80);

void setup() 
{
  Serial.begin(115200);

  ConectarWiFi("Supergeeks", "supergeeksitu");
  Serial.println(WiFi.localIP());

  servidor.on("/", PaginaInicial);
  servidor.on("/ligarled", LigarLed);
  servidor.on("/desligarled", DesligarLed);

  servidor.begin();
}

void loop() 
{
  servidor.handleClient();
}
