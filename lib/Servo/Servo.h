#ifndef __OJ_SERVO_H
#define __OJ_SERVO_H
#include "pigpio.h"
#include "Delay.h"
#include "Message.h"

#define SERVO_FREQUENCY 50   // Hz(默认值)
#define SERVO_PIN 21         //引脚
#define SERVO_MIN_PULSE 500  // us
#define SERVO_MAX_PULSE 2500 // us
#define SERVO_MIN_ANGLE 0    //度
#define SERVO_MAX_ANGLE 180  //度
#define CAR_MIN_ANGLE 0      //度
#define CAR_MAX_ANGLE 50     //度

/*
    软件PWM在100Hz以内较为稳定
    舵机脉宽:0.5 ~ 2.5ms
    舵机角度:0 ~ 180度
*/

void Servo_Turn(int angle);
void Servo_Init();
void Servo_Clear();
void Servo_Stop();

#endif // !__OJ_SERVO_H