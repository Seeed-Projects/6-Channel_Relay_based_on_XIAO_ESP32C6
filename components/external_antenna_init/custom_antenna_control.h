#include "esphome.h"

class AntennaControl : public Component {
 public:
  void setup() override {
    ESP_LOGD("custom", "Initializing external antenna...");

    pinMode(3, OUTPUT); // WIFI_ENABLE
    digitalWrite(3, LOW); // Activate RF switch control

    delay(100);

    pinMode(14, OUTPUT); // WIFI_ANT_CONFIG
    digitalWrite(14, HIGH); // Use external antenna
  }
};
