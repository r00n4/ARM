/*----------------------------------------------------------------------------
 *      Name:    MEMORY.C
 *      Purpose: USB Mass Storage Demo
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This file is part of the uVision/ARM development tools.
 *      This software may only be used under the terms of a valid, current,
 *      end user licence from KEIL for a compatible version of KEIL software
 *      development tools. Nothing else gives you the right to this software.
 *
 *      Copyright (c) 2005-2007 Keil Software.
 *---------------------------------------------------------------------------*/

#include <stm32f10x_lib.h>                           // stm32f10x definitions

#include "type.h"

#include "STM32_Init.h"                              // stm32 initialisation
#include "LCD.h"
#include "usb.h"
#include "usbcfg.h"
#include "usbhw.h"
#include "usbcore.h"
#include "mscuser.h"

#include "memory.h"


extern BYTE Memory[MSC_MemorySize];                  // MSC Memory in RAM


/* Main Program */

int main (void) {
  DWORD n;

  for (n = 0; n < MSC_ImageSize; n++) {              // Copy Initial Disk Image
    Memory[n] = DiskImage[n];                        //   from Flash to RAM
  }

  stm32_Init ();                                     // STM32 Initialization

  lcd_init();                                        // LCD Initialization
  lcd_clear();
  lcd_print ("  MCBSTM32 MSD  ");
  set_cursor (0, 1);
  lcd_print ("  www.keil.com  ");

  USB_Init();                                        // USB Initialization
  USB_Connect(TRUE);                                 // USB Connect

  while (1) {                                        // Loop forever
    ;
  } // end while
} // end main
