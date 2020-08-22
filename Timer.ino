int x = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(x);
  delay(1000);
  x++;
  // this is a simple stopwatch  
}
