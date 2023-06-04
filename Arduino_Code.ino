// C++ code
void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for 500 millisecond(s)
}
