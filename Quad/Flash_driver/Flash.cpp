#include "Flash.h"



uint16_t VirtAddVarTab[number_flash_val] = {0,2,4,6,8,10,12,14,16,18,20,22,24,26};

void setup_FLASH()
{
	FLASH_Unlock();
	EE_Init();
}