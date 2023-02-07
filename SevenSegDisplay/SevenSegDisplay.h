#ifndef SEVENSEGDISPLAY_H
#define SEVENSEGDISPLAY_H

#include "mbed.h"

class SevenSegDisplay {
public:
    SevenSegDisplay( PinName PA_10, PinName PB_3, PinName PB_5, PinName PB_4, PinName PB_10, PinName PA_8, PinName PA_9);
    void update(int number);

private:
    BusOut _display;
};

#endif