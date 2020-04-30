#ifndef _LED_H_
#define _LED_H_





typedef struct
{

	_Bool Led2Sta;


} LED_STATUS;

extern LED_STATUS led_status;


typedef enum
{

	LED_OFF = 0,
	LED_ON

} LED_ENUM;


void Led_Init(void);

void Led2_Set(LED_ENUM status);

//void Led3_Set(LED_ENUM status);

//void Led4_Set(LED_ENUM status);

//void Led5_Set(LED_ENUM status);


#endif
