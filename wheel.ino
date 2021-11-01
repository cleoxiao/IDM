const int redPin = 2;
const int yellowPin = 4;
const int bluePin = 3;
const int greenPin = 5;
int inByte = 0;
void setup() {
  // initialize the serial communication:
  Serial.begin(9600);
  // initialize the ledPin as an output:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // check if data has been sent from the computer:
  if (Serial.available()>0) {
    inByte = Serial.read();
    if(inByte == redPin){
      digitalWrite(redPin,HIGH);
      digitalWrite(yellowPin,LOW);
      digitalWrite(bluePin,LOW);
      digitalWrite(greenPin,LOW);
    }
    else if(inByte == bluePin){
      digitalWrite(bluePin,HIGH);
      digitalWrite(redPin,LOW);
      digitalWrite(yellowPin,LOW);
      digitalWrite(greenPin,LOW);
      }
    else if(inByte == yellowPin){
      digitalWrite(yellowPin,HIGH);
      digitalWrite(redPin,LOW);
      digitalWrite(bluePin,LOW);
      digitalWrite(greenPin,LOW);
      }
     else{
      digitalWrite(greenPin,HIGH);
      digitalWrite(redPin,LOW);
      digitalWrite(bluePin,LOW);
      digitalWrite(yellowPin,LOW);
      };     
  }
}
