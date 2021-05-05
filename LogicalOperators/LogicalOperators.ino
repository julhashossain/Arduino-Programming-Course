
int a = 0, b = 4, c = 10, d = 20;

void setup() {
  
Serial.begin(9600);

  if (a > b && c == d)
    Serial.println("a is greater than b AND c is equal to d");
  else
    Serial.println("AND condition not satisfied");


  if (a > b || a == d)
    Serial.println("a is greater than b OR a is equal to d");
  else
    Serial.println("Neither a is greater than b nor c is equal ");


  if (!a)
    Serial.println("a is zero");
  else
    Serial.println("a is not zero");

}

void loop() {


}
