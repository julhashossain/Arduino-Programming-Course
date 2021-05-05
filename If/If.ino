
int marksPhysics = 20;
int marksMath = 50;

void setup() {
  Serial.begin(9600);

  if (marksPhysics >= 33) {
    Serial.println("X has passed in Physics in the final exam.");
  }

  if (marksPhysics < 33) {
    Serial.println("X has failed in Physics in the final exam.");
  }


  if (marksMath >= 33) {
    Serial.println("X has passed in Math in the final exam.");
  }

  if (marksMath < 33) {
    Serial.println("X has failed in Math in the final exam.");
  }
}

void loop() {

}
