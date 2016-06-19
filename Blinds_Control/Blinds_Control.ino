#include <Servo.h>

Servo myservo;

const int buttonPin = 2;
int pos = 0;
int buttonState = 0;

void setup()
{
  myservo.attach(9);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState)
  {
    myservo.write(0);              
    delay(15);
  }
  else
  {
    myservo.write(180);              
    delay(15);  
  }
}

