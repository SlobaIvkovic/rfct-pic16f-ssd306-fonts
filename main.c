/******************************************************************************
 * File:   main.c
 * Author: Sloba
 *
 * Created on 24.12.2022., 15.46
 * 
 * Da bi mogla da se koristi ćirilična tastatura generalna podešavanja projekta
 * moraju da budu podešena na encoding utf-8, project->Set Configuration->general
 * 
 *Softverski I2C kod je preuzet sa https://github.com/ddavidebor/PicLib/blob/master/I2C/i2c.h
 * kod je minimalno modifikovan, delay izmedju rastucih i padajucih ivica je potpuno izbacen
 * 
 *Kao primer za OLED drajever posluzio je https://github.com/kiwih/pic16f877a-ssd1306-oled/blob/master/ssd1306_unbuffered.h
 *****************************************************************************/

#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config CP = OFF         // FLASH Program Memory Code Protection bit (Code protection off)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)

#define _XTAL_FREQ 8000000
#include <xc.h>
#include "SSD1306.h"
#include <stdint.h>

//#include "font_metro.h"
#include "font_coolvetica.h"


void main(void) {
    
    __delay_ms(500);
    
    const unsigned char* chosenFont = font; 
    
    SSD1306_Init(0);
    SSD1306_clear();
    
 //   SSD1306_drawText(1, 1, "Н");
    
    char toPrint[] = "ТИШЕРПИ";
//    toPrint[6] = '\0';
    
    SSD1306_drawText(1, 1, "СРЕЋАН", chosenFont);
    
    SSD1306_drawText(1, 3, "ТИШЕРПИ", chosenFont);
    SSD1306_drawText(1, 5, "ОЂДЂ", chosenFont);

    
    
// Arabic chars testing    
/*
    char toPrint[6];
    toPrint[0] = 0xD8;
    toPrint[1] = 0xA8;
    toPrint[2] = 0xD8;
    toPrint[3] = 0xA8;
    toPrint[4] = 0x00;
    toPrint[5] = 0x00;
//    SSD1306_drawArabicText(0,3, toPrint);


//    writeArabicChar(0x08, 0xA7);

*/
    TURN_DISPLAY_ON();
    
    
    TRISA = 0x00;
//    TRISB = 0x00;
//    PORTB = 0x01;

    while(1)
    {
//        PORTB = 0x01;
        __delay_ms(1000);
//        PORTB = 0x00;
        __delay_ms(1000);
    }
    return;
}