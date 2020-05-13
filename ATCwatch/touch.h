
#pragma once

#include "Arduino.h"

#define TOUCH_NO_GESTURE 0x00
#define TOUCH_SLIDE_DOWN 0x01
#define TOUCH_SLIDE_UP 0x02
#define TOUCH_SLIDE_LEFT 0x03
#define TOUCH_SLIDE_RIGHT 0x04
#define TOUCH_SINGLE_CLICK 0x05
#define TOUCH_DOUBLE_CLICK 0x0B
#define TOUCH_LONG_PRESS 0x0C

struct touch_data_struct {
  byte gesture;
  int xpos;
  int ypos;
};
void init_touch();
void sleep_touch();
void get_read_touch();
touch_data_struct get_touch();