/****************************************************************************
[C O P Y R I G H T   I N F O R M A T I O N]
* COMPANY               : XYZ.
* FILE NAME             : Task.h
* AUTHOR                : SWAPNIL S. WAGHAMARE
* CURRENT VERSION       : V1.00.00
*                         (VERSION IS MAINTAINED AS MAJOR.MINOR.PATCH - REFER
*                         VERSION CONTROL DOCUMENT FOR FURTHER DETAILS)
* DATE                  : 01-AUG-2026
* OPERATING ENVIRONMENT : C
* DESCRIPTION           : This file contains the interface (function
*                         prototypes) for the periodic task functions
*                         invoked by the cooperative scheduler.
* CAUTION NOTE          : NA
*
* THIS FILE/CODE CONTAINS INFORMATION THAT IS PROPRIETARY TO VARROC ENGINEERING
* LTD. NO PART OF THIS DOCUMENT/CODE MAY BE REPRODUCED OR USED IN WHOLE OR PART
* IN ANY FORM OR BY ANY MEANS - GRAPHIC, ELECTRONIC OR MECHANICAL WITHOUT THE
* WRITTEN PERMISSION OF VARROC ENGINEERING LTD.
*****************************************************************************
*************************** END OF FILE INFO ******************************/

#ifndef TASK_H
#define TASK_H

/****************************************************************************
[I N C L U D E  F I L E S]
****************************************************************************/
#include "ti_msp_dl_config.h"
/*************************** END OF INCLUDE FILES **************************/

/****************************************************************************
[M A C R O S]
****************************************************************************/
/*************************** END OF MACROS *********************************/

/****************************************************************************
[T Y P E  D E F I N I T I O N]
****************************************************************************/
/************************** END OF TYPE DEFINITION *************************/

/****************************************************************************
[V A R I A B L E  D E F I N I T I O N]
****************************************************************************/
/********************** END OF GLOBAL VARIABLE DEFINITION ******************/

/****************************************************************************
[C O N S T A N T  V A R I A B L E   D E F I N I T I O N]
****************************************************************************/
/********************** END OF CONST. VARIABLE DEFINITION ******************/

/****************************************************************************
[E X T E R N  D E C L A R A T I O N]
****************************************************************************/
/************************* END OF EXTERN  DECLARATION **********************/

/****************************************************************************
[E N U M E R A T O R S]
****************************************************************************/
/************************ END OF ENUMERATORS *******************************/

/****************************************************************************
[F U N C T I O N  P R O T O T Y P E S]
****************************************************************************/
void Task1ms(void);
void Task5ms(void);
void Task10ms(void);
void Task20ms(void);
void Task50ms(void);
void Task100ms(void);
void Task500ms(void);
void Task1s(void);
/************************* END OF FUNCTION PROTOTYPE ***********************/

#endif /* TASK_H */

/****************************************************************************
[C H A N G E  H I S T O R Y]
*****************************************************************************
* VERSION      DATE                AUTHOR                  DESCRIPTION
* V1.00.00     01-AUG-2026         SWAPNIL WAGHAMARE        INITIAL VERSION
*****************************************************************************
*************************** END OF CHANGE HISTORY **************************/
