// PÁGINA INICIAL
void PaginaInicial()
{
    meuservidor.send(200, "text/html", "<h1> Olá! </h1>")
}

// PÁGINA ACIONAMENTO SALA 1
void Sala1ON()
{
    Serial.println("SALA 1 LIGADO!");
    digitalWrite(PinoSala1, HIGH);
    meuservidor.sendHeader("Location", String("/"), true);
    meuservidor.send(302, "text/plain", "");
}
void Sala1OFF()
{
    Serial.println("SALA 1 DESLIGADO!");
    digitalWrite(PinoSala1, LOW);
    meuservidor.sendHeader("Location", String("/"), true);
    meuservidor.send(302, "text/plain", "");
}

// PÁGINA ACIONAMENTO SALA 2
void Sala2ON()
{
    Serial.println("SALA 2 LIGADO!");
    digitalWrite(PinoSala2, HIGH);
    meuservidor.sendHeader("Location", String("/"), true);
    meuservidor.send(302, "text/plain", "");
}
void Sala2OFF()
{
    Serial.println("SALA 2 DESLIGADO!");
    digitalWrite(PinoSala2, LOW);
    meuservidor.sendHeader("Location", String("/"), true);
    meuservidor.send(302, "text/plain", "");
}

// PÁGINA ACIONAMENTO SALA 3
void Sala3ON()
{
    Serial.println("SALA 3 LIGADO!");
    digitalWrite(PinoSala3, HIGH);
    meuservidor.sendHeader("Location", String("/"), true);
    meuservidor.send(302, "text/plain", "");
}
void Sala3OFF()
{
    Serial.println("SALA 3 DESLIGADO!");
    digitalWrite(PinoSala3, LOW);
    meuservidor.sendHeader("Location", String("/"), true);
    meuservidor.send(302, "text/plain", "");
}