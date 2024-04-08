#include "esphome.h"
#include <Wire.h>
#include "i2c_sender.h"

I2CSender i2c_sender; // Definicja obiektu globalnego

void setup() {
  i2c_sender.setup();
}

void loop() {
}
