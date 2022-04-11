/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1649421776_1_
#define _BUR_1649421776_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL struct DRIVE EVRID;
_GLOBAL unsigned char counter;
_GLOBAL plcbit button5;
_GLOBAL plcbit button4;
_GLOBAL plcbit button3;
_GLOBAL plcbit button2;
_GLOBAL plcbit button1;
_GLOBAL plcbit LED[4];
_GLOBAL plcbit gAxis01_ModuleOk;
_GLOBAL struct SdcDiDoIf_typ gAxis01_DiDoIf;
_GLOBAL struct SdcDrvIf16_typ gAxis01_DrvIf;
_GLOBAL struct SdcHwCfg_typ gAxis01_HW;
_GLOBAL struct ACP10AXIS_typ gAxis01;
_GLOBAL signed short speed;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Library/Library.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1649421776_1_ */

