#include <Arduino.h>
#include "SC01Config.h"

void setup()
{
  initSC01();
}

void loop()
{
  lv_timer_handler();
  delay(5);
}