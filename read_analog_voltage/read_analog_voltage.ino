/*
  ReadAnalogVoltage

  Reads an analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ReadAnalogVoltage
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the input on analog pin 0
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0-1023 to a voltage (0 - 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you've read
  Serial.println(voltage);
  delay(200);
}
