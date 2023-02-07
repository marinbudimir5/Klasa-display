#include "SevenSegDisplay.h"

SevenSegDisplay::SevenSegDisplay( PinName PA_10, PinName PB_3, PinName PB_5, PinName PB_4, PinName PB_10, PinName PA_8, PinName PA_9) :
    _display(PA_10, PB_3, PB_5, PB_4, PB_10, PA_8,PA_9) {
}

void SevenSegDisplay::update(int number) {
    switch (number) {
        case 0:
            _display = 0b00111111;
            break;
        case 1:
            _display = 0b00000110;
            break;
        case 2:
            _display = 0b01011011;
            break;
        case 3:
            _display = 0b01001111;
            break;
        case 4:
            _display = 0b01100110;
            break;
        case 5:
            _display = 0b01101101;
            break;
        case 6:
            _display = 0b01111101;
            break;
        case 7:
            _display = 0b00000111;
            break;
        case 8:
            _display = 0b01111111;
            break;
        case 9:
            _display = 0b01100111;
            break;
        default:
            _display = 0;
            break;
    }
}

