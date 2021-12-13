void paginaprincipal()
{
  meuservidor.send(200, "text/html", "<h1> Oi! </h1>");
}

void onsala1() 
{
  Serial.println("SALA 1 LIGADO!");
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  digitalWrite(D2, HIGH);
}

void offsala1()
{
  Serial.println("SALA 1 DESLIGADO!");
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  digitalWrite(D2, LOW);
}

void onsala2() 
{
  Serial.println("SALA 2 LIGADO!");
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  digitalWrite(D3, HIGH);
}

void offsala2()
{
  Serial.println("SALA 2 DESLIGADO!");
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  digitalWrite(D3, LOW);
}

void onsala3() 
{
  Serial.println("SALA 3 LIGADO!");
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  digitalWrite(D4, HIGH);
}

void offsala3()
{
  Serial.println("SALA 3 DESLIGADO!");
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  digitalWrite(D4, LOW);
}
