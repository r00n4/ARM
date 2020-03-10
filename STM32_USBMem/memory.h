/*----------------------------------------------------------------------------
 *      Name:    MEMORY.H
 *      Purpose: USB Memory Storage Demo Definitions
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This file is part of the uVision/ARM development tools.
 *      This software may only be used under the terms of a valid, current,
 *      end user licence from KEIL for a compatible version of KEIL software
 *      development tools. Nothing else gives you the right to use it.
 *
 *      Copyright (c) 2005-2007 Keil Software.
 *---------------------------------------------------------------------------*/

/* LED Definitions */
#define LED_MSK         0x0000FF00  /* PB8..15 */
#define LED_RD          0x00000100  /* PB8 */
#define LED_WR          0x00000200  /* PB9 */
#define LED_CFG         0x00000400  /* PB10 */
#define LED_SUSP        0x00000800  /* PB11 */

/* MSC Disk Image Definitions */
#define MSC_ImageSize   0x00001000

extern const unsigned char DiskImage[MSC_ImageSize];   /* Disk Image */
