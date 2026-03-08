/*
 * NVIC_Driver.h
 *
 *  Created on: Mar 4, 2026
 *      Author: nandha
 */

#ifndef NVIC_DRIVER_H_
#define NVIC_DRIVER_H_

#include "stm32f411xe.h"
#include "stdint.h"
#include "stdbool.h"

void NVIC_EnableIRQ(uint8_t IRQn);
void NVIC_DiableIRQ(uint8_t IRQn);
void NVIC_SetISPR(uint8_t IRQn);
void NVIC_ClearPending(uint8_t IRQn);
bool NVIC_ReadActiveIRQ(uint8_t IRQn);
void NVIC_SetIRQPriority(uint8_t IRQn ,uint8_t priority);


#endif /* NVIC_DRIVER_H_ */
