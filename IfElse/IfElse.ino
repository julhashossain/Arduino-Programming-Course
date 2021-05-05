
int marksPhysics = 92;
int marksMath = 20;

void setup() {
  Serial.begin(9600);

  if (marksPhysics >= 33) {
    Serial.println("X has passed in Physics in the final exam.");
  }

  else {
    Serial.println("X has failed in Physics in the final exam.");
  }


  if (marksMath >= 33) {
    Serial.println("X has passed in Math in the final exam.");
  }

  else {
    Serial.println("X has failed in Math in the final exam.");
  }
}

void loop() {

}
