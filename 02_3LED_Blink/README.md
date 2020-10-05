# Project #2: Blinking LEDs

Running a sequence of Blinking LEDs.

- [Parts](#parts)
- [Schema](#schema)
- [Code](#code)

## Parts
Required parts for this project are:
- Microcontroller Arduino UNO x1
- Breadboard x1
- LED Green x1
- LED Red x1
- LED Blue x1
- Resistor 330Ω x3
- Wires x7

## Schema
![The Breadboard](./assets/schemaBreadboard.PNG?raw=true)

## Code
```c


/*
  Blinking LEDs

  Turns each LED of 3 for one second, then off for one second, repeatedly.

   The circuit:
  - RED LED attached from digital pin 5 to ground.
  - GREEN LED attached from digital pin 6 to ground.
  - BLUE LED attached from digital pin 7 to ground.

  by Ganesh Butcha
*/


int led1=5;               // assign digital pin 5 to a variable
int led2=6;
int led3=7;
int waitTime=1000;        // wait time is 1 second

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);    // initialize digital pin as an output
  pinMode(led2, OUTPUT);    
  pinMode(led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);    // turn the LED off (LOW is the voltage level)
  digitalWrite(led3, LOW);
  delay(waitTime);                 // wait for a second
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(waitTime);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(waitTime);
  
}
```