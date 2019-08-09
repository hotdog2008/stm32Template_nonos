#ifndef CONFIG_H_
#define CONFIG_H_
/************************************************************************/
/* es_board.hԤ����                                                       */
/************************************************************************/
//debug����,ע�͵���define����������debug����
//#define __ES_DEBUG__

//2.4����
//#define __USING_NRF24__

//7bit Э�鿪��
//#define __USING_7BIT_SERIAL__

//spi���أ�ע�ⲻ�����ǿ�������define��ʾ��ʹ��spi��
//#define __NOT_USING_SPI__

//pwm����
//#define __USING_PWM__

//��������
#define USART1_SPEED 115200
#define USART2_SPEED 115200

//Ĭ����Ϣ�������
#define OUTPUT_USART pUsart1



//nnp5����
#define USING_NNP5
#define NNP5_PKG_BUFFER_SIZE 64     //NNP5���泤��


/************************************************************************/
/* es_iic.hԤ����                                                       */
/************************************************************************/
#define IIC_SPEED 400000





/************************************************************************/
/* es_rtc.hԤ����                                                       */
/************************************************************************/
//������RTC��ʼ����ʶ
#define BKP_SIGN_VALUE 0x4ea5

//RTCʱ��Ԥ��Ƶ��
#define RTC_PRESCALER 32767

//RTCУ��ֵ��ÿ30��ʱ���ܿ��������������������
#define RTC_FastSecPer30days 0

//RTC�ж����ȼ�����
#define RTC_PreemptionPriority 1
#define RTC_SubPriority 1





/************************************************************************/
/* es_pwm30.hԤ����                                                       */
/************************************************************************/

//�Ƚ����Լ�����
#define CC_Cycle 1

/* ��ʱ��Ԥ��Ƶֵ
�Ƚ����Լ�����CC_Cycle(us)=(1/72)*(Timer_Prescaler+1)
128ʱ�Լ�����Ϊ8us */
#define Timer_Prescaler 71

//TIM21Ԥ��Ƶֵ����Ҫ��Timer_Prescalerһ��
#define Timer2_Prescaler TIM2_PRESCALER_128

//���ģʽpwmƵ��
#define Motor_Mode_Frequency 1000

/* ���ģʽ������
���ȷ�Χ 1000us/1us=1000����)
32000/1000=32  (32000��pwmֵ��Χ) */
#define Motor_Mode_Divisor 32

//���ģʽ��������ֵ����ֵΪ Motor_Mode_Divisor/2
#define Motor_Mode_Rounder 16

/* ���ģʽ������
���ȷ�Χ 2000us/1us=2000(��)
32000/2000=16 (32000��pwmֵ��Χ) */
#define Servo_Mode_Divisor 16

//���ģʽ��������ֵ����ֵΪ Servo_Mode_Divisor/2
#define Servo_Mode_Rounder 8

#define pwm_period 0xffff

#endif

