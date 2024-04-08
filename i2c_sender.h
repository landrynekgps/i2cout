#ifndef I2C_SENDER_H
#define I2C_SENDER_H

#include <esphome.h> // Dodaj ten wiersz, jeśli nie jest jeszcze dołączony
#include <Wire.h>

class I2CSender : public Component {
public:
  void setup() override {
    Wire.begin();
  }

  void send_i2c_data(uint8_t address, uint8_t data) {
    Wire.beginTransmission(address);
    Wire.write(data);
    Wire.endTransmission();
  }
};

#endif
