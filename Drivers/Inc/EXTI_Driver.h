/*
 * EXTI_Driver.h
 *
 *  Created on: Mar 4, 2026
 *      Author: nandha
 */

#ifndef EXTI_DRIVER_H_
#define EXTI_DRIVER_H_
#include "stm32f411xe.h"
#include "stdint.h"
#include <stdbool.h>

typedef enum
{
	EXTI_TRIGGER_RISING,
	EXTI_TRIGGER_FALLING,
	EXTI_TRIGGER_BOTH
}EXTI_TriggerType;

void EXTI_EnableInterrupt(uint32_t EXTILineNum ,EXTI_TriggerType TriggerType);
void EXTI_EnableEvent(uint32_t EXTILineNum ,EXTI_TriggerType TriggerType);
void EXTI_ClearPending(uint32_t EXTILineNum);
bool EXTI_IsPending(uint32_t EXTILineNum);

#endif /* EXTI_DRIVER_H_ */
