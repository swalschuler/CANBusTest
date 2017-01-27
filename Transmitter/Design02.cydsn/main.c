/* ========================================
 * CAN BUS Transmission Firmware
 * Schuyler Alschuler (FRUCD)
 * ========================================
*/
#include <project.h>
uint8 Tx_Data = 0x0;

int main()
{
 CAN_1_Start();
 
 Timer_1_Start();
 isr_1_Start();

 CyGlobalIntEnable;
 for(;;) /* do forever */
 {
    /*
    CAN_1_SendMsg1(); // Sends message to mailboxes 0 and 1 respectively.
    CAN_1_SendMsg0(); // Sends whatever data is held in Tx_Data
    LED_1_Write(1);
    CyDelay(1000);
    LED_1_Write(0);
    CyDelay(1000);
    */
 }
return 0;
}

