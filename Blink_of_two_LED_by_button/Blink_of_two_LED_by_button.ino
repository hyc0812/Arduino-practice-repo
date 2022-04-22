const int LED_red = 7;
const int LED_blue = 2;
const int buttonPin = 4;

int buttonState = 0;  // button state


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_red, OUTPUT);
  pinMode(LED_blue, OUTPUT);
  pinMode(buttonPin, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);   // read the state of pushing button
  if(buttonState == HIGH) {
    digitalWrite(LED_red, HIGH);
    digitalWrite (LED_blue, LOW);
    delay (200);
    digitalWrite (LED_red, LOW);
    digitalWrite (LED_blue, HIGH);
    delay (200);
  }
  else {
    digitalWrite(LED_red, LOW);
    digitalWrite (LED_blue, LOW);
  }
}
