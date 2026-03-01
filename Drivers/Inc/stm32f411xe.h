#ifndef STM32F411XE_H
#define STM32F411XE_H

/*Macro related to all peripheral address, sram , flash address 
 *Data structure related to peripherals
 *Peripherals bit definitions */
 
#define FLASH_BASEADDR  0XO8000000U
#define FLASH_ENDADDR   0X0807FFFFU
#define SYSMEM_BASEADDR 0X1FFF0000U
#define OPTBYT_BASEADDR 0X1FFFC000U
#define SRAM_BASEADDR   0X20000000U
#define SRAM_ENDADDR    0X20020000U
 

/* AHB AND APH*/
#define PERIPH_BASE         0x40000000U
#define APB1PERIPH_BASEADDR PERIPH_BASE
#define APB2PERIPH_BASEADDR (PERIPH_BASE + 0x10000U)
#define AHB1PERIPH_BASEADDR (PERIPH_BASE + 0X20000U)
#define AHB2PERIPH_BASEADDR 0x50000000U


/*GPIO Peripherals*/
#define GPIOA_BASEADDR    (PERIPH_BASE + 0x20000U)
#define GPIOB_BASEADDR    (PERIPH_BASE + 0x20400U)
#define GPIOC_BASEADDR    (PERIPH_BASE + 0x20800U)
#define GPIOD_BASEADDR    (PERIPH_BASE + 0x20C00U)
#define GPIOE_BASEADDR    (PERIPH_BASE + 0x21000U)
#define GPIOH_BASEADDR    (PERIPH_BASE + 0x2C000U)


/* GPIO Struct definitions*/
typedef struct
{
	uint32_t MODER;          //4BYTE
	uint32_t OTYPER;         //4BYTE TILL END
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFRL;
	uint32_t AFRH;
}GPIO_RegDef;

/*GPIO STUCT MACRO*/
#define GPIOA (GPIO_RegDef*)GPIOA_BASEADDR
#define GPIOB (GPIO_RegDef*)GPIOB_BASEADDR
#define GPIOC (GPIO_RegDef*)GPIOC_BASEADDR
#define GPIOD (GPIO_RegDef*)GPIOD_BASEADDR
#define GPIOE (GPIO_RegDef*)GPIOE_BASEADDR
#define GPIOH (GPIO_RegDef*)GPIOH_BASEADDR


/*EXAMPLE:  GPIO -> BSRR =1;  */
 

 
 
 #endif
