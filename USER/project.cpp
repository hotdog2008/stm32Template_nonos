#include "project.h"



/************************************************************************/
/* project实现                                                          */
/************************************************************************/

void Project::Init()
{
	CBoard::Init();

	//在此处初始化
	printf("init.\r\n");
}

void Project::Loop()
{
	//在此处进行主线程工作
	printf("running..\r\n");
	//es_pc13_led_blink(2,100);
	delay_ms(1000);
}

void Project::GPIO_Config()
{
	
}

void Project::RCC_Config()
{
}

void Project::NVIC_Config()
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
}










/************************************************************************/
/* 中断处理函数定义                                                     */
/************************************************************************/
extern Project project;


//串口1接收中断处理
void usart1Handler(u16 val) {
	project.pUsart1->Write(val);
	
	
#ifdef __USING_7BIT_SERIAL__	
	project.serial.UARTNewData(val);
#endif // __USING_7BIT_SERIAL__


}



//串口2接收中断处理
void usart2Handler(u16 val) {
#ifdef __USING_7BIT_SERIAL__	
	project.serial.UARTNewData(val);
#endif // __USING_7BIT_SERIAL__


}



//spi1中断处理
void spi1Handle(u8 val) {
#ifdef __USING_7BIT_SERIAL__	
	project.serial.SPINewData(val);
#endif // __USING_7BIT_SERIAL__


}



#ifdef __USING_7BIT_SERIAL__	
//7bit 协议IRQ
void UARTPackageReady(u8* buff, u8 length)
{


}
#endif // __USING_7BIT_SERIAL__






void new24DataEventHandler(u8 flag, u8* sender, u8* data, u8 len)
{
	switch (data[0])
	{
	case 0:
#ifdef __USING_PWM__
		//pwm cmd
		project.pwm.PWM_Input(data[1], data[2]);
#endif//__USING_PWM__
		break;
	}
}


