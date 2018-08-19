// microlib stubs 
// Code template pulled from Keil Site at:
// http://www.keil.com/support/man/docs/armlib/armlib_chr1358938931411.htm

#include <stdio.h>
#include "stm32f3xx_hal.h"

extern UART_HandleTypeDef huart1;

struct __FILE {
	int handle;
};

/* FILE is typedef’d in stdio.h. */
FILE __stdout;

int fputc(int ch, FILE *f)  {
			/* Your implementation of fputc(). */
//	uint8_t inchar = ch;
	// HAL_UART_Transmit(&huart1, &inchar, 1, 10000);
	ITM_SendChar(ch);
	return ch;	
}

int ferror(FILE *f) {
  /* Your implementation of ferror(). */
	return 0;
}
