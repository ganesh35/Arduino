/*
  LED Dimmer
  Testing a Potentiometer using a LED by passing appropriate voltage to dim and bright it.

  Turns each LED of 3 for one second, then off for one second, repeatedly.

   The circuit:
  - Left pin of Potentiometer connected to 5v of Microcontroller.
  - Right pin of Potentiometer connected to GND of Microcontroller.
  - Middle pin of Potentiometer connected to A1 Pin of Microcontroller.
  - RED LED attached from digital pin 6 to ground.

  by Ganesh Butcha
*/
int potPin = A1;        
int gPin=6;
int potVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready   
  pinMode(potPin, INPUT);
  pinMode(gPin, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  Serial.println(LEDVal);
  analogWrite(gPin, LEDVal);
  Serial.println(LEDVal);
}
