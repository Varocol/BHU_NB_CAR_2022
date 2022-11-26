#include <iostream>
#include "Libraries.h"
#include "signal.h"
using namespace std;
void servo_test()
{
    int angle;
    //在关闭前先关闭GPIO
    signal(SIGINT, GPIO_Terminate);
    signal(SIGABRT, GPIO_Terminate);
    signal(SIGTERM, GPIO_Terminate);
    signal(SIGQUIT, GPIO_Terminate);
    signal(SIGKILL, GPIO_Terminate);

    if (GPIO_Init() != PI_INIT_FAILED)
    {
        Servo_Init();
        cout << "input angle(-1 to quit):" << endl;
        while (1)
        {
            cin >> angle;
            if (cin.fail())
            {
                cout << "bad input." << endl;
                cin.clear();
                while (cin.get() != '\n')
                    continue;
            }
            else if (angle == -1)
            {
                break;
            }
            else
            {
                Servo_Turn(angle);
                delay_ms(500);
                Servo_Stop();
            }
        }
    }
}