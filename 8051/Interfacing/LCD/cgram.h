/*code unsigned char cgram_lut[]={0x1f,0x11,0x11,0x11,0x11,0x11,0x11,0x1f,
								0x1f,0x11,0x11,0x11,0x11,0x11,0xff,0xff,
								0x1f,0x11,0x11,0x11,0xff,0xff,0xff,0xff,
								0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};
*/
code unsigned char cgram_lut[]={0x1e,0x0f,0x07,0x03,0x03,0x07,0x0f,0x1e,
								0x06,0x0f,0x1f,0x03,0x03,0x1f,0x0f,0x06};
								

 void build_cgram()
 {
 char i;
 lcd_cmd(0x40);

 for(i=0;i<16;i++)
 	lcd_data(cgram_lut[i]);

	lcd_cmd(0x80);
 }
