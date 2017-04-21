const int switchPin = 2; //lcd prompt pin
const int uvPin = 9;//led pin
const int ledPin = 13;

boolean ledSequence = false;

static int hits = 0;

// variable to hold the value of the switchPin
 int switchState = 0;

// variable to hold previous value of the switchpin
int prevSwitchState = 0;
void purifierInit(){
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
 
  ledSequence = true;
}
void setup() {  
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin,INPUT);
  pinMode(uvPin, OUTPUT);
  
}

void loop() {  
  // check the status of the switch
 switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState) {
    if (switchState == HIGH) {
          hits = hits + 1;
         // digitalWrite(ledPin, HIGH); 
          delay(10);
    }
    Serial.begin(9600);
    Serial.print(hits);
  }
  Serial.begin(9600);
    Serial.print(its);
    
  
 // purifierInit();
 // if(ledSequence==true){\
 
 if(hits=0)
 {
   digitalWrite(ledPin, HIGH);
   digitalWrite(ledPin, LOW);
   
  // digitalWrite(uvPin, HIGH);
 }
   if(hits==1)
  {
    digitalWrite(ledPin, HIGH);

  }else
  if(hits==2)
  {

      digitalWrite(ledPin, HIGH);
      digitalWrite(uvPin, HIGH);
      delay(2000);
      
      hits = 0;
      
  }//else
//  digitalWrite(ledPin, HIGH);
//  digitalWrite(uvPin, HIGH);
 
}

