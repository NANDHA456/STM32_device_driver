#ifndef RCC_DRIVER_H
#define RCC_DRIVER_H

#include "stm32f411xe.h"

void RCC_EnableGPIO(GPIO_RegDef *port);
void RCC_DisableGPIO(GPIO_RegDef *port);



#endif
