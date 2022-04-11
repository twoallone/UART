/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */
    /* Enable CM4.  CY_CORTEX_M4_APPL_ADDR must be updated if CM4 memory layout is changed. */
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR); 

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    mUART_Start();
    for(;;)
    {
        /* Place your application code here. */
        static float angleR = 0, angleS = 120, angleT = 240;
        angleR += 1;
        angleS += 1;
        angleT += 1;
        float valueR = sin(angleR * 3.14 / 180);
        float valueS = sin(angleS * 3.14 / 180);
        float valueT = sin(angleT * 3.14 / 180);
        printf("%7.3f\t%7.3f\t%7.3f\n\r", valueR, valueS, valueT);
        
    }
}

/* [] END OF FILE */
