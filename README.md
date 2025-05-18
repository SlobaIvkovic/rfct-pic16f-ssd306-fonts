# rfct-pic16f-ssd306-fonts
Using PIC16F76 and 128*64 OLED display to print various Fonts mostly Cyrillic

PIC MCUs have really limited RAM memory so it is virtually imposible to buffer screens in RAM before displaying it. One possible solution for this problem is to store screen contents in FLASH as constant data and then route that data to the screen.
In this case I'm storing fonts as a constant matrix, cyrillic fonts more precisely, then I can use UTF8 codes to represent desired text in code or more conviniently I set up MPLABx IDE to accept UTF8 encoding, this is easily done in MPLABx settings,
further on it is possible to input UTF8 cyrillic strings directly in code editor. I used I2C software implementation from here https://github.com/ddavidebor/PicLib/blob/master/I2C/i2c.h, and this guy https://github.com/kiwih/pic16f877a-ssd1306-oled/blob/master/ssd1306_unbuffered.h inspired me to write my own PIC16F OLED driver.  
