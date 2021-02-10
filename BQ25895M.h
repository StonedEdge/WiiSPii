
#ifndef BQ25895M_H
#define	BQ25895M_H

#include <xc.h> // include processor files - each processor file is guarded.  

#define BQ_ADDR 0x6A

void BQ_Write(unsigned char reg, char data);
unsigned short BQ_Read(unsigned char reg);
char BQ_read_adc(char reg);
void BQ_get_chrg_state();
void BQ_CONFIG_INIT();
void BQ_INIT();
void BQ_UPDATE();

extern uint8_t VBUS_CHRG_STATE[2];
extern char BATTERY_VOLTAGE;
extern char BQ_adc_state;

#endif	