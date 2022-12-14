/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB? Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB? Code Configurator - v2.25.2
        Device            :  PIC16F1827
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_LMid aliases
#define IO_LMid_TRIS               TRISB5
#define IO_LMid_LAT                LATB5
#define IO_LMid_PORT               RB5
#define IO_LMid_ANS                ANSB5
#define IO_LMid_SetHigh()    do { LATB5 = 1; } while(0)
#define IO_LMid_SetLow()   do { LATB5 = 0; } while(0)
#define IO_LMid_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define IO_LMid_GetValue()         RB5
#define IO_LMid_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define IO_LMid_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define IO_LMid_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define IO_LMid_SetDigitalMode()   do { ANSB5 = 0; } while(0)
// get/set IO_LED aliases
#define IO_LED_TRIS               TRISB4
#define IO_LED_LAT                LATB4
#define IO_LED_PORT               RB4
#define IO_LED_ANS                ANSB4
#define IO_LED_SetHigh()    do { LATB4 = 1; } while(0)
#define IO_LED_SetLow()   do { LATB4 = 0; } while(0)
#define IO_LED_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define IO_LED_GetValue()         RB4
#define IO_LED_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define IO_LED_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define IO_LED_SetAnalogMode()   do { ANSB4 = 1; } while(0)
#define IO_LED_SetDigitalMode()   do { ANSB4 = 0; } while(0)
// get/set IO_LCrossD aliases
#define IO_LCrossD_TRIS               TRISA7
#define IO_LCrossD_LAT                LATA7
#define IO_LCrossD_PORT               RA7
#define IO_LCrossD_SetHigh()    do { LATA7 = 1; } while(0)
#define IO_LCrossD_SetLow()   do { LATA7 = 0; } while(0)
#define IO_LCrossD_Toggle()   do { LATA7 = ~LATA7; } while(0)
#define IO_LCrossD_GetValue()         RA7
#define IO_LCrossD_SetDigitalInput()    do { TRISA7 = 1; } while(0)
#define IO_LCrossD_SetDigitalOutput()   do { TRISA7 = 0; } while(0)

// get/set IO_LDown aliases
#define IO_LDown_TRIS               TRISA6
#define IO_LDown_LAT                LATA6
#define IO_LDown_PORT               RA6
#define IO_LDown_SetHigh()    do { LATA6 = 1; } while(0)
#define IO_LDown_SetLow()   do { LATA6 = 0; } while(0)
#define IO_LDown_Toggle()   do { LATA6 = ~LATA6; } while(0)
#define IO_LDown_GetValue()         RA6
#define IO_LDown_SetDigitalInput()    do { TRISA6 = 1; } while(0)
#define IO_LDown_SetDigitalOutput()   do { TRISA6 = 0; } while(0)

// get/set IO_LCrossL aliases
#define IO_LCrossL_TRIS               TRISA2
#define IO_LCrossL_LAT                LATA2
#define IO_LCrossL_PORT               RA2
//#define IO_LCrossL_WPU                WPUA2
#define IO_LCrossL_SetHigh()    do { LATA2 = 1; } while(0)
#define IO_LCrossL_SetLow()   do { LATA2 = 0; } while(0)
#define IO_LCrossL_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define IO_LCrossL_GetValue()         RA2
#define IO_LCrossL_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define IO_LCrossL_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

//#define IO_LCrossL_SetPullup()    do { WPUA2 = 1; } while(0)
//#define IO_LCrossL_ResetPullup()   do { WPUA2 = 0; } while(0)
// get/set RX aliases
#define RX_TRIS               TRISB1
#define RX_LAT                LATB1
#define RX_PORT               RB1
#define RX_WPU                WPUB1
#define RX_ANS                ANSB1
#define RX_SetHigh()    do { LATB1 = 1; } while(0)
#define RX_SetLow()   do { LATB1 = 0; } while(0)
#define RX_Toggle()   do { LATB1 = ~LATB1; } while(0)
#define RX_GetValue()         RB1
#define RX_SetDigitalInput()    do { TRISB1 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISB1 = 0; } while(0)

#define RX_SetPullup()    do { WPUB1 = 1; } while(0)
#define RX_ResetPullup()   do { WPUB1 = 0; } while(0)
#define RX_SetAnalogMode()   do { ANSB1 = 1; } while(0)
#define RX_SetDigitalMode()   do { ANSB1 = 0; } while(0)
// get/set TX aliases
#define TX_TRIS               TRISB2
#define TX_LAT                LATB2
#define TX_PORT               RB2
#define TX_WPU                WPUB2
#define TX_ANS                ANSB2
#define TX_SetHigh()    do { LATB2 = 1; } while(0)
#define TX_SetLow()   do { LATB2 = 0; } while(0)
#define TX_Toggle()   do { LATB2 = ~LATB2; } while(0)
#define TX_GetValue()         RB2
#define TX_SetDigitalInput()    do { TRISB2 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISB2 = 0; } while(0)

#define TX_SetPullup()    do { WPUB2 = 1; } while(0)
#define TX_ResetPullup()   do { WPUB2 = 0; } while(0)
#define TX_SetAnalogMode()   do { ANSB2 = 1; } while(0)
#define TX_SetDigitalMode()   do { ANSB2 = 0; } while(0)
// get/set IO_TactSw00 aliases
#define IO_TactSw00_TRIS               TRISB0
#define IO_TactSw00_LAT                LATB0
#define IO_TactSw00_PORT               RB0
#define IO_TactSw00_WPU                WPUB0
#define IO_TactSw00_ANS                ANSB0
#define IO_TactSw00_SetHigh()    do { LATB0 = 1; } while(0)
#define IO_TactSw00_SetLow()   do { LATB0 = 0; } while(0)
#define IO_TactSw00_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define IO_TactSw00_GetValue()         RB0
#define IO_TactSw00_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define IO_TactSw00_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define IO_TactSw00_SetPullup()    do { WPUB0 = 1; } while(0)
#define IO_TactSw00_ResetPullup()   do { WPUB0 = 0; } while(0)
#define IO_TactSw00_SetAnalogMode()   do { ANSB0 = 1; } while(0)
#define IO_TactSw00_SetDigitalMode()   do { ANSB0 = 0; } while(0)
// get/set IO_LCrossR aliases
#define IO_LCrossR_TRIS               TRISA4
#define IO_LCrossR_LAT                LATA4
#define IO_LCrossR_PORT               RA4
//#define IO_LCrossR_WPU                WPUA4
#define IO_LCrossR_ANS                ANSA4
#define IO_LCrossR_SetHigh()    do { LATA4 = 1; } while(0)
#define IO_LCrossR_SetLow()   do { LATA4 = 0; } while(0)
#define IO_LCrossR_Toggle()   do { LATA4 = ~LATB4; } while(0)
#define IO_LCrossR_GetValue()         RA4
#define IO_LCrossR_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define IO_LCrossR_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

//#define IO_LCrossR_SetPullup()    do { WPUA4 = 1; } while(0)
//#define IO_LCrossR_ResetPullup()   do { WPUA4 = 0; } while(0)
#define IO_LCrossR_SetAnalogMode()   do { ANSA4 = 1; } while(0)
#define IO_LCrossR_SetDigitalMode()   do { ANSA4 = 0; } while(0)
// get/set IO_LCrossU aliases
#define IO_LCrossU_TRIS               TRISA3
#define IO_LCrossU_LAT                LATA3
#define IO_LCrossU_PORT               RA3
//#define IO_LCrossU_WPU                WPUA3
#define IO_LCrossU_ANS                ANSA3
#define IO_LCrossU_SetHigh()    do { LATA3 = 1; } while(0)
#define IO_LCrossU_SetLow()   do { LATA3 = 0; } while(0)
#define IO_LCrossU_Toggle()   do { LATA3 = ~LATB5; } while(0)
#define IO_LCrossU_GetValue()         RA3
#define IO_LCrossU_SetDigitalInput()    do { TRISA3 = 1; } while(0)
#define IO_LCrossU_SetDigitalOutput()   do { TRISA3 = 0; } while(0)

//#define IO_LCrossU_SetPullup()    do { WPUA3 = 1; } while(0)
//#define IO_LCrossU_ResetPullup()   do { WPUA3 = 0; } while(0)
#define IO_LCrossU_SetAnalogMode()   do { ANSA3 = 1; } while(0)
#define IO_LCrossU_SetDigitalMode()   do { ANSA3 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */