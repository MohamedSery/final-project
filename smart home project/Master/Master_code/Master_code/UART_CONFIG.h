/*
 * UART_CONFIG.h
 *
 * Created: 24/03/2021 15:30:09
 *  Author: Mohamed-Sery
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_
/*
1- Macros
2- Address of registers
3- Renaming Port names
4- Renaming Pin names
5- Renaming status
*/

#include "CPU_CONFIGRATION.h" // Macros
/*
#define UBRRL (*(volatile Uint8t*)(0x29))
#define UBRRH (*(volatile Uint8t*)(0x40))
#define UCSRA (*(volatile Uint8t*)(0x2B))
#define UCSRB (*(volatile Uint8t*)(0x29A)
#define UCSRC (*(volatile Uint8t*)(0x40))
#define UDR   (*(volatile Uint8t*)(0x2C))
*/

#define FRQ  		160000
#define BAUDRATE 	9600

typedef enum
{
	UART_NOK = 0,
	UART_OK = 1
}UART_Status;



#endif /* UART_CONFIG_H_ */