int led = 6;
void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  for(x = 0; x<= 255; x++){
    analogWrite(led, x); //also try to mess around with the analog value try x*3 and try to see what happens
    delay(100); //1/10th of a second [play around with this value to see what happens]
    //make sure you wire up the led correctly
  }
}
