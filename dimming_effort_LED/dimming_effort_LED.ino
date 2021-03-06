/*
  Fade

  This example shows how to fade an LED on pin 9 using the analogWrite()
  function.

  The analogWrite() function uses PWM, so if you want to change the pin you're
  using, be sure to use another PWM capable pin. On most Arduino, the PWM pins
  are identified with a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade
*/

const int led = 9;      // the PWM pin the LED is attached to

// Variables 
int brightness = 0;     // how bright the LED is
int fadeAmount = 1;     // how many points to fade the LED by

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);

  // change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade
  if (brightness <= 0 || brightness >= 25) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 ms to see the dimming effort
  delay(30);
  Serial.println(brightness);
}
