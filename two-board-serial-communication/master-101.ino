


void setup() {
  // Begin the Serial at 9600 Baud


  Serial.begin(9600);
  Serial1.begin(9600);
}

int thisByte = 33;

void loop() {
  Serial1.write(thisByte); //Write the serial data
  if (thisByte == 126) {    // you could also use if (thisByte == '~') {
     //This loop loops forever and does nothing
     // holds
    while (true) {
      continue;
    }
    //thisByte = 32;
  }
  // go on to the next character
  thisByte ++;
  //delay(1000);

}
