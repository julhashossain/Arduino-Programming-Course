void setup() {
    float area;
  
    Serial.begin(9600);
    
    area = CircleArea(3.5);                 // calculate the area of a circle with radius of 3.5
    Serial.print("Area of circle is: ");
    
    Serial.println(area, 2);              // print area to 2 decimal places
}

void loop() {
}


float CircleArea(float radius)       // calculate the area of a circle
{
    float result;
    
    result = 3.141592654 * radius * radius;
    
    return result;
}
