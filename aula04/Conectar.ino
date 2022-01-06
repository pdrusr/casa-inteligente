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