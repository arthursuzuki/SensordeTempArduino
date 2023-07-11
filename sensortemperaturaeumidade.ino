#include <DHT.h> // Biblioteca DHT

#define DHT_PIN 2 // Pino de comunicação do sensor DHT11

DHT dht(DHT_PIN, DHT11); // Inicializa o objeto DHT

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  dht.begin(); // Inicializa o sensor DHT11
}

void loop() {
  float temperatura = dht.readTemperature(); // Lê a temperatura em graus Celsius
  float umidade = dht.readHumidity(); // Lê a umidade relativa do ar

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");

  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.println("%");

  delay(2000); // Aguarda 2 segundos antes de ler novamente
}
