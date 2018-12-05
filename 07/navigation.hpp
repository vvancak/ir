#ifndef NAVIGATION_HPP
#define NAVIGATION_HPP

#include <Arduino.h>
#include "motor.hpp"
#include "sensors.hpp"

int clip(int x, int minimum, int maximum);
void navigation(bool slow, Sensors &sensors, Motor &right_motor, Motor &left_motor);

#endif
