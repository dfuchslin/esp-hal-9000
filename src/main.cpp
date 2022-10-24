// cool breathing: https://thingpulse.com/breathing-leds-cracking-the-algorithm-behind-our-breathing-pattern/

#include <Arduino.h>
#include <math.h>

void setup()
{
  pinMode(1, OUTPUT); // onboard led
  pinMode(2, OUTPUT);
}

void loop()
{
  float val = (exp(sin(millis() / 2000.0 * PI)) - 0.368) * 108.0;
  analogWrite(1, val);
  analogWrite(2, 255 - val);
}
