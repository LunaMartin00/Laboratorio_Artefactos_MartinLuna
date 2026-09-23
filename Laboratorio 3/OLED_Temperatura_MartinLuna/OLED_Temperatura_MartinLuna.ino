void setup() {
  
  Serial.begin(115200);

  delay(1000);

  Serial.println("===========================");
  Serial.println(" José Martín Luna Ramos 00308324");
  Serial.println("===========================");
  Serial.println();
}

void loop() {
  Serial.print("ESP32 funcionando correctamente - Tiempo activa: ");
  Serial.print(millis() / 1000.0);
  Serial.println(" segundos");

  delay(2000);

}