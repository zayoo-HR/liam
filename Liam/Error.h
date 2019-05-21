/*
 Liam - DIY Robot Lawn Mower

 Error Handler Library

 ======================
  Licensed under GPLv3
 ======================
*/

#include <Arduino.h>
#include <Wire.h>  // For LCD
#include "MyDisplay.h"
#include "Controller.h"
#include "ModeManager.h"

#ifndef _ERROR_H_
#define _ERROR_H_

#define ERROR_OUTSIDE 1
#define ERROR_OVERLOAD 2
#define ERROR_TILT 3
#define ERROR_LIFT 4
#define ERROR_BUMPERSTUCK 5
#define ERROR_FATAL_TIMEOUT 6


class ERROR {
  public:
    ERROR(MYDISPLAY* display_, int led_pin_, CONTROLLER* Mower_, MODEMANAGER* stateManager_);

    String errorMessage(int error_number);
    void flag(int error_number);
    void show();

  private:
    MYDISPLAY* display;
    CONTROLLER* Mower;
    MODEMANAGER* stateManager;
    int led_pin;
    int error;

};

#endif /* _ERROR_H_ */
