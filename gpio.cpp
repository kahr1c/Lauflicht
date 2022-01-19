#include "gpio.h"
#include <lgpio.h>

 gpio::gpio(QObject *parent) : QObject(parent)
{
    m_handle = lgGpiochipOpen(0); /* get a handle to the GPIO */
    int init_lvl = 1;
    for(int pin : LEDS)
        lgGpioClaimOutput(m_handle, LFLAGS, pin, init_lvl); /* initial level = init_lvl */
}

 gpio::~gpio()
{
    int init_lvl = 0;
    for(int pin : LEDS)
        lgGpioWrite(m_handle, pin, init_lvl); /* initial level = init_lvl */

    lgGpiochipClose(m_handle); // Bei uns optional gibt chip frei
}

void gpio::set
