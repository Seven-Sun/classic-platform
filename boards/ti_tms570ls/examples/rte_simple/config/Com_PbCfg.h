/*
* Configuration of module: Com (Com_PbCfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    TMS570
*
* Module vendor:           ArcCore
* Generator version:       2.0.5
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Thu Jun 16 18:30:20 CEST 2011
*/


#if !(((COM_SW_MAJOR_VERSION == 1) && (COM_SW_MINOR_VERSION == 2)) )
#error Com: Configuration file expected BSW module version to be 1.2.*
#endif

#ifndef COM_PBCFG_H
#define COM_PBCFG_H

#include "Com_Types.h"

extern const Com_ConfigType ComConfiguration;

//  COM Polite Defines.
#define COM_PDU_ID_RX_PDU		0
#define COM_PDU_ID_TX_PDU		1



// PDU group definitions
#define ComPduGroup 0


// Signal definitions
#define Arg1 0
#define Result 1
#define Arg2 2



// Notifications



// Callouts


#endif /* COM_PBCFG_H */
