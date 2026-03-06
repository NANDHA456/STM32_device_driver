/*
 * EXTI_Driver.c
 *
 *  Created on: Mar 4, 2026
 *      Author: nandha
 */
#include "EXTI_Driver.h"
/*this function enable the interrupt of EXTI by unmasking the IMR Register*/
void EXTI_EnableInterrupt(uint32_t EXTILineNum ,EXTI_TriggerType TriggerType)
{
	EXTI->IMR |= (1 << EXTILineNum);

	switch(TriggerType)
	{
	case EXTI_TRIGGER_RISING:
		EXTI->RTSR |= (1 << EXTILineNum);   //making raising trigger select reg to set
		EXTI->FTSR &= ~(1 << EXTILineNum);  //making falling trigger select reg to reset
		break;
	case EXTI_TRIGGER_FALLING:
		EXTI->RTSR &= ~(1 << EXTILineNum);  //making raising trigger select reg to reset
		EXTI->FTSR |= (1 << EXTILineNum);   //making falling trigger select reg to set
		break;
	case EXTI_TRIGGER_BOTH:
		EXTI->RTSR |= (1 << EXTILineNum);   //making raising trigger select reg to set
		EXTI->FTSR = (1 << EXTILineNum);    //making falling trigger select reg to set
		break;
	default:
		break;
	}
}
/*this function enable the event of EXTI by unmasking the EMR Register*/
void EXTI_EnableEvent(uint32_t EXTILineNum,EXTI_TriggerType TriggerType)
{
	EXTI->EMR |= (1 << EXTILineNum);

	switch(TriggerType)
	{
	case EXTI_TRIGGER_RISING:
		EXTI->RTSR |= (1 << EXTILineNum);   //making raising trigger select reg to set
		EXTI->FTSR &= ~(1 << EXTILineNum);  //making falling trigger select reg to reset
		break;
	case EXTI_TRIGGER_FALLING:
		EXTI->RTSR &= ~(1 << EXTILineNum);  //making raising trigger select reg to reset
		EXTI->FTSR |= (1 << EXTILineNum);   //making falling trigger select reg to set
		break;
	case EXTI_TRIGGER_BOTH:
		EXTI->RTSR |= (1 << EXTILineNum);   //making raising trigger select reg to set
		EXTI->FTSR = (1 << EXTILineNum);    //making falling trigger select reg to set
		break;
	default:
		break;
	}
}

void EXTI_ClearPending(uint32_t EXTILineNum)
{
	EXTI->PR = (1 << EXTILineNum);
}
bool EXTI_IsPending(uint32_t EXTILineNum)
{
	return (EXTI->PR & (1 << EXTILineNum)) ? 1:0;
}
