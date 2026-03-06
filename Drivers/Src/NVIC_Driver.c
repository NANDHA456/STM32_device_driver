/*
 * NVIC_Driver.c
 *
 *  Created on: Mar 4, 2026
 *      Author: nandha
 */


void NVIC_EnableIRQ(uint8_t IRQn);
void NVIC_DiableIRQ(uint8_t IRQn);
void NVIC_SetISPR(uint8_t IRQn);
void NVIC_ClearPending(uint8_t IRQn);
bool NVIC_ReadActiveIRQ(uint8_t IRQn);
void NVIC_SetIRQPriority(uint8_t IRQn ,uint8_t priority);
