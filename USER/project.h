#ifndef __PROJECT_H__
#define __PROJECT_H__


#include "es_board.h"
#include "es_pwm.h"
#include "import.h"


#include "es_PC13_LED.h"



class Project : public CBoard
{
public:

	void Init();

	void Loop();

private:
	virtual void GPIO_Config();

	virtual void RCC_Config();

	virtual void NVIC_Config();

};







#endif // !__PROJECT_H__
