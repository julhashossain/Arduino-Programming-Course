void setup() {
  int sum = 0;
  
  Serial.begin(9600);
  
  
  do {
    sum = sum + 5;
    Serial.print("sum = ");
    Serial.println(sum);
    delay(1000);                 // 1 second delay
  } while (sum < 25);          // count up to 25 in 5s
}

void loop() {
}
