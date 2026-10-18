/****************************************************************************
[C O P Y R I G H T   I N F O R M A T I O N]
* COMPANY               : XYZ.
* FILE NAME             : Scheduler.h
* AUTHOR                : SWAPNIL S. WAGHAMARE
* CURRENT VERSION       : V1.00.00
*                         (VERSION IS MAINTAINED AS MAJOR.MINOR.PATCH - REFER
*                         VERSION CONTROL DOCUMENT FOR FURTHER DETAILS)
* DATE                  : 31-JAN-2026
* OPERATING ENVIRONMENT : C
* DESCRIPTION           : This file contains the interface (macros, types,
*                         and function prototypes) for the time-triggered
*                         cooperative scheduler module.
* CAUTION NOTE          : NA
*
* THIS FILE/CODE CONTAINS INFORMATION THAT IS PROPRIETARY TO VARROC ENGINEERING
* LTD. NO PART OF THIS DOCUMENT/CODE MAY BE REPRODUCED OR USED IN WHOLE OR PART
* IN ANY FORM OR BY ANY MEANS - GRAPHIC, ELECTRONIC OR MECHANICAL WITHOUT THE
* WRITTEN PERMISSION OF VARROC ENGINEERING LTD.
*****************************************************************************
*************************** END OF FILE INFO ******************************/

#ifndef SCHEDULER_H
#define SCHEDULER_H

/****************************************************************************
[I N C L U D E  F I L E S]
****************************************************************************/
#include "ti_msp_dl_config.h"
#include "Task.h"
/*************************** END OF INCLUDE FILES **************************/

/****************************************************************************
[M A C R O S]
****************************************************************************/
/* Scheduler tick flag states */
#define SCHEDULER_TICK_CLEAR    (0U)
#define SCHEDULER_TICK_SET      (1U)

/* Scheduler millisecond counter reset value */
#define SCHEDULER_MS_COUNTER_RESET (0U)

/* Scheduler tick period definitions (in ms) */
#define SCHEDULER_PERIOD_1MS    (1U)
#define SCHEDULER_PERIOD_5MS    (5U)
#define SCHEDULER_PERIOD_10MS   (10U)
#define SCHEDULER_PERIOD_20MS   (20U)
#define SCHEDULER_PERIOD_50MS   (50U)
#define SCHEDULER_PERIOD_100MS  (100U)
#define SCHEDULER_PERIOD_500MS  (500U)
#define SCHEDULER_PERIOD_1000MS (1000U)
/*************************** END OF MACROS *********************************/

/****************************************************************************
[T Y P E  D E F I N I T I O N]
****************************************************************************/
/*************************** END OF TYPE DEFINITION *************************/

/****************************************************************************
[V A R I A B L E  D E F I N I T I O N]
****************************************************************************/
/********************** END OF GLOBAL VARIABLE DEFINITION ******************/

/****************************************************************************
[C O N S T A N T  V A R I A B L E   D E F I N I T I O N]
****************************************************************************/
/********************** END OF CONST. VARIABLE DEFINITION ******************/

/****************************************************************************
[S T A T I C  V A R I A B L E   D E F I N I T I O N]
****************************************************************************/
/********************** END OF STATIC VARIABLE DEFINITION ******************/

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
void SchedulerTickISR(void);
void Scheduler(void);
/************************* END OF FUNCTION PROTOTYPE ***********************/

#endif /* SCHEDULER_H */

/****************************************************************************
[C H A N G E  H I S T O R Y]
*****************************************************************************
* VERSION      DATE                AUTHOR                  DESCRIPTION
* V1.00.00     31-JAN-2026         SWAPNIL WAGHAMARE       INITIAL VERSION
*****************************************************************************
*************************** END OF CHANGE HISTORY **************************/
