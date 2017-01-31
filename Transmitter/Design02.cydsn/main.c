/* ========================================
 * CAN BUS Transmission Firmware
 * Schuyler Alschuler (FRUCD)
 * ========================================
*/
#include <project.h>
#include "can_manga.h"
uint8 Tx_Data = 0x0;

int main()
{
 CAN_1_Start();
 //Timer_1_Start();
 //isr_1_Start();

 CyGlobalIntEnable;
uint8_t data[8] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};
 for(;;) /* do forever */
 {    
    can_send(data, 0x600);
    CyDelay(1000);
    data[0]++;
    
    /*
    CAN_1_SendMsg1(); // Sends message to mailboxes 0 and 1 respectively.
    CAN_1_SendMsg0(); // Sends whatever data is held in Tx_Data
    LED_1_Write(1);
    CyDelay(200);
    LED_1_Write(0);
    CyDelay(500);
    */   
    
 }
return 0;
}

