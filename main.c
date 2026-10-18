#include "ti_msp_dl_config.h"
#include "Scheduler.h"

int main(void)
{
    SYSCFG_DL_init();

    /* Enable TimerG interrupts on device */
    NVIC_EnableIRQ(TIMER_0_INST_INT_IRQN);

    /* Halt TIMER_0 along with CPU during debug halts, so the timer doesn't
     * drift ahead and trigger a false WWDT timeout while sitting at a
     * breakpoint. No effect on normal runtime operation. */
    DL_Timer_setCoreHaltBehavior(TIMER_0_INST, DL_TIMER_CORE_HALT_IMMEDIATE);

    /* Start TimerG counter */
    DL_TimerG_startCounter(TIMER_0_INST);

    /* Runs forever: dispatches tasks each 1ms tick */
    Scheduler();
}

void TIMER_0_INST_IRQHandler(void)
{
    switch (DL_TimerG_getPendingInterrupt(TIMER_0_INST))
    {
    case DL_TIMER_IIDX_ZERO:
        /* 1ms tick elapsed - just signal scheduler */
        SchedulerTickISR();
        break;
    default:
        break;
    }
}
