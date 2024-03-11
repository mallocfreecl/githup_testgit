/**
 ****************************************************************************************************
 * @file        dac.c
 * @author      ����ԭ���Ŷ�(ALIENTEK)
 * @version     V1.0
 * @date        2020-04-24
 * @brief       DAC ��������
 * @license     Copyright (c) 2020-2032, �������������ӿƼ����޹�˾
 ****************************************************************************************************
 * @attention
 *
 * ʵ��ƽ̨:����ԭ�� STM32F103������
 * ������Ƶ:www.yuanzige.com
 * ������̳:www.openedv.com
 * ��˾��ַ:www.alientek.com
 * �����ַ:openedv.taobao.com
 *
 * �޸�˵��
 * V1.0 20200424
 * ��һ�η���
 *
 ****************************************************************************************************
 */

#include "./BSP/DAC/dac.h"
#include "./SYSTEM/delay/delay.h"

//ʹ��DAC������ͨ��

DAC_HandleTypeDef g_dac_handle;         /* DAC��� */
/**
 * @brief       DAC��ʼ������
 *   @note      ������֧��DAC1_OUT1/2ͨ����ʼ��
 *              DAC������ʱ������APB1, ʱ��Ƶ��=36Mhz=27.8ns
 *              DAC�����buffer�رյ�ʱ��, �������ʱ��: tSETTLING = 4us (F103�����ֲ���д)
 *              ���DAC���������ٶ�ԼΪ:250Khz, ��10����Ϊһ������, ��������25Khz���ҵĲ���
 *
 * @param       ��
 * @retval      ��
 */
void dac_init(void)//dac1����ͨ����ʼ��
{
    GPIO_InitTypeDef gpio_init_struct;
    DAC_ChannelConfTypeDef dac_ch_conf;
    
    __HAL_RCC_DAC_CLK_ENABLE();                                 /* ʹ��DAC1��ʱ�� */
    __HAL_RCC_GPIOA_CLK_ENABLE();                               /* ʹ��DAC OUT1/2��IO��ʱ��(����PA��,PA4/PA5) */
    
    gpio_init_struct.Pin = GPIO_PIN_4|GPIO_PIN_5;               /* STM32��Ƭ��, ����PA4=DAC1_OUT1, PA5=DAC1_OUT2 */
    gpio_init_struct.Mode = GPIO_MODE_ANALOG;
    HAL_GPIO_Init(GPIOA, &gpio_init_struct);

    g_dac_handle.Instance = DAC;
    HAL_DAC_Init(&g_dac_handle);                                /* ��ʼ��DAC */


    dac_ch_conf.DAC_Trigger = DAC_TRIGGER_NONE;                 /* ��ʹ�ô������� */
    dac_ch_conf.DAC_OutputBuffer = DAC_OUTPUTBUFFER_DISABLE;    /* DAC1�������ر� */
    HAL_DAC_ConfigChannel(&g_dac_handle, &dac_ch_conf, DAC_CHANNEL_1);  /* ����DACͨ��1 */                             
    HAL_DAC_ConfigChannel(&g_dac_handle, &dac_ch_conf, DAC_CHANNEL_2);  /* ����DACͨ��2 */
		
    HAL_DAC_Start(&g_dac_handle,DAC_CHANNEL_1);                         /* ����DACͨ��1 */
	HAL_DAC_Start(&g_dac_handle,DAC_CHANNEL_2);                         /* ����DACͨ��2 */
          
}

/**
 * @brief       ����ͨ��1/2�����ѹ
                ������û�ã��ú�����ֱ��ͨ��HAL_DAC_SetValue��ֵ���е���,����ʱ��ʹ��USMART��ֵ��������
 * @param       outx: 1,ͨ��1; 2,ͨ��2
 * @param       vol : 0~3300,����0~3.3V
 * @retval      ��
 */

void dac_set_voltage(uint8_t outx, uint16_t vol)
{
    double temp = vol;
    temp /= 1000;
    temp = temp * 4096 / 3.3;

    if (temp >= 4096)temp = 4095;   /* ���ֵ���ڵ���4096, ��ȡ4095 */

    if (outx == 1)   /* ͨ��1 */
    {
        HAL_DAC_SetValue(&g_dac_handle, DAC_CHANNEL_1, DAC_ALIGN_12B_R, temp); /* 12λ�Ҷ������ݸ�ʽ����DACֵ */
    }
    else            /* ͨ��2 */
    {
        HAL_DAC_SetValue(&g_dac_handle, DAC_CHANNEL_2, DAC_ALIGN_12B_R, temp); /* 12λ�Ҷ������ݸ�ʽ����DACֵ */
    }
}

