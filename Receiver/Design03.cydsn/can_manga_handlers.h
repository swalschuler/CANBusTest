/* ========================================
 * This file is used for declaring functions which will be executed for a particular CAN ID.
 * ========================================

    Make sure to use macros to access data bytes. They are not in
    the order you expect! These macros were defined by Cypress in CAN_1.h.
    
    CAN_1_DATA_BYTE_1    
    CAN_1_DATA_BYTE_2    
    CAN_1_DATA_BYTE_3    
    CAN_1_DATA_BYTE_4    
    CAN_1_DATA_BYTE_5
    CAN_1_DATA_BYTE_6
    CAN_1_DATA_BYTE_7
    CAN_1_DATA_BYTE_8
*/

#ifndef CAN_MANGA_HANDLERS_H
#define CAN_MANGA_HANDLERS_H

#include "CAN_1.h"
#include "RED.h"
    
extern volatile unsigned int incrementedNumber;

// Handles 0x300
void testHandler(CAN_1_RX_STRUCT msg)
{
    incrementedNumber = (int)msg.rxdata.byte[CAN_1_DATA_BYTE_1];
};
void testHandler2(CAN_1_RX_STRUCT msg)
{
    RED_Write(1);
    CyDelay(500);
    RED_Write(0);
};

    
#endif

/* [] END OF FILE */
