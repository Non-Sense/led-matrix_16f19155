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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F19155
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.05 and above
        MPLAB 	          :  MPLAB X 5.20	
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

// get/set L_RCLK aliases
#define L_RCLK_TRIS                 TRISAbits.TRISA0
#define L_RCLK_LAT                  LATAbits.LATA0
#define L_RCLK_PORT                 PORTAbits.RA0
#define L_RCLK_WPU                  WPUAbits.WPUA0
#define L_RCLK_OD                   ODCONAbits.ODCA0
#define L_RCLK_ANS                  ANSELAbits.ANSA0
#define L_RCLK_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define L_RCLK_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define L_RCLK_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define L_RCLK_GetValue()           PORTAbits.RA0
#define L_RCLK_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define L_RCLK_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define L_RCLK_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define L_RCLK_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define L_RCLK_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define L_RCLK_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define L_RCLK_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define L_RCLK_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set L_SRCLK aliases
#define L_SRCLK_TRIS                 TRISAbits.TRISA1
#define L_SRCLK_LAT                  LATAbits.LATA1
#define L_SRCLK_PORT                 PORTAbits.RA1
#define L_SRCLK_WPU                  WPUAbits.WPUA1
#define L_SRCLK_OD                   ODCONAbits.ODCA1
#define L_SRCLK_ANS                  ANSELAbits.ANSA1
#define L_SRCLK_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define L_SRCLK_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define L_SRCLK_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define L_SRCLK_GetValue()           PORTAbits.RA1
#define L_SRCLK_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define L_SRCLK_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define L_SRCLK_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define L_SRCLK_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define L_SRCLK_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define L_SRCLK_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define L_SRCLK_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define L_SRCLK_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set L_SRCLR aliases
#define L_SRCLR_TRIS                 TRISAbits.TRISA2
#define L_SRCLR_LAT                  LATAbits.LATA2
#define L_SRCLR_PORT                 PORTAbits.RA2
#define L_SRCLR_WPU                  WPUAbits.WPUA2
#define L_SRCLR_OD                   ODCONAbits.ODCA2
#define L_SRCLR_ANS                  ANSELAbits.ANSA2
#define L_SRCLR_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define L_SRCLR_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define L_SRCLR_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define L_SRCLR_GetValue()           PORTAbits.RA2
#define L_SRCLR_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define L_SRCLR_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define L_SRCLR_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define L_SRCLR_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define L_SRCLR_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define L_SRCLR_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define L_SRCLR_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define L_SRCLR_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set L_SER aliases
#define L_SER_TRIS                 TRISAbits.TRISA3
#define L_SER_LAT                  LATAbits.LATA3
#define L_SER_PORT                 PORTAbits.RA3
#define L_SER_WPU                  WPUAbits.WPUA3
#define L_SER_OD                   ODCONAbits.ODCA3
#define L_SER_ANS                  ANSELAbits.ANSA3
#define L_SER_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define L_SER_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define L_SER_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define L_SER_GetValue()           PORTAbits.RA3
#define L_SER_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define L_SER_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define L_SER_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define L_SER_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define L_SER_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define L_SER_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define L_SER_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define L_SER_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set H_SRCLR aliases
#define H_SRCLR_TRIS                 TRISAbits.TRISA6
#define H_SRCLR_LAT                  LATAbits.LATA6
#define H_SRCLR_PORT                 PORTAbits.RA6
#define H_SRCLR_WPU                  WPUAbits.WPUA6
#define H_SRCLR_OD                   ODCONAbits.ODCA6
#define H_SRCLR_ANS                  ANSELAbits.ANSA6
#define H_SRCLR_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define H_SRCLR_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define H_SRCLR_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define H_SRCLR_GetValue()           PORTAbits.RA6
#define H_SRCLR_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define H_SRCLR_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define H_SRCLR_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define H_SRCLR_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define H_SRCLR_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define H_SRCLR_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define H_SRCLR_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define H_SRCLR_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set H_SER aliases
#define H_SER_TRIS                 TRISAbits.TRISA7
#define H_SER_LAT                  LATAbits.LATA7
#define H_SER_PORT                 PORTAbits.RA7
#define H_SER_WPU                  WPUAbits.WPUA7
#define H_SER_OD                   ODCONAbits.ODCA7
#define H_SER_ANS                  ANSELAbits.ANSA7
#define H_SER_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define H_SER_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define H_SER_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define H_SER_GetValue()           PORTAbits.RA7
#define H_SER_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define H_SER_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define H_SER_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define H_SER_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define H_SER_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define H_SER_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define H_SER_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define H_SER_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set H_SRCLK aliases
#define H_SRCLK_TRIS                 TRISCbits.TRISC0
#define H_SRCLK_LAT                  LATCbits.LATC0
#define H_SRCLK_PORT                 PORTCbits.RC0
#define H_SRCLK_WPU                  WPUCbits.WPUC0
#define H_SRCLK_OD                   ODCONCbits.ODCC0
#define H_SRCLK_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define H_SRCLK_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define H_SRCLK_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define H_SRCLK_GetValue()           PORTCbits.RC0
#define H_SRCLK_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define H_SRCLK_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define H_SRCLK_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define H_SRCLK_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define H_SRCLK_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define H_SRCLK_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)

// get/set H_RCLK aliases
#define H_RCLK_TRIS                 TRISCbits.TRISC1
#define H_RCLK_LAT                  LATCbits.LATC1
#define H_RCLK_PORT                 PORTCbits.RC1
#define H_RCLK_WPU                  WPUCbits.WPUC1
#define H_RCLK_OD                   ODCONCbits.ODCC1
#define H_RCLK_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define H_RCLK_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define H_RCLK_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define H_RCLK_GetValue()           PORTCbits.RC1
#define H_RCLK_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define H_RCLK_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define H_RCLK_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define H_RCLK_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define H_RCLK_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define H_RCLK_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)

// get/set SCL1 aliases
#define SCL1_TRIS                 TRISCbits.TRISC3
#define SCL1_LAT                  LATCbits.LATC3
#define SCL1_PORT                 PORTCbits.RC3
#define SCL1_WPU                  WPUCbits.WPUC3
#define SCL1_OD                   ODCONCbits.ODCC3
#define SCL1_ANS                  ANSELCbits.ANSC3
#define SCL1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCL1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCL1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCL1_GetValue()           PORTCbits.RC3
#define SCL1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCL1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCL1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCL1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCL1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SCL1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SCL1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCL1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDA1 aliases
#define SDA1_TRIS                 TRISCbits.TRISC4
#define SDA1_LAT                  LATCbits.LATC4
#define SDA1_PORT                 PORTCbits.RC4
#define SDA1_WPU                  WPUCbits.WPUC4
#define SDA1_OD                   ODCONCbits.ODCC4
#define SDA1_ANS                  ANSELCbits.ANSC4
#define SDA1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDA1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDA1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDA1_GetValue()           PORTCbits.RC4
#define SDA1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDA1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDA1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDA1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDA1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SDA1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SDA1_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDA1_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

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