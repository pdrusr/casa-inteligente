// IMPORTAÇÃO DAS BIBLIOTECAS
#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

// DEFINIR O SERVIDOR
ESP8266WebServer meuservidor(80);

// CONECTAR WIFI
void Conectar(String nome, String senha)
{
    WiFi.begin(nome, senha);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(250);
        Serial.println("Conectando...");
    }

    Serial.println("Conectado com Sucesso!");
}

// PAGINA INICIAL
void PaginaInicial()
{
    meuservidor.send(200, "text/html", "<h1> Olá! </h1>")
}

// CONFIGURAÇÕES
void setup()
{
    Serial.begin(115200);

    Conectar("Supergeeks", "supergeeksitu");
    Serial.println(WiFi.localIP());

    meuservidor.on("/", PaginaInicial);

    meuservidor.begin();
}

// EXECUÇÃO
void update()
{
    meuservidor.handleClient();
}