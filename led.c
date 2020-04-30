/**
	************************************************************
	************************************************************
	************************************************************
	*	�ļ����� 	led.c
	*
	*	���ߣ� 		�ż���
	*
	*	���ڣ� 		2016-11-23
	*
	*	�汾�� 		V1.0
	*
	*	˵���� 		LED��ʼ��������LED
	*
	*	�޸ļ�¼��	
	************************************************************
	************************************************************
	************************************************************
**/

//��Ƭ��ͷ�ļ�
#include "stm32f10x.h"

//LEDͷ�ļ�
#include "led.h"


LED_STATUS led_status;


/*
************************************************************
*	�������ƣ�	Led_Init
*
*	�������ܣ�	LED��ʼ��
*
*	��ڲ�����	��
*
*	���ز�����	��
*
*	˵����		LED4-PB6	LED5-PB7	LED6-PB8	LED7-PB9
				�ߵ�ƽ�ص�		�͵�ƽ����
************************************************************
*/
void Led_Init(void)
{
	
	GPIO_InitTypeDef gpio_initstruct;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);							//��GPIOB��ʱ��
	
	gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;									//����Ϊ�������ģʽ
	gpio_initstruct.GPIO_Pin = GPIO_Pin_5;		//��ʼ��Pin6��7��8��10
	gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;									//���ص����Ƶ��

	GPIO_Init(GPIOB, &gpio_initstruct);												//��ʼ��GPIOB
    
    Led2_Set(LED_OFF);
//    Led3_Set(LED_OFF);
//    Led4_Set(LED_OFF);
   // Led5_Set(LED_OFF);

}

/*
************************************************************
*	�������ƣ�	Led2_Set
*
*	�������ܣ�	LED4����
*
*	��ڲ�����	status��LED_ON-����	LED_OFF-�ص�
*
*	���ز�����	��
*
*	˵����		
************************************************************
*/
void Led2_Set(LED_ENUM status)
{

	GPIO_WriteBit(GPIOB, GPIO_Pin_5, status != LED_ON ? Bit_SET : Bit_RESET);
	led_status.Led2Sta = status;

}

/*
************************************************************
*	�������ƣ�	Led3_Set
*
*	�������ܣ�	LED5����
*
*	��ڲ�����	status��LED_ON-����	LED_OFF-�ص�
*
*	���ز�����	��
*
*	˵����		
************************************************************
*/
//void Led3_Set(LED_ENUM status)
//{

//	GPIO_WriteBit(GPIOB, GPIO_Pin_0, status != LED_ON ? Bit_SET : Bit_RESET);
//	led_status.Led3Sta = status;

//}

/*
************************************************************
*	�������ƣ�	Led4_Set
*
*	�������ܣ�	LED6����
*
*	��ڲ�����	status��LED_ON-����	LED_OFF-�ص�
*
*	���ز�����	��
*
*	˵����		
************************************************************
*/
//void Led4_Set(LED_ENUM status)
//{

//	GPIO_WriteBit(GPIOB, GPIO_Pin_1, status != LED_ON ? Bit_SET : Bit_RESET);
//	led_status.Led4Sta = status;

//}

/*
************************************************************
*	�������ƣ�	Led5_Set
*
*	�������ܣ�	LED7����
*
*	��ڲ�����	status��LED_ON-����	LED_OFF-�ص�
*
*	���ز�����	��
*
*	˵����		
************************************************************
*/
//void Led5_Set(LED_ENUM status)
//{

//	GPIO_WriteBit(GPIOB, GPIO_Pin_9, status != LED_ON ? Bit_SET : Bit_RESET);
//	led_status.Led5Sta = status;

//}
