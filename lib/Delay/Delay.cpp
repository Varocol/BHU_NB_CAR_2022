#include "Delay.h"
/**
 * @brief  初始化GPIO库
 * @param  None
 * @retval None
 */
void delay_us(int us)
{
    gpioDelay(us);
}

/**
 * @brief  初始化GPIO库
 * @param  None
 * @retval None
 */
void delay_ms(int ms)
{
    gpioDelay(1000 * ms);
}

/**
 * @brief  初始化GPIO库
 * @param  None
 * @retval None
 */
void delay(int s)
{
    gpioDelay(1000000 * s);
}

/**
 * @brief  初始化GPIO库
 * @param  None
 * @retval None
 */
void delay(int s, int us)
{
    int status = gpioSleep(PI_TIME_RELATIVE, s, us);
    if (status != 0)
    {
        err_message(status);
    }
}

/**
 * @brief  初始化GPIO库
 * @param  None
 * @retval None
 */
void sleep(double s)
{
    time_sleep(s);
}