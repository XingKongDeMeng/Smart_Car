#ifndef __INCONTROL_H
#define __INCONTROL_H

void IRremote_Init(void);      // ����ң������ʼ��
unsigned char IRremote_Counttime();  // ����ң��������ʱ��

//����ȫ�ֱ���
extern unsigned int IR_Receivecode;
extern unsigned char  IR_Receiveflag;

#endif

