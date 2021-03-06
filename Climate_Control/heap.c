/***********************************************************************/
/*                                                                     */
/*  FILE        :heap.c                                                */
/*  DATE        :Mon, Jul 28, 2014                                     */
/*  DESCRIPTION :define the size of heap.                              */
/*  CPU GROUP   :23                                                    */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.8).     */
/*                                                                     */
/***********************************************************************/

/***********************************************************
 *  COMPILER for R8C/Tiny
 *  Copyright(c) 2004 Renesas Technology Corp.
 *  And Renesas Solutions Corp.,All Rights Reserved. 
 *
 * heap.c
 *
 * allocate heap area
 *
 * $Date: 2006/06/13 10:45:18 $
 * $Revision: 1.4 $
 **********************************************************/
#include "typedefine.h"
#include "cstartdef.h"

#if __HEAPSIZE__ != 0
#pragma SECTION	bss	heap

_UBYTE heap_area[__HEAPSIZE__];
#endif
