#ifndef __PRE_PWM_IRQ_H__
#define __PRE_PWM_IRQ_H__

#define PRE_PWM_NUM_IRQS 9

typedef enum
{
  PRE_PWM_IRQ_BPS0_EVT = 0,
  PRE_PWM_IRQ_BPS1_EVT = 1,
  PRE_PWM_IRQ_U_RELOAD_EVT = 2,
  PRE_PWM_IRQ_V_RELOAD_EVT = 3,
  PRE_PWM_IRQ_W_RELOAD_EVT = 4,
  PRE_PWM_IRQ_RELOAD_ERROR_EVT = 5,
  PRE_PWM_IRQ_U_DMA_RDY = 6,
  PRE_PWM_IRQ_V_DMA_RDY = 7,
  PRE_PWM_IRQ_W_DMA_RDY = 8
} pre_pwm_irq_t;

#endif
