void setup() {
  int x = 9;
  int y = 5;
  int result;
  float result_float;
  
  Serial.begin(9600);
  Serial.println("x = 9 ");
  Serial.println("y = 5 ");

  
  Serial.print("Addition (x + y): ");
  result = x + y;
  Serial.println(result);
  
  Serial.print("Subtraction (x - y): ");
  result = x - y;
  Serial.println(result);
  
  Serial.print("Multiplication (x * y): ");
  result = x * y;
  Serial.println(result);
  
  Serial.print("Int Division (x / y): ");
  result = x / y;
  Serial.println(result);
  
  Serial.print("Float Division (9.0 / 2.0): ");
  result_float = 9.0 / 2.0;
  Serial.println(result_float);
  
  Serial.print("Remainder (x % y): ");
  result = x % y;
  Serial.println(result);
}

void loop() {
}
