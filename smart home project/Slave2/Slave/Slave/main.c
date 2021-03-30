/*
 * Slave.c
 *
 * Created: 30/03/2021 16:31:47
 * Author : Mohamed-Sery
 */ 

#include "SPI.h"
#include "LED.h "
int main(void)
{
	SPI_Init();
	ROM1_Init();
	ROM2_Init();
	Uint8t data=0;
	/* Replace with your application code */
	while (1)
	{
		data = SPI_Receive();
		if (data == 100)
		{
			
			ROM1_TGL();
			
		}
		else if (data == 200)
		{
			
			ROM2_TGL();
			
		}
		
		 data =0;
	}
}

