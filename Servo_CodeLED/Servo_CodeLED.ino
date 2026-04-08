#include <Servo.h>

Servo servo180;
Servo servo360;

const int buttonPin1 = 2;
const int buttonPin2 = 4;
const int ledPin = 7;   // LED pin

void setup() {
  servo180.attach(10);
  servo360.attach(9);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);   // set LED pin
}

void loop() {

  // Control 180° servo + LED
  if (digitalRead(buttonPin1) == HIGH) {
    servo180.write(180);
    digitalWrite(ledPin, HIGH);   // LED ON
  } else {
    servo180.write(0);
    digitalWrite(ledPin, LOW);    // LED OFF
  }

  // Control 360° servo
  if (digitalRead(buttonPin2) == HIGH) {
    servo360.write(100);
  } else {
    servo360.write(90);
  }
}