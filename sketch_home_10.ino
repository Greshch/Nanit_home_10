#include <NanitLib.h>

const byte pin_pot = P4_1;
const byte pin_r_led = P4_3;



void setup() {
  // put your setup code here, to run once:
  Nanit_Base_Start();
  pinMode(pin_pot, INPUT_PULLUP);
  
  pinMode(pin_r_led, OUTPUT);
  
  Serial.begin(9600);
} 

void loop() {
  // put your main code here, to run repeatedly:
  
  //digitalWrite(pin_r_led, 0);
  int potValue = analogRead(pin_pot);
  int brightness = map(potValue, 10, 1023, 0, 255);
  // Serial.print(potValue);
  // Serial.print("\t");
  // Serial.println(brightness);
  //digitalWrite(pin_r_led, 1);
  analogWrite(pin_r_led, brightness);
  delay(100);
}