#ifndef __SYS_STATE_IRQ_H__
#define __SYS_STATE_IRQ_H__

#define SYS_STATE_NUM_IRQS 9

typedef enum
{
  SYS_STATE_IRQ_WATCHDOG = 0,
  SYS_STATE_IRQ_SW_RESET = 1,
  SYS_STATE_IRQ_CPU_PARITY = 2,
  SYS_STATE_IRQ_SRAM_PARITY = 3,
  SYS_STATE_IRQ_FLASH_2BIT_ERR = 4,
  SYS_STATE_IRQ_FLASH_1BIT_ERR = 5,
  SYS_STATE_IRQ_SRAM_WR_PROT = 6,
  SYS_STATE_IRQ_STACK_PROT = 7,
  SYS_STATE_IRQ_EXEC_PROT = 8
} sys_state_irq_t;

#endif
