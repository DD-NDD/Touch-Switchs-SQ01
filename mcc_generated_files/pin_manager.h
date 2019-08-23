/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16LF1559
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_EN aliases
#define LED_EN_TRIS                 TRISAbits.TRISA2
#define LED_EN_LAT                  LATAbits.LATA2
#define LED_EN_PORT                 PORTAbits.RA2
#define LED_EN_WPU                  WPUAbits.WPUA2
#define LED_EN_ANS                  ANSELAbits.ANSA2
#define LED_EN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_EN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_EN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_EN_GetValue()           PORTAbits.RA2
#define LED_EN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_EN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_EN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_EN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_EN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_EN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RL1 aliases
#define RL1_TRIS                 TRISAbits.TRISA5
#define RL1_LAT                  LATAbits.LATA5
#define RL1_PORT                 PORTAbits.RA5
#define RL1_WPU                  WPUAbits.WPUA5
#define RL1_ANS                  ANSELAbits.ANSA5
#define RL1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RL1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RL1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RL1_GetValue()           PORTAbits.RA5
#define RL1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RL1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RL1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define RL1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define RL1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define RL1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_1_B aliases
#define LED_1_B_TRIS                 TRISCbits.TRISC5
#define LED_1_B_LAT                  LATCbits.LATC5
#define LED_1_B_PORT                 PORTCbits.RC5
#define LED_1_B_ANS                  ANSELCbits.ANSC5
#define LED_1_B_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_1_B_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_1_B_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_1_B_GetValue()           PORTCbits.RC5
#define LED_1_B_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_1_B_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_1_B_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_1_B_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LED_1_R aliases
#define LED_1_R_TRIS                 TRISCbits.TRISC7
#define LED_1_R_LAT                  LATCbits.LATC7
#define LED_1_R_PORT                 PORTCbits.RC7
#define LED_1_R_ANS                  ANSELCbits.ANSC7
#define LED_1_R_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_1_R_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_1_R_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_1_R_GetValue()           PORTCbits.RC7
#define LED_1_R_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_1_R_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_1_R_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_1_R_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

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