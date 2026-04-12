#include <Servo.h>

Servo servo1180;
Servo servo1360;
Servo servo2180;
Servo servo2360;

const int buttonPin1 = 2;
const int buttonPin2 = 4;
const int buttonPin3 = 3;
const int buttonPin4 = 5;
const int ledPin = 7;   // LED pin

void setup() {
  servo1180.attach(10);
  servo1360.attach(9);
  servo2180.attach(11);
  servo2360.attach(12);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(ledPin, OUTPUT);   // set LED pin
}

void loop() {

  // Control first 180° servo + LED
  if (digitalRead(buttonPin1) == HIGH) {
    servo1180.write(180);
    digitalWrite(ledPin, HIGH);   // LED ON
  } else {
    servo1180.write(0);
    digitalWrite(ledPin, LOW);    // LED OFF
  }

  // Control first 360° servo
  if (digitalRead(buttonPin2) == HIGH) {
    servo1360.write(100);
  } else {
    servo1360.write(90);
  }
  //Second 180 servo
  if (digitalRead(buttonPin3) == HIGH) {
    servo2180.write(180);
  } else {
    servo2180.write(0);
  }
  //Second 360 servo
  if (digitalRead(buttonPin4) == HIGH) {
    servo2360.write(100);
  }else {
    servo2360.write(90);
    }
  }


  
