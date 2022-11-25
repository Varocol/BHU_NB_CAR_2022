#include "Servo.h"
/**
 * @brief  角度转PWM脉宽
 * @param  angle    转向角
 * @retval PWM脉宽
 */
int Servo_Angle2PULSE(int angle)
{
    angle = angle > CAR_MAX_ANGLE ? CAR_MAX_ANGLE : angle < CAR_MIN_ANGLE ? CAR_MIN_ANGLE
                                                                          : angle;
    return angle * 1.0 * (SERVO_MAX_PULSE - SERVO_MIN_PULSE) / (SERVO_MAX_ANGLE - SERVO_MIN_ANGLE) + SERVO_MIN_PULSE;
}

/**
 * @brief  舵机初始化
 * @param  None
 * @retval None
 */
void Servo_Init()
{
    int status = gpioServo(SERVO_PIN, Servo_Angle2PULSE((CAR_MIN_ANGLE + CAR_MAX_ANGLE) / 2));
    if (status < 0)
    {
        err_message(status);
    }
    else if (status == 0)
    {
        cout << "Servo initialized success." << endl;
    }
    delay_ms(250);
    Servo_Stop();
}

/**
 * @brief  舵机转向
 * @param  angle    转向角
 * @retval None
 */
void Servo_Turn(int angle)
{
    int status = gpioServo(SERVO_PIN, Servo_Angle2PULSE(angle));
    if (status < 0)
    {
        err_message(status);
    }
    else if (status == 0)
    {
        cout << "Servo turn " << angle << "°." << endl;
    }
}

/**
 * @brief  舵机停止
 * @param  None
 * @retval None
 */
void Servo_Stop()
{
    int status = gpioServo(SERVO_PIN, 0);
    if (status < 0)
    {
        err_message(status);
    }
    else if (status == 0)
    {
        cout << "Servo Stoped." << endl;
    }
}