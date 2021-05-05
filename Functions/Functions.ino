void setup() {
  Serial.begin(9600);
  
  DashedLine();
  Serial.println("| BrightSkills |");
  DashedLine();
}

void loop() {
}

void DashedLine()
{
  Serial.println("----------------");
}
