/*
 * Master_code.c
 *
 * Created: 24/03/2021 15:27:14
 * Author : Mohamed-Sery
 */ 

#include "UART.h"
#include "SPI.h"
int main(void)
{
	Uint8t data =0;
	UART_Init();
	SPI_Init();
	
    while (1) 
    {
		data = UART_Receive();
		if (data =='1')
		{
			
		 SPI_Transmit(100);
			
		}
			else if (data =='2')
			{
				
				SPI_Transmit(200);
				
			}
			
		   data =0;
    }
}
