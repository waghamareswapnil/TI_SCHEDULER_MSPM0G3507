/****************************************************************************
[C O P Y R I G H T   I N F O R M A T I O N]
 * COMPANY               : XYZ.
 * FILE NAME             : Task.c
 * AUTHOR                : SWAPNIL S. WAGHAMARE
 * CURRENT VERSION       : V1.00.00
 *                         (VERSION IS MAINTAINED AS MAJOR.MINOR.PATCH - REFER
 *                         VERSION CONTROL DOCUMENT FOR FURTHER DETAILS)
 * DATE                  : 01-AUG-2026
 * OPERATING ENVIRONMENT : C
 * DESCRIPTION           : This file contains the periodic task functions
 *                         invoked by the cooperative scheduler at fixed
 *                         time intervals.
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
#include "Task.h"
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
 * <FUNCTION NAME>       : Task1ms
 * <DESCRIPTION>         : Periodic task executed every 1ms by the
 *                         cooperative scheduler. Add 1ms-rate application
 *                         logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 1ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                         application logic. Must complete execution
 *                         within the 1ms period budget.
 ****************************************************************************/
void Task1ms(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task5ms
 * <DESCRIPTION>         : Periodic task executed every 5ms by the
 *                         cooperative scheduler. Add 5ms-rate application
 *                         logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 5ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                         application logic. Must complete execution
 *                         within the 5ms period budget.
 ****************************************************************************/
void Task5ms(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task10ms
 * <DESCRIPTION>         : Periodic task executed every 10ms by the
 *                          cooperative scheduler. Add 10ms-rate application
 *                          logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 10ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                          application logic. Must complete execution
 *                          within the 10ms period budget.
 ****************************************************************************/
void Task10ms(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task20ms
 * <DESCRIPTION>         : Periodic task executed every 20ms by the
 *                          cooperative scheduler. Add 20ms-rate application
 *                          logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 20ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                          application logic. Must complete execution
 *                          within the 20ms period budget.
 ****************************************************************************/
void Task20ms(void)
{
    /* Application Logic */
    DL_GPIO_togglePins(GPIO_TEST_PORT, GPIO_TEST_USER_TEST_PIN);
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task50ms
 * <DESCRIPTION>         : Periodic task executed every 50ms by the
 *                          cooperative scheduler. Add 50ms-rate application
 *                          logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 50ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                          application logic. Must complete execution
 *                          within the 50ms period budget.
 ****************************************************************************/
void Task50ms(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task100ms
 * <DESCRIPTION>         : Periodic task executed every 100ms by the
 *                          cooperative scheduler. Add 100ms-rate application
 *                          logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 100ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                          application logic. Must complete execution
 *                          within the 100ms period budget.
 ****************************************************************************/
void Task100ms(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task500ms
 * <DESCRIPTION>         : Periodic task executed every 500ms by the
 *                          cooperative scheduler. Add 500ms-rate application
 *                          logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 500ms by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                          application logic. Must complete execution
 *                          within the 500ms period budget.
 ****************************************************************************/
void Task500ms(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[F U N C T I O N  D E F I N I T I O N]
 *****************************************************************************
 * <FUNCTION NAME>       : Task1s
 * <DESCRIPTION>         : Periodic task executed every 1s (1000ms) by the
 *                          cooperative scheduler. Add 1s-rate application
 *                          logic here.
 * <PASSING ARGUMENTS>   : None (void)
 * <RETURN TYPE>         : void
 * <CALLED BY>           : Scheduler()
 * <CALLING TO>          : None
 * <EVENT OF CALLING>    : Invoked every 1000ms (1s) by Scheduler()
 * <CAUTION>             : Task body currently empty - populate with
 *                          application logic. Must complete execution
 *                          within the 1s period budget.
 ****************************************************************************/
void Task1s(void)
{
    /* Application Logic */
}

/************************* END OF FUNCTION DEFINITION **********************/

/****************************************************************************
[C H A N G E  H I S T O R Y]
 *****************************************************************************
 * VERSION      DATE                AUTHOR                  DESCRIPTION
 * V1.00.00     01-AUG-2026         SWAPNIL WAGHAMARE       INITIAL VERSION
 *****************************************************************************
 *************************** END OF CHANGE HISTORY **************************/
