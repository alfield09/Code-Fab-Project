#include <Servo.h>

Servo myServo;  // create servo object

void setup() {
  myServo.attach(9);  // attach servo to pin 9
}

void loop() {
  // Rotate clockwise at full speed
  myServo.write(180); 
  delay(2000); // rotate for 2 seconds

  // Stop the servo
  myServo.write(90); 
  delay(1000); // stop for 1 second

  // Rotate counterclockwise at full speed
  myServo.write(0); 
  delay(2000); // rotate for 2 seconds

  // Stop again
  myServo.write(90); 
  delay(1000); 
}