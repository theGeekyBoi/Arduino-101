int led = 8; //initialising the variable for LED
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH); //LED is on
  delay(1000); //the number you put in is in milliseconds
  digitalWrite(led, LOW); //LED is off
  delay(1000);
  // This code will make an LED blink on and off every second, ake sure to connect the pins to the legs of the LED's properly
}
