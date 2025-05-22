#ifndef SSD1306_H
#define SSD1306_H

#include <stdint.h>

#define OLED_ADDR 0x78
#define TURN_DISPLAY_ON()  SSD1306_cmd(0xAF);
#define TURN_DISPLAY_OFF() SSD1306_cmd(0xAE);

#define SSD1306_cmd(a) SSD1306_command(a, OLED_ADDR)


void SSD1306_command(uint8_t c, uint8_t address);
void SSD1306_Init(uint8_t vccstate);
void SSD1306_clear();
void SSD1306_drawText(uint8_t x, uint8_t y, char* text, const char* font);
void SSD1306_printText(uint8_t x, uint8_t y, char* text, const unsigned char* font, unsigned char offset);
void setXY(uint8_t x, uint8_t y);

void writeArabicChar(int width, int numInFont);
void SSD1306_drawArabicText(uint8_t x, uint8_t y, char* text);

#endif