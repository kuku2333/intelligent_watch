/****************************************************************
*��    ��:�������Գ���1.69Ӣ������
*��    ��:��Ƕ.�¹�
*��������:2024/1/17
*֪ ʶ ��:
	1.Ӳ��SPI��ʽ����tft����ʾ
	2.֧�ִ�������
		.��TP_PIN_DEF�����˴������Ų�ͬ�����ӷ�ʽ�����Դ���ǰ����˽�ú�
*˵  ��:
	1.��ʾ������оƬΪST7789V
	2.����������оƬΪCST816T
	3.������Ļ�ʱ��ʾ����ֵ�����
*ע  ��:
*****************************************************************/
#include "includes.h"

GPIO_InitTypeDef GPIO_InitStructure;
NVIC_InitTypeDef NVIC_InitStructure;
SPI_InitTypeDef SPI_InitStructure;

// ������
int main(void)
{
	lv_init();
	
	lv_port_disp_init();
	
	lv_port_indev_init();
	
	// lv_demo_widgets();
	
	ui.init();
	
	tim3_init();
	
	//tp_init();
	
	/* ��ʾ���� */
	//lcd_show_string(30,140,"TP Test By Teacher.Wen",RED,WHITE,16,0);
	
	while (1)
	{
		lv_task_handler();
		delay_ms(5);
	}
	return 0;
}
