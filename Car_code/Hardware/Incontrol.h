#ifndef __INCONTROL_H
#define __INCONTROL_H

void IRremote_Init(void);      // 红外遥控器初始化
unsigned char IRremote_Counttime();  // 红外遥控器计数时间

//定义全局变量
extern unsigned int IR_Receivecode;
extern unsigned char  IR_Receiveflag;

#endif

