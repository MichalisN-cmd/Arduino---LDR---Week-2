int sensorPin = A0;
int led1 = 9;
int led2 = 10;
int led3 = 11;
int sensorValue = 0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
if (sensorValue > 700) {          
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } 
  else if (sensorValue > 400) {    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  } 
  else if (sensorValue > 200) {    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  } 
else {                           
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }

  delay(100);
}
