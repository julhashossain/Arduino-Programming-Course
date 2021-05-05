int marks = 85;
char grade;

void setup() {
 Serial.begin(9600);

if (marks < 33){
 grade = 'F';
 }
 else if (marks <= 40){
 grade = 'D';
 }
 else if (marks <= 60){
 grade = 'C';
 }
 else if (marks <= 80){
 grade = 'B';
 }
 else if (marks <= 100){
 grade = 'A';
 }

Serial.print("Your grade is: ");
 Serial.println(grade);
}

void loop() {

}
