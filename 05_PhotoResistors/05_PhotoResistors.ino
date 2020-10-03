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
