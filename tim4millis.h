/*
Library to count milliseconds since start up, using Timer4 (8 bit) of STM8S MCUs

By ETPH 20160618, release under 

Parts of code are copyrighted by STMicroelectronics licensed under MCD-ST Liberty SW License Agreement V2
http://www.st.com/software_license_agreement_liberty_v2

This library must be used with STM8S_StdPeriph_Lib package which is provided free of charge by STMicroelectronics

*/


#ifndef TIM4MILLIS_H_
#define TIM4MILLIS_H_

#include "stm8s.h"

#define TIM4_PERIOD 124
//volatile uint32_t current_millis

void TIM4_init(void);

uint32_t millis(void);

#endif
