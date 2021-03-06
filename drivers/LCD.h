#ifndef LCD_H
#define	LCD_H

#include "LCD.h"

#include <stdbool.h>
#include <stdint.h>

// Imported API
void RawComm_LCD_Send(bool is_data, bool do_read, uint64_t delay, uint16_t payload);

// Exported API
typedef enum lcd_display_mode_t {
  LCD_DISPLAY_BLINK_CURSOR = 0x07,
  LCD_DISPLAY_WITH_CURSOR = 0x06,
  LCD_DISPLAY_NO_CURSOR = 0x04,
  LCD_DISPLAY_OFF = 0x00,
} lcd_display_mode_t;

typedef enum lcd_cursor_direction_t {
  LCD_CURSOR_RIGHT = 0x02,
  LCD_CURSOR_LEFT = 0x00,
} lcd_cursor_direction_t;

typedef enum lcd_shift_display_t {
  LCD_SHIFT_DISPLAY_ON = 0x01,
  LCD_SHIFT_DISPLAY_OFF = 0x00,
} lcd_shift_display_t;

void LCD_Init(lcd_display_mode_t mode, lcd_cursor_direction_t cursor_direction, lcd_shift_display_t shift_display);
void LCD_Function_Set();
void LCD_Display_Mode(lcd_display_mode_t mode);
void LCD_Display_Clear();
void LCD_Draw_Mode(lcd_cursor_direction_t cursor_direction, lcd_shift_display_t shift_display);
void LCD_PutChar(char const ch);

void LCD_PutString(const char* const str);

#endif	/* LCD_H */

