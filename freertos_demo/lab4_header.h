// _________ HEADER FILE _________

/*
 * Veen Oung
 * Student ID: 1738934
 * Date: 08/05/20
 * The master header file
 */

#ifndef HEADER_H_
#define HEADER_H_

// REGISTER DEFINITIONS
// Initialization and Configuration - GPIO
#define RCGCGPIO          (*((volatile uint32_t *)0x400FE608))

// The setup to connect Port L to LEDs and Buttons
#define GPIOPCTL_L        (*((volatile uint32_t *)0x4006252C))
#define GPIOLOCK_L        (*((volatile uint32_t *)0x40062520))
#define GPIOCR_L          (*((volatile uint32_t *)0x40062524))
#define GPIOPUR_L         (*((volatile uint32_t *)0x40062510))
#define GPIOAMSEL_L       (*((volatile uint32_t *)0x40062528))
#define GPIODIR_L         (*((volatile uint32_t *)0x40062400))
#define GPIODEN_L         (*((volatile uint32_t *)0x4006251C))
#define GPIOAFSEL_L       (*((volatile uint32_t *)0x40062420))
#define GPIODATA_L        (*((volatile uint32_t *)0x400623FC))
#define GPIOIBE_L         (*((volatile uint32_t *)0x40062408))

// Initialization - Port D
#define GPIODIR_D        (*((volatile uint32_t *)0x4005B400))
#define GPIODEN_D        (*((volatile uint32_t *)0x4005B51C))
#define GPIOPCTL_D       (*((volatile uint32_t *)0x4005B52C))
#define GPIOAMSEL_D      (*((volatile uint32_t *)0x4005B528))
#define GPIOAFSEL_D      (*((volatile uint32_t *)0x4005B420))
#define GPIODATA_D       (*((volatile uint32_t *)0x4005B00C))

// Initialization - Port K
#define GPIODIR_K        (*((volatile uint32_t *)0x40061400))
#define GPIODEN_K        (*((volatile uint32_t *)0x4006151C))
#define GPIOPCTL_K       (*((volatile uint32_t *)0x4006152C))
#define GPIOAMSEL_K      (*((volatile uint32_t *)0x40061528))
#define GPIOAFSEL_K      (*((volatile uint32_t *)0x40061420))
#define GPIODATA_K       (*((volatile uint32_t *)0x4006100C))

// Initialization - Port M
#define GPIODIR_M        (*((volatile uint32_t *)0x40063400))
#define GPIODEN_M        (*((volatile uint32_t *)0x4006351C))
#define GPIOPCTL_M       (*((volatile uint32_t *)0x4006352C))
#define GPIOAMSEL_M      (*((volatile uint32_t *)0x40063528))
#define GPIOAFSEL_M      (*((volatile uint32_t *)0x40063420))
#define GPIODATA_M       (*((volatile uint32_t *)0x4006300C))

// Initialization - Port N
// On board LED (PN0 -> D2, PN1 -> D1)
#define GPIODIR_N        (*((volatile uint32_t *)0x40064400))
#define GPIODEN_N        (*((volatile uint32_t *)0x4006451C))
#define GPIOPCTL_N       (*((volatile uint32_t *)0x4006452C))
#define GPIOAMSEL_N      (*((volatile uint32_t *)0x40064528))
#define GPIOAFSEL_N      (*((volatile uint32_t *)0x40064420))
#define GPIODATA_N       (*((volatile uint32_t *)0x4006400C))

// Initialization - Port P
#define GPIODIR_P        (*((volatile uint32_t *)0x40065400))
#define GPIODEN_P        (*((volatile uint32_t *)0x4006551C))
#define GPIOPCTL_P       (*((volatile uint32_t *)0x4006552C))
#define GPIOAMSEL_P      (*((volatile uint32_t *)0x40065528))
#define GPIOAFSEL_P      (*((volatile uint32_t *)0x40065420))
#define GPIODATA_P       (*((volatile uint32_t *)0x4006500C))

// Initialization - Port Q
#define GPIODIR_Q        (*((volatile uint32_t *)0x40066400))
#define GPIODEN_Q        (*((volatile uint32_t *)0x4006651C))
#define GPIOPCTL_Q       (*((volatile uint32_t *)0x4006652C))
#define GPIOAMSEL_Q      (*((volatile uint32_t *)0x40066528))
#define GPIOAFSEL_Q      (*((volatile uint32_t *)0x40066420))
#define GPIODATA_Q       (*((volatile uint32_t *)0x4006600C))

// Initialization - Port F
// On board LED (PF0 -> D4, PF4 -> D3)
#define GPIODIR_F        (*((volatile uint32_t *)0x4005D400))
#define GPIODEN_F        (*((volatile uint32_t *)0x4005D51C))
#define GPIOAFSEL_F      (*((volatile uint32_t *)0x4005D420))
#define GPIODATA_F       (*((volatile uint32_t *)0x4005D3FC))

// Initialization - Port J
// On board button (PJ0 -> SW1, PJ1 -> SW2)
#define GPIODIR_J        (*((volatile uint32_t *)0x40060400))
#define GPIODEN_J        (*((volatile uint32_t *)0x4006051C))
#define GPIOPUR_J        (*((volatile uint32_t *)0x40060510)) // pull up resistor
#define GPIOPCTL_J       (*((volatile uint32_t *)0x4006052C))
#define GPIOAMSEL_J      (*((volatile uint32_t *)0x40060528))
#define GPIOAFSEL_J      (*((volatile uint32_t *)0x40060420))
#define GPIODATA_J       (*((volatile uint32_t *)0x4006000C))

// Initialization - Port E
#define GPIODIR_E        (*((volatile uint32_t *)0x4005C400))
#define GPIODEN_E        (*((volatile uint32_t *)0x4005C51C))
#define GPIOAMSEL_E      (*((volatile uint32_t *)0x4005C528))
#define GPIOAFSEL_E      (*((volatile uint32_t *)0x4005C420))

// Initialization - Port A
#define GPIOPCTL_A       (*((volatile uint32_t *)0x4005852C))
#define GPIOAFSEL_A      (*((volatile uint32_t *)0x40058420))
#define GPIODEN_A        (*((volatile uint32_t *)0x4005851C))

// Initialization and Configuration - Timer
#define RCGCTIMER              (*((volatile unsigned int *) 0x400FE604))
#define NVIC_EN0               (*((volatile unsigned int *) 0xE000E100)) // IRQ 0 to 31 Set Enable Register

// Timer 0
#define TIMER0_GPTMCTL         (*((volatile unsigned int *) 0x4003000C)) // GPTM Control for Timer 0
#define TIMER0_GPTMCFG         (*((volatile unsigned int *) 0x40030000)) // GPTM Configuration
#define TIMER0_GPTMTAMR        (*((volatile unsigned int *) 0x40030004)) // GPTM Timer A Mode
#define TIMER0_GPTMTAILR       (*((volatile unsigned int *) 0x40030028)) // GPTM Timer A Interval Load
#define TIMER0_GPTMRIS         (*((volatile unsigned int *) 0x4003001C)) // GPTM Raw Interrupt Status
#define TIMER0_GPTMICR         (*((volatile unsigned int *) 0x40030024)) // GPTM Interrupt Clear
#define TIMER0_GPTMIMR         (*((volatile unsigned int *) 0x40030018)) // GPTM Interrupt Mask
#define TIMER0_GPTMADCEV       (*((volatile unsigned int *) 0x40030070)) // GPTM ADC Event

// Timer 1
#define TIMER1_GPTMCTL         (*((volatile unsigned int *) 0x4003100C)) // GPTM Control for Timer 1
#define TIMER1_GPTMCFG         (*((volatile unsigned int *) 0x40031000)) // GPTM Configuration
#define TIMER1_GPTMTAMR        (*((volatile unsigned int *) 0x40031004)) // GPTM Timer A Mode
#define TIMER1_GPTMTAILR       (*((volatile unsigned int *) 0x40031028)) // GPTM Timer A Interval Load
#define TIMER1_GPTMRIS         (*((volatile unsigned int *) 0x4003101C)) // GPTM Raw Interrupt Status
#define TIMER1_GPTMICR         (*((volatile unsigned int *) 0x40031024)) // GPTM Interrupt Clear
#define TIMER1_GPTMIMR         (*((volatile unsigned int *) 0x40031018)) // GPTM Interrupt Mask

// Timer 2
#define TIMER2_GPTMCTL         (*((volatile unsigned int *) 0x4003200C)) // GPTM Control for Timer 2
#define TIMER2_GPTMCFG         (*((volatile unsigned int *) 0x40032000)) // GPTM Configuration
#define TIMER2_GPTMTAMR        (*((volatile unsigned int *) 0x40032004)) // GPTM Timer A Mode
#define TIMER2_GPTMTAILR       (*((volatile unsigned int *) 0x40032028)) // GPTM Timer A Interval Load
#define TIMER2_GPTMRIS         (*((volatile unsigned int *) 0x4003201C)) // GPTM Raw Interrupt Status
#define TIMER2_GPTMICR         (*((volatile unsigned int *) 0x40032024)) // GPTM Interrupt Clear
#define TIMER2_GPTMIMR         (*((volatile unsigned int *) 0x40032018)) // GPTM Interrupt Mask

// Timer 3
#define TIMER3_GPTMCTL         (*((volatile unsigned int *) 0x4003300C)) // GPTM Control for Timer 2
#define TIMER3_GPTMCFG         (*((volatile unsigned int *) 0x40033000)) // GPTM Configuration
#define TIMER3_GPTMTAMR        (*((volatile unsigned int *) 0x40033004)) // GPTM Timer A Mode
#define TIMER3_GPTMTAILR       (*((volatile unsigned int *) 0x40033028)) // GPTM Timer A Interval Load
#define TIMER3_GPTMRIS         (*((volatile unsigned int *) 0x4003301C)) // GPTM Raw Interrupt Status
#define TIMER3_GPTMICR         (*((volatile unsigned int *) 0x40033024)) // GPTM Interrupt Clear
#define TIMER3_GPTMIMR         (*((volatile unsigned int *) 0x40033018)) // GPTM Interrupt Mask

// Initialization and Configuration - ADC (0)
#define RCGCADC                (*((volatile unsigned int *) 0x400FE638)) // RCGC ADC
#define ADCCC                  (*((volatile unsigned int *) 0x40038FC8)) // ADC clock configuration
#define ALTCLKCFG              (*((volatile unsigned int *) 0x400FE138)) // Alternate clock configuration
#define ADCACTSS               (*((volatile unsigned int *) 0x40038000)) // ADC Activation SS
#define ADCEMUX0               (*((volatile unsigned int *) 0x40038014)) // ADC Event Multiplexer Select
#define ADCSSMUX3              (*((volatile unsigned int *) 0x400380A0)) // ADC Sample Sequence Input MUX 3
#define ADCSSEMUX3             (*((volatile unsigned int *) 0x400380B8)) // ADC Sample Sequence Input EMUX 3
#define ADCSSCTL3              (*((volatile unsigned int *) 0x400380A4)) // ADC SS Control 3
#define ADCPSSI                (*((volatile unsigned int *) 0x40038028)) // ADC Processor Sample Sequence Initiate
#define ADCRIS                 (*((volatile unsigned int *) 0x40038004)) // ADC Raw Interrupt Status
#define ADCISC                 (*((volatile unsigned int *) 0x4003800C)) // ADC Clear
#define ADCIM                  (*((volatile unsigned int *) 0x40038008)) // ADC Interrupt Mask
#define ADCSAC                 (*((volatile unsigned int *) 0x40038030)) // ADC Sample Averaging Control
#define ADCSSTSH3              (*((volatile unsigned int *) 0x400380BC)) // ADC SS3 Sample and Hold Time
#define ADCSSFIFO3             (*((volatile unsigned int *) 0x400380A8)) // SS3

// Initialization and Configuration - UART0
#define RCGCUART               (*((volatile unsigned int *) 0x400FE618)) // RCGC UART
#define UART0_CTL              (*((volatile unsigned int *) 0x4000C030)) // UART Control
#define UART0_IBRD             (*((volatile unsigned int *) 0x4000C024)) // UART Integer Baud-Rate Divisor
#define UART0_FBRD             (*((volatile unsigned int *) 0x4000C028)) // UART Fractional Baud-Rate Divisor
#define UART0_LCRH             (*((volatile unsigned int *) 0x4000C02C)) // UART Line Control
#define UART0_CC               (*((volatile unsigned int *) 0x4000CFC8)) // UART Clock Configuration
#define UART0_FR               (*((volatile unsigned int *) 0x4000C018)) // UART Flag
#define UART0_DR               (*((volatile unsigned int *) 0x4000C000)) // UART Data

#define UART2_CTL              (*((volatile unsigned int *) 0x4000E030)) // UART Control
#define UART2_IBRD             (*((volatile unsigned int *) 0x4000E024)) // UART Integer Baud-Rate Divisor
#define UART2_FBRD             (*((volatile unsigned int *) 0x4000E028)) // UART Fractional Baud-Rate Divisor
#define UART2_LCRH             (*((volatile unsigned int *) 0x4000E02C)) // UART Line Control
#define UART2_CC               (*((volatile unsigned int *) 0x4000EFC8)) // UART Clock Configuration
#define UART2_FR               (*((volatile unsigned int *) 0x4000E018)) // UART Flag
#define UART2_DR               (*((volatile unsigned int *) 0x4000E000)) // UART Data

//ADDITIONAL MACROS
#define GPIO_PORT_N            (1<<12)
#define GPIO_PORT_J            (1<<8)
#define GPIO_PORT_E            (1<<4)
#define GPIO_PORT_D            (1<<3)
#define GPIO_PORT_K            (1<<9)
#define GPIO_PORT_M            (1<<11)
#define GPIO_PORT_P            (1<<13)
#define GPIO_PORT_Q            (1<<14)

// Baud Rate Calculation
/*
  16MHz - BRD = 16,000,000 / (16 * 115,200) = 8.6806
  UARTFBRD = integer(0.6806 * 64 + 0.5) = 44
*/
#define IBRD_16MHz     8
#define FBRD_16MHz    44

#define IBRD_9600     104
#define FBRD_9600     11

// FUNCTION PROTOTYPES

#endif
