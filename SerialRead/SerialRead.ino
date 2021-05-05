
char rx_byte = 0;

void setup() {
  Serial.begin(9600);
}


void loop() {
  if (Serial.available() > 0) {                            // is a character available?
    rx_byte = Serial.read();                              // get the character
  

    if ((rx_byte >= '0') && (rx_byte <= '9')) {        // check if a number was received   
      Serial.print("Number received: ");
      Serial.println(rx_byte);
    }
    else if (rx_byte == '\n') {
    }
    else {
      Serial.println("Not a number.");             // If not a number
    }
  }
}
