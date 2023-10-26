#include <Servo.h>
Servo tap_servo;
int sensor_pin=4;
int tap_pin=5;
int data;
void setup()
{
  pinMode(sensor_pin,INPUT);
  tap_servo.attach(tap_pin);
}
void loop()
{
  data=digitalRead(sensor_pin);
  if(data==0)
  {
    tap_servo.write(0);
  }
  if(data==1)
  {
    tap_servo.write(180);
//  delay(1000);
  }
}
