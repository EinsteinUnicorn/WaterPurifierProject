const int potPin = A0;
int uvPin = 9;
int ledPin = 6;
boolean purification = false;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(uvPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600); 
 
}
void loop(){
  Serial.print(analogRead(potPin));
  int potValue = analogRead(potPin);
  
  if(potValue <= 700)
  {
//    purification = false;
    digitalWrite(ledPin, HIGH);
    digitalWrite(uvPin, LOW);
  }
  if(potValue > 700)
  {
  //  purification = true;
    digitalWrite(ledPin, LOW);
    digitalWrite(uvPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, HIGH);

    
  }
  


//  if(anologRead(potPin) )
//  {
//    hits = hits + 1;
//    delay(10);
//  }
  
}
