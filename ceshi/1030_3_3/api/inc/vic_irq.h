#ifndef __VIC_IRQ_H__
#define __VIC_IRQ_H__

#define VIC_NUM_IRQS 17

typedef enum
{
  VIC_IRQ_MEM_PROT = 0,
  VIC_IRQ_SYS_STATE = 1,
  VIC_IRQ_WDOG = 2,
  VIC_IRQ_DIVIDER = 3,
  VIC_IRQ_ADC_CTRL = 4,
  VIC_IRQ_PWMN = 5,
  VIC_IRQ_PRE_PWM = 6,
  VIC_IRQ_SPI_0 = 7,
  VIC_IRQ_SPI_1 = 8,
  VIC_IRQ_SCI = 9,
  VIC_IRQ_CCTIMER_0 = 10,
  VIC_IRQ_CCTIMER_1 = 11,
  VIC_IRQ_CCTIMER_2 = 12,
  VIC_IRQ_CCTIMER_3 = 13,
  VIC_IRQ_GPIO_A = 14,
  VIC_IRQ_GPIO_B = 15,
  VIC_IRQ_GPIO_C = 16
} vic_irq_t;

#endif
