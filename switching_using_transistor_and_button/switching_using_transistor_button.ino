// Every time pushing button, the LED status changes 
// const variables
const int buttonPin = 4;
const int transistorPin = 2;

int currentButtonState = LOW;
int lastButtonState = LOW;
int ledState = HIGH;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(transistorPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int readingButton = digitalRead(buttonPin);

  if ( readingButton == HIGH) {
    ledState = !ledState;
  }
  digitalWrite(transistorPin, ledState);
  delay(300);

}
