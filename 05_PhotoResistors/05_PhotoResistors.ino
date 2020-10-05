/*
  Testing Photoresistor
  Read the light value of the room, if the value is less than 350 turn on  RED LED or else turn on GREEN LED.

   The circuit:
  - Left pin of Photoresistor connected to 5v of Microcontroller.
  - Right pin of Photoresistor connected to Reistor 5kΩ and to Ground.
  - Middle pin of Potentiometer connected to A1 Pin of Microcontroller.
  - RED LED attached from digital pin 4 to ground.
  - GREEN LED attached from digital pin 2 to ground.

  by Ganesh Butcha
*/

int lightPin=A0;
int lightVal;
int delayT=250;
int redPin=4;
int greenPin=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready 
  
  pinMode(lightPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.println("setup done");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  
  Serial.println(lightVal);
  delay(delayT);
  if(lightVal > 350){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }else{
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}
