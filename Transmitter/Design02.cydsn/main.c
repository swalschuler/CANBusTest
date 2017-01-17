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
 CyGlobalIntEnable;
 for(;;) /* do forever */
 {
    CAN_1_SendMsg1(); // Sends message to mailboxes 0 and 1 respectively.
    CAN_1_SendMsg0(); // Sends whatever data is held in Tx_Data
    CyDelay(500);
 }
return 0;
}

