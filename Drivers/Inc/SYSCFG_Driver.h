#ifndef SYSCFG_DRIVER_H_
#define SYSCFG_DRIVER_H_

#include "stm32f411xe.h"
#include "stdint.h"

void SYSCFG_SetEXTISource(uint8_t EXTILine, uint8_t EXTILineVal);

#endif
