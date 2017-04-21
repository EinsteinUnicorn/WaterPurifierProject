int hits=0;
int ledPin=13;
int uvPin = 9;
int switchPin = 12;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(uvPin, OUTPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(switchPin) == HIGH)
  {
    hits = hits + 1;
    delay(10);
  }
  if(hits = 0){
    digitalWrite(ledPin, HIGH);
    digitalWrite(uvPin, LOW);
    Serial.print("1");
    
  }
  if(hits = 1){
    digitalWrite(ledPin, HIGH);
    digitalWrite(uvPin, HIGH);
    Serial.print("2");
  }
  if(hits = 2){
    digitalWrite(ledPin, LOW);
    digitalWrite(uvPin, LOW);
    delay(200);
    Serial.print("3");
    hits = 0;
    
  }
  
}
