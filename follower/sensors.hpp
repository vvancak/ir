#ifndef SENSORS_HPP
#define SENSORS_HPP

#include <Arduino.h>
#include "digital_pins.hpp"

enum State {
    nominal, finished, left_sign, right_sign, on_left_turn, on_right_turn, after_turn
};
enum Mode {
    towards, away
};

class Sensors {
public:
    bool left;
    bool right;
    bool center;
    bool far_left;
    bool far_right;
    enum Mode mode = towards;

private:
    enum State state;
    int real_right;
    int real_left;
    int real_far_left;
    int real_far_right;
    int center_off;
    bool button = false;

    bool read_right();

    bool read_left();

    bool read_center();

    bool read_far_right();

    bool read_far_left();

    void read_button();

    bool read();

    void right_sign();

    void left_sign();

    State get_state();

public:
    State update(void);
};

#endif
