#ifndef _DMA_ADC_H_
#define _DMA_ADC_H_

/******************************************************************************
							�궨��
*******************************************************************************/ 
#define M 2

/******************************************************************************
							ȫ�ֱ�������
*******************************************************************************/ 
extern uint16_t ADC_Value[M];
extern int16_t Battery_Fly;
extern uint16_t Battery;
/******************************************************************************
							ȫ�ֺ�������
*******************************************************************************/ 
void ADC1_Init(void);
void Voltage_Measure(void);
	
#endif