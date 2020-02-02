#ifndef R2D2Power_h
#define R2D2Power_h

//Standard Arduino libraries
#include <Arduino.h>

class R2D2Power
{
  private:
    

  public:
    bool isCharging();
    uint16_t getBatteryVoltage();

};

#endif
