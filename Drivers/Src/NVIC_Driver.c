/*
 * NVIC_Driver.c
 *
 *  Created on: Mar 4, 2026
 *      Author: nandha
 */
/*TOTAL INTERRUPT= 240 */


#include "NVIC_Driver.h"
 /*this function enables the interrupt for the supplied IRQ number*/
void NVIC_EnableIRQ(uint8_t IRQn)
{
	/*Total register = 8, Each Interrupt have 1 bit of space for enable,disable,set,clear*/
	NVIC_ISERx_BASE[IRQn/32] |= (1 << (IRQn % 32));
}
/*this function disables the interrupt for the supplied IRQ number*/
void NVIC_DiableIRQ(uint8_t IRQn)
{
	NVIC_ICERx_BASE[IRQn/32] |= (1 << (IRQn % 32));
}
/*this function set pending interrupt for the supplied IRQ number*/
void NVIC_SetISPR(uint8_t IRQn)
{
	NVIC_ISPRx_BASE[IRQn/32] |= (1 << (IRQn % 32));
}
/*this function clears the pending  interrupt for the supplied IRQ number*/
void NVIC_ClearPending(uint8_t IRQn)
{
	NVIC_ICPRx_BASE[IRQn/32] |= (1 << (IRQn % 32));
}
/*this function returns the active interrupt for the supplied IRQ number*/
bool NVIC_ReadActiveIRQ(uint8_t IRQn)
{
	return (NVIC_IABRx_BASE[IRQn/32] & (1 << (IRQn % 32)));
}
/*this function set the priority level interrupt as we need*/
void NVIC_SetIRQPriority(uint8_t IRQn ,uint8_t priority)
{
	//IPR Total reg of 60 reg each Interrupt have 8 bit of space
	uint8_t section = IRQn % 4;
	uint8_t shift   = (section * 8) + 4;
	/* The +4 is due to the register 0-4 has no use so only 7-5 is used
	 * so only 0 - 15 priority can be used
	 */
	NVIC_IPRx_BASE[IRQn/4] |= (priority) << shift;
}
