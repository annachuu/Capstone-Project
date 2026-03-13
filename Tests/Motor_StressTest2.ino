// This program was used to stress test the servo motor
// Version 2: finding right angle

#include <Servo.h>

Servo myServo;

int startPos = 0;      // starting position
// int stressAngle;  // how far the servo moves

void setup() 
{
  myServo.attach(10);  // attach to pin 10
  myServo.write(startPos); // startinf at 0 degrees
}

void loop() 
{
  myServo.write(40);  // move to 80 degrees
  delay(1000);                 // wait 1 second = 1000
  myServo.write(startPos);     // move back to 0 degrees
  delay(5000);                // pause for 30 seconds


  myServo.write(60);  // move to 80 degrees
  delay(1000);                 // wait 1 second = 1000
  myServo.write(startPos);     // move back to 0 degrees
  delay(5000);                // pause for 30 seconds


  myServo.write(80);  // move to 80 degrees
  delay(1000);                 // wait 1 second = 1000
  myServo.write(startPos);     // move back to 0 degrees
  delay(5000);                // pause for 30 seconds

  // repeats to see how long it will last (hoping a couple hours)
}
