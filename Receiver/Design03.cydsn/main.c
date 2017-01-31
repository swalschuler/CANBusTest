/* ========================================
 * CAN BUS Transmission Firmware
 * Schuyler Alschuler (FRUCD)
 * ========================================
*/
#include <project.h>
uint8 Rx_Data = 10;
volatile unsigned int incrementedNumber = 0;

int main()
{
 CAN_1_Start();
 CyGlobalIntEnable;

 for(;;) /* do forever */
 {  
    if (incrementedNumber > 10)
    {
        RED_Write(1);
        GREEN_Write(0);
    }
    else
    {
        RED_Write(0);
        GREEN_Write(1);
    }
        
 }
return 0;
}


