/*
 * CPU_CONFIGRATION.h
 *
 * Created: 24/03/2021 15:28:39
 *  Author: Mohamed-Sery
 */ 


#ifndef CPU_CONFIGRATION_H_
#define CPU_CONFIGRATION_H_

#undef F_CPU                 /*Neglect internal oscillator*/
#define F_CPU 16000000       /*Define external oscillator*/
#include <avr/io.h>          /*Predefined Library - Define input and output*/
#include <util/delay.h>      /*Predefined Library - Define delay function*/
#include <avr/interrupt.h>   /*Predefined Library - Define interrupts vectors*/
#include "BIT_MATH.h"        /*User Defined Library - Bit functions*/
#include "STD_TYPES.h"       /*User Defined Library - Standard Types*/
#include "DIO.h"



#endif /* CPU_CONFIGRATION_H_ */