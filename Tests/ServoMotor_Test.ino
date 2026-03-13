// This program was used to test the servo motors
#include <Servo.h>

Servo myServo;

void setup() 
{
  myServo.attach(10);  // Attach servo to pin 10
}

void loop() 
{
  myServo.write(0);    // Move to 0 degrees
  delay(1000);
  myServo.write(90);   // Move to 90 degrees
  delay(1000);
  myServo.write(180);  // Move to 180 degrees
  delay(1000);
}
