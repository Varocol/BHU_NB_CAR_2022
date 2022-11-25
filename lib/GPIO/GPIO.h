#ifndef __OJ_GPIO_H
#define __OJ_GPIO_H
#include "pigpio.h"
#include "Message.h"
int GPIO_Init();
void GPIO_Terminate(int);
#endif // !__OJ_GPIO_H