#include <Arduino.h>
#include <math.h>

void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  float val = (exp(sin(millis() / 2000.0 * PI)) - 0.368) * 108.0;
  analogWrite(2, val);
}
