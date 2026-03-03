#ifndef STM32F411XE_H
#define STM32F411XE_H
#include <stdint.h>

/*Macro related to all peripheral address, sram , flash address 
 *Data structure related to peripherals
 *Peripherals bit definitions */
 
#define FLASH_BASEADDR  0XO8000000U
#define FLASH_ENDADDR   0X0807FFFFU
#define SYSMEM_BASEADDR 0X1FFF0000U
#define OPTBYT_BASEADDR 0X1FFFC000U
#define SRAM_BASEADDR   0X20000000U
#define SRAM_ENDADDR    0X20020000U
 
/*RCC Peripheral Address*/
#define RCC_BASEADDR 		0x40023800U

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

/*RCC Struct definitions*/
typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t PLLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t RESERVED1;
	volatile uint32_t RESERVED2;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t RESERVED3;
	volatile uint32_t RESERVED4;
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t RESERVED5;
	volatile uint32_t RESERVED6;
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t RESERVED7;
	volatile uint32_t RESERVED8;
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t RESERVED9;
	volatile uint32_t RESERVED10;
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t RESERVED11;
	volatile uint32_t RESERVED12;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t RESERVED13;
	volatile uint32_t RESERVED14;
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
	volatile uint32_t RESERVED15;
	volatile uint32_t DCKCFGR;
}RCC_RegDef;

//RCC macro
#define RCC ((RCC_RegDef *) RCC_BASEADDR)

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


/*EXAMPLE:  GPIOA -> BSRR =1;  */
#define GPIO_MODER_BITMASK 		0x3
#define GPIO_OSPEEDR_BITMASK    0x3
#define GPIO_PUPDR_BITMASK		0x3
#define GPIO_AFR_MASK     	 	0xF
#define GPIO_MODER_SHIFT_BITS 	0x2
#define GPIO_OSPEEDR_SHIFT_BITS 0x2
#define GPIO_PUPDR_SHIFT_BITS 	0x2
#define GPIO_AFR_SIZE      		0x8
#define GPIO_AFR_MAXSIZE   		0xf
#define GPIO_AFR_SHIFT_BITS 	0x4



/*SYSCFG RELATED MACROS */

typedef struct
{
	volatile uint32_t MEMRMP;     //memory remap register
	volatile uint32_t PMC;	      //Peripheral Mode Config Register
};

/*SYSCFG_BASE_ADDR
 *
 */
#define SYSCFG_BASE_ADDR 0x4001800U
 
 
 #endif
