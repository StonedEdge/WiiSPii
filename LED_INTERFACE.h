
#ifndef LED_INTERFACE_H
#define	LED_INTERFACE_H

#include <xc.h> // include processor files - each processor file is guarded. 

void RGB_fade();
static char Map(int x, char inMin, char inMax, char outMin, char outMax);
void battery_fade();
void chrg_led();
void flash_led();
void led_modes();
void led_off(); 

extern char mode;

#endif	