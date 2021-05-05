int var1, var2, result;

void setup() {
  Serial.begin(9600);
  

  var1 = 2;
  var2 = 5;

  result = (var1 > var2) ? var1 : var2;
  

  Serial.print("The bigger number is: ");
  Serial.println(result);
}

void loop() {
}
