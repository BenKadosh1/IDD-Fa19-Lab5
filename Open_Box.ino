
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int mapped_value = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  int sensorValue = analogRead(A0);
  mapped_value = map(sensorValue, 0, 1023, 0, 105);
  myservo.write(mapped_value);

  //if target value reached maintain position to keep box open for longer period of time
  if(mapped_value > 100)
  {
    delay(7000);
  }
  else
  { 
    delay(200);
  }
}
