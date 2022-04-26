
int incomingByte = 0;  

void setup() {
  // Begin the Serial at 9600 Baud
  Serial1.begin(9600);
  Serial.begin(9600);
}



void loop() {

  // send data only when you receive data:
  if (Serial1.available() > 0) {
  // read the incoming byte:

     incomingByte = Serial1.read();

     // say what you got:
     Serial.print("Received:  ");
     Serial.write(incomingByte);
     Serial.print("    DEC:  ");
     Serial.print(incomingByte, DEC);
     Serial.print("    HEX:  ");
     Serial.print(incomingByte, HEX);
     Serial.print("    OCT:  ");
     Serial.print(incomingByte, OCT);
     Serial.print("    BIN:  ");
     Serial.print(incomingByte, BIN);
     Serial.println(" ");
   }

}
