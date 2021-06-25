//Program to Blink Two LED Simultsneously using Keil RTX-51 Real Time Operating System in 8051
//LED 0 -> Blink @ 300ms , LED 1 -> Blink @ 100ms
//Target -> Microchip AT89S51
//Author -> Tanmoy Mitra | Mail -> tanmayamitra (at) gmail (dot) com

#include<rtx51tny.h> 
#include<reg51.h>
typedef unsigned char uchar;
typedef unsigned int uint;
sbit LED0 = P2^0;
sbit LED1 = P2^1;

void job0 (void) _task_ 0 
{
	LED0 = 1; 
	LED1 = 1; 

	os_create_task (1);	//Create Task 1      
	os_create_task (2);	//Create Task 2
	os_delete_task (0);	//Delete Yourself (task0), make Task0 quit task List
} 
void job1(void) _task_ 1 
{
	while (1) 
		{
			LED0 =1;
			os_wait (K_TMO, 300, 0);
			LED0 =0;
			os_wait (K_TMO, 300, 0);
		} 
}
void job2(void) _task_ 2 
{
	while (1) 
		{
			LED1 =1;
			os_wait (K_TMO, 100, 0);
			LED1 =0;
			os_wait (K_TMO, 100, 0);	
		}
}

