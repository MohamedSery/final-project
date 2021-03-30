/*
 * LED.h
 *
 * Created: 24/03/2021 16:10:26
 *  Author: Mohamed-Sery
 */ 


#ifndef LED_H_
#define LED_H_
/*
1- Macros
2- User Define data types{Structure, Union, Enum}(If exist)
3- Global Variables (If exist)
4- Functions Prototypes
*/

#include "LED_CONFIG.h"
// ROM1
void ROM1_Init(void);
void ROM1_ON(void);
void ROM1_OFF(void);
void ROM1_TGL(void);

/********** EDIT BY SERY ********/
// ROM2
void ROM2_Init(void);
void ROM2_ON(void);
void ROM2_OFF(void);
void ROM2_TGL(void);
// ROM3
void ROM3_Init(void);
void ROM3_ON(void);
void ROM3_OFF(void);
void ROM3_TGL(void);
// ROM4
void ROM4_Init(void);
void ROM4_ON(void);
void ROM4_OFF(void);
void ROM4_TGL(void);


/*********** EDIT END ************/





#endif /* LED_H_ */