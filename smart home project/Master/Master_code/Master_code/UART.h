/*
 * UART.h
 *
 * Created: 24/03/2021 15:30:21
 *  Author: Mohamed-Sery
 */ 


#ifndef UART_H_
#define UART_H_


#include "UART_CONFIG.h"

void UART_Init(void);
void UART_Transmit(Uint8t data);
Uint8t UART_Receive(void);
void UART_Transmit_Str(Uint8t* str);
Uint8t* UART_Receive_Str(void);

UART_Status UART_PRO_Transmit(Uint8t data);
UART_Status UART_PRO_Receive(Uint8t* data);


#endif /* UART_H_ */