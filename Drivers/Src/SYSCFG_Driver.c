#include "SYSCFG_Driver.h"

void SYSCFG_SetEXTISource(uint8_t EXTILine, uint8_t EXTILineVal) {
	uint8_t RegIndex;
	uint8_t bitpos;

	/*EXITLine will be between 0 to 15*/
	RegIndex = EXTILine / 4;
	bitpos = (EXTILine % 4) * 4;

	SYSCFG->EXTICR[RegIndex] &= ~(0x0F << bitpos);
	SYSCFG->EXTICR[RegIndex] |= (EXTILineVal & 0x0F) << bitpos;

}
