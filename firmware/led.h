#ifndef _LED_H
#define _LED_H


#define LED1_PINN PORTD7
#define LED2_PINN PORTD6
#define LED3_PINN PORTD5
#define LED4_PINN PORTD4

#define LED1_PORT PORTD
#define LED2_PORT PORTD
#define LED3_PORT PORTD
#define LED4_PORT PORTD

#define LED1_DDR DDRD
#define LED2_DDR DDRD
#define LED3_DDR DDRD
#define LED4_DDR DDRD

#define LED1_TOGGLE LED1_PORT ^= (1<<LED1_PINN)
#define LED2_TOGGLE LED2_PORT ^= (1<<LED2_PINN)
#define LED3_TOGGLE LED3_PORT ^= (1<<LED3_PINN)
#define LED4_TOGGLE LED4_PORT ^= (1<<LED4_PINN)

#define LED1_OFF LED1_PORT |= (1<<LED1_PINN)
#define LED2_OFF LED2_PORT |= (1<<LED2_PINN)
#define LED3_OFF LED3_PORT |= (1<<LED3_PINN)
#define LED4_OFF LED4_PORT |= (1<<LED4_PINN)

#define LED1_ON LED1_PORT &= ~(1<<LED1_PINN)
#define LED2_ON LED2_PORT &= ~(1<<LED2_PINN)
#define LED3_ON LED3_PORT &= ~(1<<LED3_PINN)
#define LED4_ON LED4_PORT &= ~(1<<LED4_PINN)


#endif
