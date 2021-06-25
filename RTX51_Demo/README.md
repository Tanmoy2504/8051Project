RTX-51 Tiny is **Propetiary** Real Time Operating System (RTOS) for the MCS-51 a.k.a 8051 Family. 

A Real-Time Operating System (RTOS) is an operating system (OS) intended to serve real-time applications that process data as it comes in. Processing must be done within the defined constraints or the system will fail it's objective.

RTX51 Tiny programs require only that you include a special header file and link the RTX51 Tiny library into your program. Despite being "Royalty-Free", it is only available with Licenced Version of **PK51 Professional Developer's Kit**. This Professional kit contains all other necessary headers, symbols and files.

Due to above mentioned reason, this code cannot be used with SDCC (Small Device C Compiler). You can alternatively look for FreeRTOS Port of 8051 which is compatible with SDCC.


The Code in this example is to blink two LED's , LED 0 -> Blink @ 300ms , LED 1 -> Blink @ 100ms using RTX-51 Tiny RTOS.

>**My Custom Settings**  

>**[Device]**  
>  Vendor  : Microchip  
>  Device  : AT89S51  
>  Toolset : C51  
>  Use Extended Linker (LX51) instead of BL51   : Yes  
>  Use Extended Assembler (AX51) instead of A51 : Yes  
  
>**[Target]**  
>  Xtal(MHz) : 12.0  
>  Memory Model  : Compact  
>  Code Rom Size : Small  
>  Operating System : RTX-51 Tiny  
>  Use On-chip ROM (0x0 - 0xFFF) : Yes  
  
>**[Output]**  
>  Name of Executable : LED_Blink  
>  Create Executable  
>  Debug Information : Yes  
>  Browse Information : Yes  
>  Create HEX File : Yes  
>  Hex Format : HEX-80   
