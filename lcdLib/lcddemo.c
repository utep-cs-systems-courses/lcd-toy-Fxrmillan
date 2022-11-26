/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

  //  drawString5x7(20,20, "Ape", COLOR_GREEN, COLOR_RED);

  // fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  int col =40, row =40;
  for(int i =0;i<20;i++)
    for(int j=0;j<i;j++){
      drawPixel(col+i ,row+j , COLOR_BLACK);
      drawPixel(col+i,row-j,COLOR_RED);
    }
  col+=40;  
  for(int i=20;i>0;i--)
    for(int j=0;j<i;j++){
      drawPixel(col-i,row-j,COLOR_GREEN);
      drawPixel(col-i,row+j,COLOR_GREEN);
    }
  
}
