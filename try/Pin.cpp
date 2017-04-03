#include "Arduino.h"
#include "Pin.h"

Pin::Pin(int pin)
{
  pinMode(pin, OUTPUT);
  pinNum = pin;
}
