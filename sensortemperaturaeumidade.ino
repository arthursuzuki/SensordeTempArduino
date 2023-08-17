#include <DHT.h> 
#define DHT_PIN 2 // Pino de comunicação do sensor DHT11
DHT dht(DHT_PIN, DHT11); 
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");
  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.println("%");
  delay(2000);
}
