#include"STD_TYPES.h"
#include "RCC_PRE_COMPILE_H.h"
#include"RCC_CONFIG.h"
#define setBit(y) |=(1u<<y)
#define resetBit(y) &=~(1u<<y)
#define toggleBit(y) ^=(1u<<y)
void vRCC_SerSYSCLK() {
#if (CLK_SRC ==0)
#if(HSE_SRC ==0)
	RCC_CR setBit(16);
	RCC_CR resetBit(18);
	RCC_CFGR setBit(0);
	RCC_CFGR resetBit(1);
#elif(HSE_SRC==1)
	RCC_CR setBit(16);
	RCC_CR setBit(18);
	RCC_CFGR setBit(0);
	RCC_CFGR resetBit(1);
#endif
#elif(CLK_SRC ==1)
	RCC_CR setBit(0);
	RCC_CFGR resetBit(0);
	RCC_CFGR resetBit(1);
#elif(CLK_SRC==2)
#if(PLL_SRC ==0)
	RCC_CR setBit(16);
	RCC_CR setBit(24);
	RCC_PLLCFGR setBit(22);
	RCC_CFGR setBit(1);
	RCC_CFGR resetBit(0);
#elif(PLL_SRC==1)
	RCC_CR setBit(24);
	RCC_CR setBit(0);
	RCC_PLLCFGR resetBit(22);
	RCC_CFGR setBit(1);
	RCC_CFGR resetBit(0);
#endif
#endif
}

void vRCC_EnPerClk() {
#if(BUS_CH ==0)
	RCC_AHB1ENR setBit(PER_NUM);
#elif(BUS_CH ==1)
	RCC_AHB2ENR setBit(PER_NUM);
#elif(BUS_CH ==2)
	RCC_AHB3ENR setBit(PER_NUM);
#elif(BUS_CH ==3)
	RCC_APB1ENR setBit(PER_NUM);
#elif(BUS_CH ==4)
	RCC_APB2ENR setBit(PER_NUM);
#endif
}