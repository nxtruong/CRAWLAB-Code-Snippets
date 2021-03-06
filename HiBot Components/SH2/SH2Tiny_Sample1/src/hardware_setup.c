/***********************************************************************/
/*  													               */
/*      PROJECT NAME :  SH2Tiny_Sample1EclipseV3                       */
/*      FILE         :  hardware_setup.c                               */
/*      DESCRIPTION  :  Hardware Initialization                        */
/*      CPU SERIES   :  SH2                                            */
/*      CPU TYPE     :  SH7047                                         */
/*  													               */
/*      This file is generated by KPIT Eclipse.                        */
/*  													               */
/***********************************************************************/                                                                        




#include "iodefine.h"
#ifdef __cplusplus
extern "C" {
#endif
extern void HardwareSetup(void);
#ifdef __cplusplus
}
#endif

void HardwareSetup(void)
{
	// TODO: add hardware initialization code here

	//NB: For this particular sample code only the necessary ports
	//have been set. Please refer to the SH27047 Renesas Hardware
	//manual for details and for other registers and modules settings

	//IO PORT REGISTERS
	PFC.PDCRL1.WORD = 0x0000;	//	0000 0000 0000 0000
	PFC.PDCRL2.WORD = 0x0000;	//	0000 0000 0000 0000
	PFC.PDIORL.WORD = 0x00ff;	//	0000 0000 1111 1111

	PFC.PECRH.WORD	= 0x0000; /* 0000 0000 0000 0000 */
	PFC.PECRL1.WORD = 0x0000; /* 0000 0000 0000 0000 */
	PFC.PECRL2.WORD = 0x0000; /* 0000 0000 0000 0000 */
 	PFC.PEIORH.WORD = 0x003F; /* 0000 0000 0011 1111 */
    PFC.PEIORL.WORD = 0xFFFF; /* 1111 1111 1111 1111 */


//	// TODO: add hardware initialization code here
//	//NB: For this particular sample code only the necessary ports
//	//have been set. Please refer to the SH27047 Renesas Hardware
//	//manual for details and for other registers and modules settings
//
//	//Module stand by mode
//	MST.CR2.BIT._CMT=0; //Clear the stand by mode for the Timer CTM1 and CMT0
//						//the modules has been cleared individually.
//						//User can set all modules' stand by setting the
//						//register MST.CR1 and MST.CR2
//
//	MST.CR2.BIT._HCAN2=0; //Clear the stand by mode for the HCAN module
//	MST.CR2.BIT._AD0=0;	//Clear the stand by mode for AD converter 0
//	MST.CR2.BIT._AD1=0; //Clear the stand by mode for AD converter 1
// 	MST.CR2.BIT._MTU=0; //Clear the stand by mode for the MTU module
//	MST.CR1.BIT._SCI3=0; //Clear the stand by mode for the SCI3 module
//
//  	//PORT A settings (includes the ENC port)
//	PFC.PACRL1.WORD = 0x0005;	/*	0000 0000 0000 0101	*/
//	PFC.PACRL2.WORD = 0x5a80;	/*  0101 1010 1000 0000 */
//	PFC.PACRL3.WORD = 0x0038;	/*	0000 0000 0011 1000 */
//	PFC.PAIORL.WORD = 0xfc16;	/*	1111 1100 0001 0110	*/
//
//	//PORT B SETTINGS
//	//IRQ0 and IRQ1 are set as Digital output to be used for the display E and RS
//	PFC.PBCR1.WORD = 0x0000;	/* 0000 0000 0000 0000 */
//	PFC.PBCR2.WORD = 0x0D0F;	/* 0000 1101 0000 1111 */
//	PFC.PBIOR.WORD = 0x000D;	/* 0000 0000 0000 1101 */
//
//	//PORT D SETTINGS
////    PFC.PDCRL1.WORD = 0x0000;
////    PFC.PDCRL2.WORD = 0x0000;
////    PFC.PDIORL.WORD = 0x01ff;
//
//  	// PWM and LEDs pin settings
//	PFC.PECRL1.WORD = 0x0000; // first of all set them to zero (general I/O)
// 	PFC.PECRL2.WORD = 0x0000;
//	PFC.PECRH.WORD = 0x0000;
// 	PFC.PEIORH.WORD = 0x003F; // set the pins PE21-PE16 as outputs
//    PFC.PEIORL.WORD = 0xFFFF; // set the pins PE15-PE0 as outputs
}
