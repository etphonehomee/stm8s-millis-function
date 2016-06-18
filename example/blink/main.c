/*

test millis() using tim4millis.h lib

*/

#include "stm8s_conf.h"
#include "tim4millis.h"

#define blinkInterval 100

uint32_t lastBlink = 0;


int main( void )
{
  //setup clock
  CLK_DeInit();
  
  TIM4_init(); //already setup f_Master = HSI/1 = 16MHz
  
  GPIO_DeInit(GPIOB);
  GPIO_Init(GPIOB, GPIO_PIN_5, GPIO_MODE_OUT_PP_LOW_SLOW);


  while(1)
  {

    uint32_t currentTime = millis();
	
    if (currentTime - lastBlink >= blinkInterval)
    {
      GPIO_WriteReverse(GPIOB, GPIO_PIN_5);
      lastBlink = currentTime;
    }

  }
// return 0; //remove Warning[Pe111]
}




