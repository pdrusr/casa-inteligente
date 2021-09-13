void PaginaInicial() 
{
  servidor.send(200, "text/html", "<h1> OI </h1>");
}

void LigarLed() 
{
  Serial.println("Led Ligado!");
  
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  
  digitalWrite(2, HIGH);
}

void DesligarLed() 
{
  Serial.println("Led Desligado!");
  
  meuservidor.sendHeader("Location", String("/"), true);
  meuservidor.send(302, "text/plain", "");
  
  digitalWrite(2, LOW);
}
