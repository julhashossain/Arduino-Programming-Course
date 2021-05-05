void setup() {
  Serial.begin(9600);
}

char rx_byte = 0;

void loop() {
  if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();

    switch (rx_byte) {
      case '1':

        Serial.println("You pressed 1");
        break;

      case '2':

        Serial.println("You pressed 2");
        break;

      case '3':
        Serial.println("You pressed 3");

        break;

      case '4':
        Serial.println("You pressed 4");

        break;
      case '5':
        Serial.println("You pressed 5");

        break;
      case '6':
        Serial.println("You pressed 6");

        break;
      case '7':
        Serial.println("You pressed 7");

        break;
      case '8':
        Serial.println("You pressed 8");

        break;
      case '9':
        Serial.println("You pressed 9");

        break;

      default:
        Serial.println(" ");
        break;
    }
  }
}
