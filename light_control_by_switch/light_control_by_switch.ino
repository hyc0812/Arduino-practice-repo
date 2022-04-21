// Set pin numbers 
const int ledPin = 2;   // Const won't change
const int buttonPin = 4; 

// Variable will change
int buttonState = 0;  // Variables for reading the pushbutton status



void setup() {
  // Put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // Initialize the LED pin as an output
  pinMode(buttonPin, INPUT);  // Initialize the pushbutton pin as an input

}

void loop() {
  // Put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);   // Read the state of the pushbutton value

  if (buttonState == HIGH){         // Check if the pushbutton is presented
    digitalWrite(ledPin, HIGH);     // If the buttonState is HIGH, turn LED on
    Serial.println("LED ON ++++++");
  }
  else{
    digitalWrite(ledPin, LOW);      // Turn LED off
    //Serial.println("LED OFF ------");
  }
}
