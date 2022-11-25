#include "GPIO.h"
/**
 * @brief  初始化GPIO库
 * @param  None
 * @retval None
 */
int GPIO_Init()
{
    int status = gpioInitialise();
    //使用BCM GPIO 引脚编号表
    if (status < 0)
    {
        err_message(status);
    }
    else
    {
        cout << "GPIO initialized success." << endl;
    }
    return status;
}

/**
 * @brief  关闭GPIO库
 * @param  param       空参数
 * @retval None
 */
void GPIO_Terminate(int param)
{
    gpioTerminate();
    cout << "GPIO terminated." << endl;
}