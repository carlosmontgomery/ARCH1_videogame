/** \file lcddemo.c
 *  \brief A simple demo that draws a string and circle
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include <stdio.h>

/** Initializes everything, clears the screen, draws "hello" and the circle */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLACK);
  draw_square(0,40,COLOR_BLUE);
  // draw_triangle(0,0,80,COLOR_GOLD);
   
  
  // drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
void draw_asterisk(int x, int y, int color){
   for(int i = 0; i< 80;i++){
     drawPixel(i,i,COLOR_GOLD);}
   for(int j = 0; j<80;j++){
     drawPixel(j,40,COLOR_GOLD);
     }  
}

void draw_square(int col, int row, int color){ // Draws a square that is filled.
   for(int i = 80; i > 0;i--)
    for(int j = 0; j < 80; j++)
      drawPixel(i,j,color);
}

void draw_triangle(int col, int row, int size, int color){ //Draw a right triangle size of 80 pixels. Color: COLOR_GOLD.
    for(int i = col; i < size;i++)
      for(int j = row; j < (i+1); j++)
	drawPixel(j,i,color);

}

