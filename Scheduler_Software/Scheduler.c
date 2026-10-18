/****************************************************************************
[C O P Y R I G H T   I N F O R M A T I O N]
* COMPANY               : XYZ.
* FILE NAME             : Scheduler.c
* AUTHOR                : SWAPNIL S. WAGHAMARE
* CURRENT VERSION       : V1.00.00
*                         (VERSION IS MAINTAINED AS MAJOR.MINOR.PATCH - REFER
*                         VERSION CONTROL DOCUMENT FOR FURTHER DETAILS)
* DATE                  : 01-AUG-2026
* OPERATING ENVIRONMENT : C
* DESCRIPTION           : This file contains functions to perform on
*                         Ignition ON detection.
* CAUTION NOTE          : NA
*
* THIS FILE/CODE CONTAINS INFORMATION THAT IS PROPRIETARY TO VARROC ENGINEERING
* LTD. NO PART OF THIS DOCUMENT/CODE MAY BE REPRODUCED OR USED IN WHOLE OR PART
* IN ANY FORM OR BY ANY MEANS - GRAPHIC, ELECTRONIC OR MECHANICAL WITHOUT THE
* WRITTEN PERMISSION OF VARROC ENGINEERING LTD.
*****************************************************************************
*************************** END OF FILE INFO ******************************/

/****************************************************************************
[I N C L U D E  F I L E S]
****************************************************************************/
#include "Scheduler.h"
/*************************** END OF INCLUDE FILES **************************/

/****************************************************************************
[M A C R O S]
****************************************************************************/
/*************************** END OF MACROS *********************************/

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
static volatile uint8_t gSchedulerTick = SCHEDULER_TICK_CLEAR;
/********************** END OF STATIC VARIABLE DEFINITION ******************/

/****************************************************************************
[T Y P E  D E F I N I T I O N]
****************************************************************************/
/************************** END OF TYPE DEFINITION *************************/

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
/************************* END OF FUNCTION PROTOTYPE ***********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
*****************************************************************************
* <FUNCTION NAME>       : SchedulerTickISR
* <DESCRIPTION>         : Interrupt service routine invoked on every
*                         scheduler tick timer interrupt (e.g. 1ms hardware
*                         timer overflow). Sets the schedulerTick flag to
*                         signal the main scheduler loop that a new tick
*                         has elapsed.
* <PASSING ARGUMENTS>   : None (void)
* <RETURN TYPE>         : void
* <CALLED BY>           : Timer interrupt vector (scheduler tick timer ISR)
* <CALLING TO>          : None
* <EVENT OF CALLING>    : Triggered periodically by hardware timer interrupt
*                         (e.g. every 1ms)
* <CAUTION>             : Executes in interrupt context - keep processing
*                         minimal. schedulerTick is declared volatile to
*                         ensure correct visibility between ISR and main
*                         loop context.
****************************************************************************/
void SchedulerTickISR(void)
{
    gSchedulerTick = SCHEDULER_TICK_SET;
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
*****************************************************************************
* <FUNCTION NAME>       : Scheduler
* <DESCRIPTION>         : Time-triggered cooperative scheduler main loop.
*                         Waits for the tick flag set by SchedulerTickISR,
*                         then dispatches periodic tasks (1ms, 5ms, 10ms,
*                         20ms, 50ms, 100ms, 500ms, 1s) based on an
*                         internal millisecond counter.
* <PASSING ARGUMENTS>   : None (void)
* <RETURN TYPE>         : void (does not return - runs an infinite loop)
* <CALLED BY>           : main()
* <CALLING TO>          : task_1ms(), task_5ms(), task_10ms(), task_20ms(),
*                         task_50ms(), task_100ms(), task_500ms(), task_1s()
* <EVENT OF CALLING>    : Called once from main() after system and
*                         peripheral initialisation; runs for the lifetime
*                         of the application
* <CAUTION>             : Contains an infinite loop and never returns.
*                         Each task function must complete within its
*                         period budget to avoid task overrun/drift.
****************************************************************************/
void Scheduler(void)
{
  static uint16_t MsCounter = SCHEDULER_MS_COUNTER_RESET;

  while (1)
  {
    if (gSchedulerTick == SCHEDULER_TICK_SET)
    {
        gSchedulerTick = SCHEDULER_TICK_CLEAR;

      Task1ms();

      MsCounter++;

      if ((MsCounter % SCHEDULER_PERIOD_5MS) == SCHEDULER_MS_COUNTER_RESET)
      {
        Task5ms();
      }

      if ((MsCounter % SCHEDULER_PERIOD_10MS) == SCHEDULER_MS_COUNTER_RESET)
      {
        Task10ms();
      }

      if ((MsCounter % SCHEDULER_PERIOD_20MS) == SCHEDULER_MS_COUNTER_RESET)
      {
        Task20ms();
      }

      if ((MsCounter % SCHEDULER_PERIOD_50MS) == SCHEDULER_MS_COUNTER_RESET)
      {
        Task50ms();
      }

      if ((MsCounter % SCHEDULER_PERIOD_100MS) == SCHEDULER_MS_COUNTER_RESET)
      {
        Task100ms();
      }

      if ((MsCounter % SCHEDULER_PERIOD_500MS) == SCHEDULER_MS_COUNTER_RESET)
      {
        Task500ms();
      }

      if (MsCounter >= SCHEDULER_PERIOD_1000MS)
      {
          MsCounter = SCHEDULER_MS_COUNTER_RESET;
        Task1s();
      }
    }
  }
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[C H A N G E  H I S T O R Y]
*****************************************************************************
* VERSION      DATE                AUTHOR                  DESCRIPTION
* V1.00.00     01-AUG-2026         SWAPNIL WAGHAMARE       INITIAL VERSION
*****************************************************************************
*************************** END OF CHANGE HISTORY **************************/
