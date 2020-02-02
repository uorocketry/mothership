const int buttonPin = 7;
const int ledBluePin = 8;
const int ledRedPin = 13;

int buttonState = 0;
bool buttonColour = false;

void setup() {
  pinMode(ledBluePin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    buttonColour = !buttonColour;
  }
  if(buttonColour) {
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledBluePin, HIGH);
  }
  if(!buttonColour) {
    digitalWrite(ledBluePin, LOW);
    digitalWrite(ledRedPin, HIGH);
  }

}
