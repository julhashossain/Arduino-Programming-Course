void setup() {
  Serial.begin(9600);
  Serial.println("This will print onece.");
  delay(2000);
}

void loop() {
  Serial.println("Statement 1");
  delay(2000);
  Serial.println("Statement 2");
  delay(2000);
  Serial.println("Statement 3");
  delay(2000);
}
