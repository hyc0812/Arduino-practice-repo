// This example demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital
// input on pin 2 and prints the results to the Serial Monitor.

const int inputPin = 2;
const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // configure pin 2 as an input and enable the internal pull-up resister
  pinMode(inputPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the pushbutton value into a variable
  int sensorVal = digitalRead(inputPin);

  // Keep in mind the pull-up means the pushbutton's logic is inverted.
  // It goes HIGH when it is open, and LOW when it is pressed.
  // Turn on pin 13 when the button is pressed, and off when it is not.

  if (sensorVal == HIGH) {
    digitalWrite(ledPin, LOW);
    Serial.println(sensorVal, DEC);
    delay(500);
  }else {
    digitalWrite(ledPin, HIGH);
    Serial.println(sensorVal, DEC);
    delay(500);
  }
}

// https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial
