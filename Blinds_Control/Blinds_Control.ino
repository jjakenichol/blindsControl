#include <Servo.h>

Servo servo;

const int buttonPin = 2;
int pos = 0;
int buttonState = 0;

void setup()
{
  servo.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState)
  {
    servo.write(180);              
    delay(15);
  }
  else
  {
    servo.write(0);              
    delay(15);  
  }
}

