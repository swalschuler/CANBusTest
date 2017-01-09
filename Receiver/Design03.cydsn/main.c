/* ========================================
 * CAN BUS Transmission Firmware
 * Schuyler Alschuler (FRUCD)
 * ========================================
*/
#include <project.h>
uint8 Rx_Data = 10;

int main()
{
 CAN_1_Start();
 CyGlobalIntEnable;

 for(;;) /* do forever */
 {
    GREEN_Write(0);
    RED_Write(0);
    
    if (Rx_Data == 0x0)
    {
        LED_Write(1);
        CyDelay(200);
        LED_Write(0);
        CyDelay(200);
    }
 }
return 0;
}


