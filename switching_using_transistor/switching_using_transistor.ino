const int transistorPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode (transistorPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (transistorPin, HIGH);
  delay(1000);
  digitalWrite (transistorPin, LOW);
  delay(1000);
}


//https://create.arduino.cc/projecthub/SBR/switching-using-transistor-c9114a
