/*
 * USART_Driver.h
 *
 *  Created on: Mar 8, 2026
 *      Author: nandha
 */

#ifndef USART_DRIVER_H_
#define USART_DRIVER_H_

#include "stm32f411xe.h"

typedef enum
{
	USART1_ID,
	USART2_ID,
	USART6_ID
}USART_EN_ID_T;

typedef enum
{
	USART_WORDLENGTH_8B,
	USART_WORDLENGTH_9B
}USART_EN_WORDLENGTH_T;

typedef enum
{
	USART_PARITY_NONE,
	USART_PARITY_EVEN,
	USART_PARITY_ODD
}USART_EN_PARITY_T;

typedef enum
{
	USART_STOPBITS_0_5,
	USART_STOPBITS_1,
	USART_STOPBITS_1_5,
	USART_STOPBITS_2

}USART_EN_STOPBIT_T;

typedef struct
{
	USART_EN_ID_T		usartID;
	uint32_t			baudrate;
	USART_EN_WORDLENGTH_T	wordlength;
	USART_EN_PARITY_T	parity;
	USART_EN_STOPBIT_T  stopBits;
	uint8_t				oversampling;
}USART_CONCFG_T;

/*USART Function Declaration*/
void USART_init();
void USART_deinit();
void USART_Transmit();
void USART_Receive();
/*Support Function*/
void USART_Enable();
void USART_Disable();
void USART_ConfigureGPIO();



#endif /* USART_DRIVER_H_ */





