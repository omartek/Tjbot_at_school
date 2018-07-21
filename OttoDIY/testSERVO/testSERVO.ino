/*
  Arduino Starter Kit example
 Project 5  - Servo Mood Indicator

 This sketch is written to accompany Project 5 in the
 Arduino Starter Kit

 Parts required:
 servo motor
 10 kilohm potentiometer
 2 100 uF electrolytic capacitors

 Created 13 September 2012
 by Scott Fitzgerald

 http://www.arduino.cc/starterKit

 This example code is part of the public domain
 */

// include the servo library
#include <Servo.h>

Servo servo1,servo2,servo3,servo4;  // create a servo object

int const potPin = A0; // analog pin used to connect the potentiometer
int potVal;  // variable to read the value from the analog pin
int angle;   // variable to hold the angle for the servo motor

void setup() {
  servo1.attach(2); // attaches the servo on pin 9 to the servo object
  servo2.attach(4);
  servo3.attach(3);
  servo4.attach(5);
  Serial.begin(9600); // open a serial connection to your computer
}

void loop() {
  potVal = analogRead(potPin); // read the value of the potentiometer
  // print out the value to the serial monitor
  Serial.print("potVal: ");
  Serial.print(potVal);

  // scale the numbers from the pot
  angle = map(potVal, 0, 1023, 0, 179);

  // print out the angle for the servo motor
  Serial.println(", angle: 0");


  servo1.write(60);
  servo2.write(60);
  servo3.write(60);
  servo4.write(60);
    
  // wait for the servo to get there
  delay(2000);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
    
  // wait for the servo to get there
  delay(2000);

  servo1.write(120);
  servo2.write(120);
  servo3.write(120);
  servo4.write(120);
    
  // wait for the servo to get there
  delay(2000);
}


