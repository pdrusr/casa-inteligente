#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

ESP8266WebServer meuservidor(80);

void setup() 
{
  Serial.begin(115200);

  ConectarWiFi("Supergeeks", "supergeeksitu");
  Serial.println(WiFi.localIP());

  meuservidor.on("/", PaginaInicial);
  meuservidor.on("/ligarled", LigarLed);
  meuservidor.on("/desligarled", DesligarLed);

  meuservidor.begin();
}

void loop() 
{
  meuservidor.handleClient();
}
