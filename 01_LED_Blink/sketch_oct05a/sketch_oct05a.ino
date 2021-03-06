
/*
  Blinking LED

  Turn on LED for 300 milli-seconds and turn of for 700 milli-seconds.

   The circuit:
  - RED LED attached from digital pin 5 to ground.

  by Ganesh Butcha
*/


int led1=5;               // assign digital pin 5 to a variable
int onTime=300;           
int offTime=700;           

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);    // initialize digital pin as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(onTime);
  digitalWrite(led1, LOW);    // turn the LED off (LOW is the voltage level)
  delay(offTime);
}
