#ifndef RCC_H
#define RCC_H
#include"STD_TYPES.h"
void vRCC_SerSYSCLK();
void vRCC_EnPerClk();

#define RCC_CR              *((uint32*)0x40023800)
#define RCC_PLLCFGR         *((uint32*)0x40023804)
#define RCC_CFGR            *((uint32*)0x40023808)
#define RCC_CIR        		*((uint32*)0x4002380C)
#define RCC_AHB1RSTR        *((uint32*)0x40023810)
#define RCC_AHB2RSTR        *((uint32*)0x40023814)
#define RCC_AHB3RSTR        *((uint32*)0x40023818)
#define RCC_APB1RSTR  		*((uint32*)0x40023820)
#define RCC_APB2RSTR   		*((uint32*)0x40023824)
#define RCC_AHB1ENR     	*((uint32*)0x40023830)
#define RCC_AHB2ENR     	*((uint32*)0x40023834)
#define RCC_AHB3ENR     	*((uint32*)0x40023838)
#define RCC_APB1ENR    		*((uint32*)0x40023840)
#define RCC_APB2ENR    		*((uint32*)0x40023844)
#define RCC_AHB1LPENR    	*((uint32*)0x40023850)
#define RCC_AHB2LPENR    	*((uint32*)0x40023854)
#define RCC_AHB3LPENR    	*((uint32*)0x40023858)
#define RCC_APB1LPENR    	*((uint32*)0x40023860)
#define RCC_APB2LPENR    	*((uint32*)0x40023864)
#define RCC_BDCR       		*((uint32*)0x40023870)
#define RCC_CSR        		*((uint32*)0x40023874)
#define RCC_SSCGR        	*((uint32*)0x40023880)
#define RCC_PLLI2SCFGR      *((uint32*)0x40023884)
#define RCC_PLLSAICFGR      *((uint32*)0x40023888)
#define RCC_DCKCFGR         *((uint32*)0x4002388C)

#endif