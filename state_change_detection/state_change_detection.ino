//  https://www.arduino.cc/en/Tutorial/BuiltInExamples/StateChangeDetection

// good implementation to learn

const int buttonPin = 2;    // the pin that the pushbutton is attached to 
const int ledPin = 13;      // the pin that the LED is attached to 

// Variables that will change
int buttonPushCounter = 0;  // counter for the number of button presses
int buttonState = 0;        // current state of the button
int lastButtonState = 0;    // previous state of the button


void setup() {
  // put your setup code here, to run once:
  // initialize the button pin as an input
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output
  pinMode(ledPin, OUTPUT);
  // initialize serial communication
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Reaad the pushbutton state
  buttonState = digitalRead(buttonPin);

  // compare the current buttonState to the previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increase the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on;
      buttonPushCounter ++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.print(buttonPushCounter);
    } else {
      // if the current state is LOW then the button went from on to off
      Serial.println("off");
    }
    // delay a little bit
    delay(50);
  }
  // Save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;

  // Turns onthe LED every four button pushes by checking the module of the button push counter.
  // the module function gives you the reminder of the division of the two numbers:
  if (buttonPushCounter % 2 == 0) {
    digitalWrite(ledPin, HIGH);
  }else {
    digitalWrite(ledPin, LOW);
  }

}
