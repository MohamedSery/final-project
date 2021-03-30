/*
 * LED.c
 *
 * Created: 24/03/2021 16:10:35
 *  Author: Mohamed-Sery
 */ 
#include "LED.h"

//ROM1
void ROM1_Init(void)
{
	/*Define direction*/
	//SET_BIT(LED0_DDR, LED0_PIN);
	//SET_BIT(DDRC, 2);
	//DIO_SetPin_Direction(DIO_PORTC, DIO_PIN2, DIO_PIN_OUTPUT);
	DIO_SetPin_Direction(ROM1_PORT, ROM1_PIN, ROM1_OUTPUT);
}
void ROM1_ON(void)
{
	/*Enable LED0*/
	//SET_BIT(LED0_PORT, LED0_PIN);
	DIO_SetPin_Value(ROM1_PORT, ROM1_PIN, ROM1_HIGH);
}
void ROM1_OFF(void)
{
	/*Disable LED0*/
	//CLR_BIT(LED0_PORT, LED0_PIN);
	DIO_SetPin_Value(ROM1_PORT, ROM1_PIN, ROM1_LOW);
}
void ROM1_TGL(void)
{
	/*Toggle LED0*/
	//TGL_BIT(LED0_PORT, LED0_PIN);
	DIO_TogglPin(ROM1_PORT, ROM1_PIN);
}

/*********** EDIT BY SERY ************/
//ROM2
void ROM2_Init(void)
{
	DIO_SetPin_Direction(ROM2_PORT, ROM2_PIN, ROM2_OUTPUT);
}
void ROM2_ON(void)
{
	DIO_SetPin_Value(ROM2_PORT, ROM2_PIN, ROM2_HIGH);
}
void ROM2_OFF(void)
{
	DIO_SetPin_Value(ROM2_PORT, ROM2_PIN, ROM2_LOW);
}
void ROM2_TGL(void)
{
	DIO_TogglPin(ROM2_PORT, ROM2_PIN);
}

//ROM3
void ROM3_Init(void)
{
	DIO_SetPin_Direction(ROM3_PORT, ROM3_PIN, ROM3_OUTPUT);
}
void ROM3_ON(void)
{
	DIO_SetPin_Value(ROM3_PORT, ROM3_PIN, ROM3_HIGH);
}
void ROM3_OFF(void)
{
	DIO_SetPin_Value(ROM3_PORT, ROM3_PIN, ROM3_LOW);
}
void ROM3_TGL(void)
{
	DIO_TogglPin(ROM3_PORT, ROM3_PIN);
}

//ROM4
void ROM4_Init(void)
{
	DIO_SetPin_Direction(ROM4_PORT, ROM4_PIN, ROM4_OUTPUT);
}
void ROM4_ON(void)
{
	DIO_SetPin_Value(ROM4_PORT, ROM4_PIN, ROM4_HIGH);
}
void ROM4_OFF(void)
{
	DIO_SetPin_Value(ROM4_PORT, ROM4_PIN, ROM4_LOW);
}
void ROM4_TGL(void)
{
	DIO_TogglPin(ROM4_PORT, ROM4_PIN);
}