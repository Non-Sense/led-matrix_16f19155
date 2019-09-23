/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC16F19155
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

uint8_t matrics_buf[54];
uint8_t matrics_subbuf[54];

inline
void SerReset(){
    L_SRCLR_SetLow();
    H_SRCLR_SetLow();
    L_SRCLR_SetHigh();
    H_SRCLR_SetHigh();
}

inline
void SerResetH(){
    H_SRCLR_SetLow();
    H_SRCLR_SetHigh();
}

inline
void SerResetL(){
    L_SRCLR_SetLow();
    L_SRCLR_SetHigh();
}

inline
void SerRatch(){
    H_RCLK_SetHigh();
    L_RCLK_SetHigh();
    H_RCLK_SetLow();
    L_RCLK_SetLow();
}

inline
void SerRatchH(){
    H_RCLK_SetHigh();
    H_RCLK_SetLow();
}

inline
void SerRatchL(){
    L_RCLK_SetHigh();
    L_RCLK_SetLow();
}

inline
void SerShiftH(){
    H_SRCLK_SetHigh();
    H_SRCLK_SetLow();
}

inline
void SerShiftL(){
    L_SRCLK_SetHigh();
    L_SRCLK_SetLow();
}

inline
void SerShiftRatchH(){
    H_SRCLK_SetHigh();
    H_RCLK_SetHigh();
    H_SRCLK_SetLow();
    H_RCLK_SetLow();
}

inline
void SerShiftRatchL(){
    L_SRCLK_SetHigh();
    L_RCLK_SetHigh();
    L_SRCLK_SetLow();
    L_RCLK_SetLow();
}

inline
void SerSetLow(){
    H_RCLK_SetLow();
    H_SRCLK_SetLow();
    H_SER_SetLow();
    L_RCLK_SetLow();
    L_SRCLK_SetLow();
    L_SER_SetLow();
}

inline
void SerDisableL(){
    L_OE_SetHigh();
}

inline
void SerEnableL(){
    L_OE_SetLow();
}

void DisplayBuf(){
    
    SerSetLow();
    SerReset();
    SerRatch();
    
    L_SER_SetHigh();
    
    uint8_t i,k;
    uint8_t b1,b2,b3;
    
    for(i=0;i<54;i+=3){
        b1=matrics_buf[i];
        b2=matrics_buf[i+1];
        b3=matrics_buf[i+2];
        
        SerDisableL();
        for(k=0;k<8;k++){
            H_SER_LAT = (b1&0x01)?1:0;
            b1>>=1;
            SerShiftH();
        }
        for(k=0;k<4;k++){
            H_SER_LAT = (b2&0x01)?1:0;
            b2>>=1;
            SerShiftH();
        }
        
        //SerDisableL();
        SerShiftRatchL();
        SerRatchH();
        SerEnableL();
        L_SER_SetLow();

        for(uint8_t nnn=0;nnn<0xa0;nnn++){
            NOP();
        }
        
        SerDisableL();
        for(k=0;k<4;k++){
            H_SER_LAT = (b2&0x01)?1:0;
            b2>>=1;
            SerShiftH();
        }
        for(k=0;k<8;k++){
            H_SER_LAT = (b3&0x01)?1:0;
            b3>>=1;
            SerShiftH();
        }
        //L_OE_SetHigh();
        SerShiftRatchL();
        SerRatchH();
        SerEnableL();
        
        for(uint8_t nnn=0;nnn<0xa0;nnn++){
            NOP();
        }
    }
    SerSetLow();
    SerReset();
    SerRatch();
}

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptDisable();
    for(uint8_t i=0;i<54;i++){
        matrics_buf[i]=0xff;
    }
    
    SerSetLow();
    SerReset();
    SerRatch();
    
    uint16_t cnt=0;
    uint16_t cnt2=0;
    
    while (1)
    {
        DisplayBuf();
        
        if(cnt>=0x5){
            for(uint8_t i=0;i<54;i++){
                matrics_buf[i]=0;
            }
            uint8_t tadr=(uint8_t)(cnt2/8);
            uint8_t tsft=(uint8_t)(cnt2%8);
            matrics_buf[tadr]=0xff;
            matrics_buf[tadr]^=(0x01<<tsft);
            cnt2++;
            if(cnt2>=432){
                cnt2=0;
            }
            cnt=0;
        }
        cnt++;
        
        // Add your application code
    }
}
/**
 End of File
*/