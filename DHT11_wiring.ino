#include <dht.h>
#define dht_apin A0
dht DHT;
void setup() {
  
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT 11 Humidity & temperature sensor");
  delay(1000);
}

void loop() {
  DHT.read11(dht_apin);
  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.println("%");
  Serial.print("temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C");
  delay(1000);
}
