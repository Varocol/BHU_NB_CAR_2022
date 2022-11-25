#ifndef __OJ_DELAY_H
#define __OJ_DELAY_H
#include <iostream>
#include "pigpio.h"
#include "Message.h"
using namespace std;

void delay_us(int us);
void delay_ms(int ms);
void delay(int s);
void delay(int s, int us);
void sleep(double s);

#endif // !__OJ_DELAY_H
