#include "SYSCFG_Driver.h"

void SYSCFG_SetEXTISource(uint8_t EXITLine, uint8_t EXTILineVal){
	uint8_t RegIndex;
	uint8_t bitpos;

	/*EXITLine will be between 0 ot 15*/
	RegIndex= EXITLine / 4;
	bitpos  = (EXITLine % 4) * 4;


	SYSCFG->EXTICR[RegIndex] &= ~(0x0F << bitpos);
	SYSCFG->EXTICR[RegIndex] |= (EXITLine & 0x0F) << bitpos;

}
