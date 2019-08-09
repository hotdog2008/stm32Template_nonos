#ifndef CONFIG_H_
#define CONFIG_H_
/************************************************************************/
/* es_board.h预定义                                                       */
/************************************************************************/
//debug开关,注释掉本define即忽略所有debug代码
//#define __ES_DEBUG__

//2.4开关
//#define __USING_NRF24__

//7bit 协议开关
//#define __USING_7BIT_SERIAL__

//spi开关（注意不定义是开启，打开define表示不使用spi）
//#define __NOT_USING_SPI__

//pwm开关
//#define __USING_PWM__

//串口速率
#define USART1_SPEED 115200
#define USART2_SPEED 115200

//默认消息输出串口
#define OUTPUT_USART pUsart1



//nnp5开关
#define USING_NNP5
#define NNP5_PKG_BUFFER_SIZE 64     //NNP5缓存长度


/************************************************************************/
/* es_iic.h预定义                                                       */
/************************************************************************/
#define IIC_SPEED 400000





/************************************************************************/
/* es_rtc.h预定义                                                       */
/************************************************************************/
//备份区RTC初始化标识
#define BKP_SIGN_VALUE 0x4ea5

//RTC时钟预分频数
#define RTC_PRESCALER 32767

//RTC校正值，每30天时钟跑快的秒数（必需正整数）
#define RTC_FastSecPer30days 0

//RTC中断优先级设置
#define RTC_PreemptionPriority 1
#define RTC_SubPriority 1





/************************************************************************/
/* es_pwm30.h预定义                                                       */
/************************************************************************/

//比较器自加周期
#define CC_Cycle 1

/* 计时器预分频值
比较器自加周期CC_Cycle(us)=(1/72)*(Timer_Prescaler+1)
128时自加周期为8us */
#define Timer_Prescaler 71

//TIM21预分频值，需要与Timer_Prescaler一致
#define Timer2_Prescaler TIM2_PRESCALER_128

//电机模式pwm频率
#define Motor_Mode_Frequency 1000

/* 电机模式被除数
精度范围 1000us/1us=1000（份)
32000/1000=32  (32000是pwm值范围) */
#define Motor_Mode_Divisor 32

//电机模式四舍五入值，该值为 Motor_Mode_Divisor/2
#define Motor_Mode_Rounder 16

/* 舵机模式被除数
精度范围 2000us/1us=2000(份)
32000/2000=16 (32000是pwm值范围) */
#define Servo_Mode_Divisor 16

//舵机模式四舍五入值，该值为 Servo_Mode_Divisor/2
#define Servo_Mode_Rounder 8

#define pwm_period 0xffff

#endif

