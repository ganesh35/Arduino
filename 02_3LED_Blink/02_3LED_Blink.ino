
int led1=5;
int led2=6;
int led3=7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(800);
  
  digitalWrite(led1, LOW);
  analogWrite(led2, 2.5);
  digitalWrite(led3, LOW);
  delay(800);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(800);
  
}