
#include "GPIO_Driver.h"

void GPIO_Init(GPIO_RegDef *port, GPIO_PINCONFIG_T *pinConfig)
{

}
void GPIO_DeInit_Pin(GPIO_RegDef *port,GPIO_PINCONFIG_T *pinConfig);
void GPIO_DeInit(GPIO_RegDef *port);

void GPIO_TogglePin(GPIO_RegDef *port, uint8_t pin);
void GPIO_SetPin(GPIO_RegDef *port, uint8_t pin);
uint8_t GPIO_ReadPin(GPIO_RegDef *port, uint8_t pin);
void GPIO_WritePort(GPIO_RegDef *port, uint32_t portVal);
uint32_t GPIO_ReadPort(GPIO_RegDef *port);
void GPIO_Lock(GPIO_RegDef *port, uint8_t pin);
