#include "sysInit.h"

//--------------------------------------------------------------------------------------------------------------------//


//--------------------------------------------------------------------------------------------------------------------//
void Sysinit(void){
  SysTick_Config(SystemCoreClock / 1000);   //1ms
  
//  RCC->APB1ENR |= RCC_APB1ENR_PWREN;
//  RCC->APB1ENR |= RCC_APB1ENR_BKPEN;
//  RCC->APB2ENR |= RCC_APB2ENR_AFIOEN;

//  AFIO->MAPR = AFIO_MAPR_SWJ_CFG_JTAGDISABLE;
//  
//  RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
//  RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;
//  RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
//  RCC->APB2ENR |= RCC_APB2ENR_IOPDEN;
//  
//  GPIOB->CRL &= ~GPIO_CRL_CNF5; //LED
//  GPIOB->CRL |= GPIO_CRL_MODE5;
//  LED_OFF;
}

//--------------------------------------------------------------------------------------------------------------------//
