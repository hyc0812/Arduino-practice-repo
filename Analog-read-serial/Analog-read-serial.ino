/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial

  By turning the shaft of the potentiometer, you change the amount of resistance on either 
  side of the wiper, which is connected to the center pin of the potentiometer. This changes
  the voltage at the center pin. When the resistance between the center and the side connected 
  to 5 volts is close to zero (and the resistance on the other side is close to 10k ohm), the 
  voltage at the center pin nears 5 volts. When the resistances are reversed, the voltage at 
  the center pin nears 0 volts, or ground. This voltage is the analog voltage that you're reading
  as an input.

  The Arduino boards have a circuit inside called an analog-to-digital converter or ADC that
  reads this changing voltage and converts it to a number between 0 and 1023. When the shaft
  is turned all the way in one direction, there are 0 volts going to the pin, and the input
  value is 0. When the shaft is turned all the way in the opposite direction, there are 5 volts 
  going to the pin and the input value is 1023. In between, analogRead() returns a number between
  0 and 1023 that is proportional to the amount of voltage being applied to the pin.
*/

void setup() {
  // initialize serial coommunication at 9600 bits per second:
  Serial.begin(9600);
}


void loop() {
  // reand the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you have read:
  Serial.println(sensorValue);
  delay(10);      // make for stability
}
