/* ###*B*###
 * Erika Enterprise, version 3
 * 
 * Copyright (C) 2017 Evidence s.r.l.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License, version 2, for more details.
 * 
 * You should have received a copy of the GNU General Public License,
 * version 2, along with this program; if not, see
 * < www.gnu.org/licenses/old-licenses/gpl-2.0.html >.
 * 
 * This program is distributed to you subject to the following
 * clarifications and special exceptions to the GNU General Public
 * License, version 2.
 * 
 * THIRD PARTIES' MATERIALS
 * 
 * Certain materials included in this library are provided by third
 * parties under licenses other than the GNU General Public License. You
 * may only use, copy, link to, modify and redistribute this library
 * following the terms of license indicated below for third parties'
 * materials.
 * 
 * In case you make modified versions of this library which still include
 * said third parties' materials, you are obligated to grant this special
 * exception.
 * 
 * The complete list of Third party materials allowed with ERIKA
 * Enterprise version 3, together with the terms and conditions of each
 * license, is present in the file THIRDPARTY.TXT in the root of the
 * project.
 * ###*E*### */

/** \file   ee_atmega_intvect.c
 *  \brief  Atmel ATMEGA MCUs Interrupts vector.
 *
 *  This files contains the implementation of Atmel ATMEGA MCUs Interrupts
 *  vector in Erika Enterprise.
 *
 *  \note   TO BE DOCUMENTED!!!
 *
 *  \author Giuseppe Serano
 *  \author Errico Guidieri
 *  \date   2016
 */

/* I need ISR2 Stub */
#include "ee_avr8_irqstub.h"

/* Erika Interrupt Vector Definition */

/* DUMMY interrupt vector */
OSEE_AVR8_ISR_NOT_DEFINED(BADISR_vect)

/* Interrupt Vector Table Recall. */
void osEE_atmega_intvect(void) {
  OSEE_AVR8_REQUEST_IRQ_ENTRY(BADISR_vect);
}

/* [GS]: TID Al posto dell'Handler */

#if (defined(OSEE_API_DYNAMIC))

/* INT0 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT0_vect, OSEE_AVR8_INT0_ISR_ID)

/* INT1 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT1_vect, OSEE_AVR8_INT1_ISR_ID)

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* INT2 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT2_vect, OSEE_AVR8_INT2_ISR_ID)

/* INT3 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT3_vect, OSEE_AVR8_INT3_ISR_ID)

/* INT4 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT4_vect, OSEE_AVR8_INT4_ISR_ID)

/* INT5 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT5_vect, OSEE_AVR8_INT5_ISR_ID)

/* INT6 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT6_vect, OSEE_AVR8_INT6_ISR_ID)

/* INT7 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(INT7_vect, OSEE_AVR8_INT7_ISR_ID)
#endif  /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

#if                                 \
  (defined(__AVR_ATmega328__))  ||  \
  (defined(__AVR_ATmega328P__)) ||  \
  (defined(__AVR_ATmega1281__))
/* PCINT0 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(PCINT0_vect, OSEE_AVR8_PCINT0_ISR_ID)

/* PCINT1 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(PCINT1_vect, OSEE_AVR8_PCINT1_ISR_ID)

/* PCINT2 interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(PCINT2_vect, OSEE_AVR8_PCINT2_ISR_ID)

/* WDT interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(WDT_vect, OSEE_AVR8_WDT_ISR_ID)
#endif  /* __AVR_ATmega328__ || __AVR_ATmega328P__ || __AVR_ATmega1281__ */

#if (defined(__AVR_ATmega128__))
/* TIMER2_COMP interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER2_COMP_vect, OSEE_AVR8_TIMER2_COMP_ISR_ID)
#endif  /* __AVR_ATmega128__ */

#if                                 \
  (defined(__AVR_ATmega328__))  ||  \
  (defined(__AVR_ATmega328P__)) ||  \
  (defined(__AVR_ATmega1281__))
/* TIMER2_COMPA interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER2_COMPA_vect, OSEE_AVR8_TIMER2_COMPA_ISR_ID)

/* TIMER2_COMPB interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER2_COMPB_vect, OSEE_AVR8_TIMER2_COMPB_ISR_ID)
#endif  /* __AVR_ATmega328__ || __AVR_ATmega328P__ || __AVR_ATmega1281__ */

/* TIMER2_OVF interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER2_OVF_vect, OSEE_AVR8_TIMER2_OVF_ISR_ID)

/* TIMER1_CAPT interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER1_CAPT_vect, OSEE_AVR8_TIMER1_CAPT_ISR_ID)

/* TIMER1_COMPA interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER1_COMPA_vect, OSEE_AVR8_TIMER1_COMPA_ISR_ID)

/* TIMER1_COMPB interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER1_COMPB_vect, OSEE_AVR8_TIMER1_COMPB_ISR_ID)

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* TIMER1_COMPC interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER1_COMPC_vect, OSEE_AVR8_TIMER1_COMPC_ISR_ID)
#endif  /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

/* TIMER1_OVF interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER1_OVF_vect, OSEE_AVR8_TIMER1_OVF_ISR_ID)

#if (defined(__AVR_ATmega128__))
/* TIMER0_COMP interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER0_COMP_vect, OSEE_AVR8_TIMER0_COMP_ISR_ID)
#endif  /* __AVR_ATmega128__ */

#if                                 \
  (defined(__AVR_ATmega328__))  ||  \
  (defined(__AVR_ATmega328P__)) ||  \
  (defined(__AVR_ATmega1281__))
/* TIMER2_COMPA interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER0_COMPA_vect, OSEE_AVR8_TIMER0_COMPA_ISR_ID)

/* TIMER0_COMPB interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER0_COMPB_vect, OSEE_AVR8_TIMER0_COMPB_ISR_ID)
#endif  /* __AVR_ATmega328__ || __AVR_ATmega328P__ || __AVR_ATmega1281__ */

#if (!defined(OS_EE_LIB_ARDUINO_SDK))
/* TIMER0_OVF interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER0_OVF_vect, OSEE_AVR8_TIMER0_OVF_ISR_ID)
#endif  /* !OS_EE_LIB_ARDUINO_SDK */

/* SPI_STC interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(SPI_STC_vect, OSEE_AVR8_SPI_STC_ISR_ID)

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* USART0_RX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART0_RX_vect, OSEE_AVR8_USART0_RX_ISR_ID)

/* USART0_UDRE interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART0_UDRE_vect, OSEE_AVR8_USART0_UDRE_ISR_ID)

/* USART0_TX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART0_TX_vect, OSEE_AVR8_USART0_TX_ISR_ID)
#endif  /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

#if (defined (__AVR_ATmega328__)) || (defined(__AVR_ATmega328P__))
#if (!defined(OS_EE_LIB_ARDUINO_SDK))
/* USART_RX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART_RX_vect, OSEE_AVR8_USART_RX_ISR_ID)

/* USART_UDRE interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART_UDRE_vect, OSEE_AVR8_USART_UDRE_ISR_ID)

/* USART_TX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART_TX_vect, OSEE_AVR8_USART_TX_ISR_ID)
#endif  /* !OSEE_LIB_ARDUINO_SDK */
#endif  /* __AVR_ATmega328__ || __AVR_ATmega328P__ */

/* ADC interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(ADC_vect, OSEE_AVR8_ADC_ISR_ID)

/* OSEE_READY interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(EE_READY_vect, OSEE_AVR8_EE_READY_ISR_ID)

/* ANALOG_COMP interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(ANALOG_COMP_vect, OSEE_AVR8_ANALOG_COMP_ISR_ID)

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* TIMER3_CAPT interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER3_CAPT_vect, OSEE_AVR8_TIMER3_CAPT_ISR_ID)

/* TIMER3_COMPA interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER3_COMPA_vect, OSEE_AVR8_TIMER3_COMPA_ISR_ID)

/* TIMER3_COMPB interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER3_COMPB_vect, OSEE_AVR8_TIMER3_COMPB_ISR_ID)

/* TIMER3_COMPC interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER3_COMPC_vect, OSEE_AVR8_TIMER3_COMPC_ISR_ID)

/* TIMER3_OVF interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER3_OVF_vect, OSEE_AVR8_TIMER3_OVF_ISR_ID)

/* USART1_RX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART1_RX_vect, OSEE_AVR8_USART1_RX_ISR_ID)

/* USART1_UDRE interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART1_UDRE_vect, OSEE_AVR8_USART1_UDRE_ISR_ID)

/* USART1_TX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART1_TX_vect, OSEE_AVR8_USART1_TX_ISR_ID)
#endif	/* __AVR_ATmega128__ || __AVR_ATmega1281__ */

/* TWI interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TWI_vect, OSEE_AVR8_TWI_ISR_ID)

/* SPM_READY interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(SPM_READY_vect, OSEE_AVR8_SPM_READY_ISR_ID)

#if (defined(__AVR_ATmega1281__))
/* TIMER4_CAPT interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER4_CAPT_vect, OSEE_AVR8_TIMER4_CAPT_ISR_ID)

/* TIMER4_COMPA interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER4_COMPA_vect, OSEE_AVR8_TIMER4_COMPA_ISR_ID)

/* TIMER4_COMPB interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER4_COMPB_vect, OSEE_AVR8_TIMER4_COMPB_ISR_ID)

/* TIMER4_COMPC interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER4_COMPC_vect, OSEE_AVR8_TIMER4_COMPC_ISR_ID)

/* TIMER4_OVF interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER4_OVF_vect, OSEE_AVR8_TIMER4_OVF_ISR_ID)

/* TIMER5_CAPT interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER5_CAPT_vect, OSEE_AVR8_TIMER5_CAPT_ISR_ID)

/* TIMER5_COMPA interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER5_COMPA_vect, OSEE_AVR8_TIMER5_COMPA_ISR_ID)

/* TIMER5_COMPB interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER5_COMPB_vect, OSEE_AVR8_TIMER5_COMPB_ISR_ID)

/* TIMER5_COMPC interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER5_COMPC_vect, OSEE_AVR8_TIMER5_COMPC_ISR_ID)

/* TIMER5_OVF interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(TIMER5_OVF_vect, OSEE_AVR8_TIMER5_OVF_ISR_ID)

/* USART2_RX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART2_RX_vect, OSEE_AVR8_USART2_RX_ISR_ID)

/* USART2_UDRE interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART2_UDRE_vect, OSEE_AVR8_USART2_UDRE_ISR_ID)

/* USART2_TX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART2_TX_vect, OSEE_AVR8_USART2_TX_ISR_ID)

/* USART3_RX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART3_RX_vect, OSEE_AVR8_USART3_RX_ISR_ID)

/* USART3_UDRE interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART3_UDRE_vect, OSEE_AVR8_USART3_UDRE_ISR_ID)

/* USART3_TX interrupt vector */
OSEE_AVR8_ISR2_DEFINITION(USART3_TX_vect, OSEE_AVR8_USART3_TX_ISR_ID)
#endif  /* __AVR_ATmega1281__ */

#else  /* OSEE_API_DYNAMIC */

/* INT0 interrupt vector */
#if (defined(OSEE_AVR8_INT0_ISR_TID)) && (OSEE_AVR8_INT0_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT0_vect, OSEE_AVR8_INT0_ISR_TID)
#elif (defined(OSEE_AVR8_INT0_ISR)) && (OSEE_AVR8_INT0_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT0_vect, OSEE_AVR8_INT0_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT0_vect)
#endif /* OSEE_AVR8_INT0_ISR */

/* INT1 interrupt vector */
#if (defined(OSEE_AVR8_INT1_ISR_TID)) && (OSEE_AVR8_INT1_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT1_vect, OSEE_AVR8_INT1_ISR_TID)
#elif (defined(OSEE_AVR8_INT1_ISR)) && (OSEE_AVR8_INT1_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT1_vect, OSEE_AVR8_INT1_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT1_vect)
#endif /* OSEE_AVR8_INT1_ISR */

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* INT2 interrupt vector */
#if (defined(OSEE_AVR8_INT2_ISR_TID)) && (OSEE_AVR8_INT2_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT2_vect, OSEE_AVR8_INT2_ISR_TID)
#elif (defined(OSEE_AVR8_INT2_ISR)) && (OSEE_AVR8_INT2_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT2_vect, OSEE_AVR8_INT2_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT2_vect)
#endif /* OSEE_AVR8_INT2_ISR */

/* INT3 interrupt vector */
#if (defined(OSEE_AVR8_INT3_ISR_TID)) && (OSEE_AVR8_INT3_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT3_vect, OSEE_AVR8_INT3_ISR_TID)
#elif (defined(OSEE_AVR8_INT3_ISR)) && (OSEE_AVR8_INT3_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT3_vect, OSEE_AVR8_INT3_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT3_vect)
#endif /* OSEE_AVR8_INT3_ISR */

/* INT4 interrupt vector */
#if (defined(OSEE_AVR8_INT4_ISR_TID)) && (OSEE_AVR8_INT4_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT4_vect, OSEE_AVR8_INT4_ISR_TID)
#elif (defined(OSEE_AVR8_INT4_ISR)) && (OSEE_AVR8_INT4_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT4_vect, OSEE_AVR8_INT4_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT4_vect)
#endif /* OSEE_AVR8_INT4_ISR */

/* INT5 interrupt vector */
#if (defined(OSEE_AVR8_INT5_ISR_TID)) && (OSEE_AVR8_INT5_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT5_vect, OSEE_AVR8_INT5_ISR_TID)
#elif (defined(OSEE_AVR8_INT5_ISR)) && (OSEE_AVR8_INT5_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT5_vect, OSEE_AVR8_INT5_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT5_vect)
#endif /* OSEE_AVR8_INT5_ISR */

/* INT6 interrupt vector */
#if (defined(OSEE_AVR8_INT6_ISR_TID)) && (OSEE_AVR8_INT6_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT6_vect, OSEE_AVR8_INT6_ISR_TID)
#elif (defined(OSEE_AVR8_INT6_ISR)) && (OSEE_AVR8_INT6_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT6_vect, OSEE_AVR8_INT6_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT6_vect)
#endif /* OSEE_AVR8_INT6_ISR */

/* INT7 interrupt vector */
#if (defined(OSEE_AVR8_INT7_ISR_TID)) && (OSEE_AVR8_INT7_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(INT7_vect, OSEE_AVR8_INT7_ISR_TID)
#elif (defined(OSEE_AVR8_INT7_ISR)) && (OSEE_AVR8_INT7_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(INT7_vect, OSEE_AVR8_INT7_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(INT7_vect)
#endif  /* OSEE_AVR8_INT7_ISR */
#endif  /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

#if                                 \
  (defined(__AVR_ATmega328__))  ||  \
  (defined(__AVR_ATmega328P__)) ||  \
  (defined(__AVR_ATmega1281__))

/* PCINT0 interrupt vector */
#if (defined(OSEE_AVR8_PCINT0_ISR_TID)) && (OSEE_AVR8_PCINT0_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(PCINT0_vect, OSEE_AVR8_PCINT0_ISR_TID)
#elif (defined(OSEE_AVR8_PCINT0_ISR)) && (OSEE_AVR8_PCINT0_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(PCINT0_vect, OSEE_AVR8_PCINT0_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(PCINT0_vect)
#endif /* OSEE_AVR8_PCINT0_ISR */

/* PCINT1 interrupt vector */
#if (defined(OSEE_AVR8_PCINT1_ISR_TID)) && (OSEE_AVR8_PCINT1_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(PCINT1_vect, OSEE_AVR8_PCINT1_ISR_TID)
#elif (defined(OSEE_AVR8_PCINT1_ISR)) && (OSEE_AVR8_PCINT1_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(PCINT1_vect, OSEE_AVR8_PCINT1_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(PCINT1_vect)
#endif /* OSEE_AVR8_PCINT1_ISR */

/* PCINT2 interrupt vector */
#if (defined(OSEE_AVR8_PCINT2_ISR_TID)) && (OSEE_AVR8_PCINT2_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(PCINT2_vect, OSEE_AVR8_PCINT2_ISR_TID)
#elif (defined(OSEE_AVR8_PCINT2_ISR)) && (OSEE_AVR8_PCINT2_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(PCINT2_vect, OSEE_AVR8_PCINT2_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(PCINT2_vect)
#endif /* OSEE_AVR8_PCINT2_ISR */

/* WDT interrupt vector */
#if (defined(OSEE_AVR8_WDT_ISR_TID)) && (OSEE_AVR8_WDT_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(WDT_vect, OSEE_AVR8_WDT_ISR_TID)
#elif (defined(OSEE_AVR8_WDT_ISR)) && (OSEE_AVR8_WDT_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(WDT_vect, OSEE_AVR8_WDT_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(WDT_vect)
#endif /* OSEE_AVR8_WDT_ISR */
#endif /* __AVR_ATmega328__ || __AVR_ATmega328P__ || __AVR_ATmega1281__ */

#if (defined(__AVR_ATmega128__))
/* TIMER2_COMP interrupt vector */
#if (defined(OSEE_AVR8_TIMER2_COMP_ISR_TID)) && (OSEE_AVR8_TIMER2_COMP_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER2_COMP_vect, OSEE_AVR8_TIMER2_COMP_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER2_COMP_ISR)) && (OSEE_AVR8_TIMER2_COMP_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER2_COMP_vect, OSEE_AVR8_TIMER2_COMP_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER2_COMP_vect)
#endif /* OSEE_AVR8_TIMER2_COMP_ISR */
#endif /* __AVR_ATmega128__ */

#if                                 \
  (defined(__AVR_ATmega328__))  ||  \
  (defined(__AVR_ATmega328P__)) ||  \
  (defined(__AVR_ATmega1281__))

/* TIMER2_COMPA interrupt vector */
#if (defined(OSEE_AVR8_TIMER2_COMPA_ISR_TID)) && (OSEE_AVR8_TIMER2_COMPA_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER2_COMPA_vect, OSEE_AVR8_TIMER2_COMPA_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER2_COMPA_ISR)) && (OSEE_AVR8_TIMER2_COMPA_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER2_COMPA_vect, OSEE_AVR8_TIMER2_COMPA_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER2_COMPA_vect)
#endif /* OSEE_AVR8_TIMER2_COMPA_ISR */

/* TIMER2_COMPB interrupt vector */
#if (defined(OSEE_AVR8_TIMER2_COMPB_ISR_TID)) && (OSEE_AVR8_TIMER2_COMPB_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER2_COMPB_vect, OSEE_AVR8_TIMER2_COMPB_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER2_COMPB_ISR)) && (OSEE_AVR8_TIMER2_COMPB_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER2_COMPB_vect, OSEE_AVR8_TIMER2_COMPB_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER2_COMPB_vect)
#endif /* OSEE_AVR8_TIMER2_COMPB_ISR */
#endif /* __AVR_ATmega328__ || __AVR_ATmega328P__ || __AVR_ATmega1281__ */

/* TIMER2_OVF interrupt vector */
#if (defined(OSEE_AVR8_TIMER2_OVF_ISR_TID)) && (OSEE_AVR8_TIMER2_OVF_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER2_OVF_vect, OSEE_AVR8_TIMER2_OVF_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER2_OVF_ISR)) && (OSEE_AVR8_TIMER2_OVF_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER2_OVF_vect, OSEE_AVR8_TIMER2_OVF_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER2_OVF_vect)
#endif /* OSEE_AVR8_TIMER2_OVF_ISR */

/* TIMER1_CAPT interrupt vector */
#if (defined(OSEE_AVR8_TIMER1_CAPT_ISR_TID)) && (OSEE_AVR8_TIMER1_CAPT_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER1_CAPT_vect, OSEE_AVR8_TIMER1_CAPT_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER1_CAPT_ISR)) && (OSEE_AVR8_TIMER1_CAPT_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER1_CAPT_vect, OSEE_AVR8_TIMER1_CAPT_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER1_CAPT_vect)
#endif /* OSEE_AVR8_TIMER1_CAPT_ISR */

/* TIMER1_COMPA interrupt vector */
#if (defined(OSEE_AVR8_TIMER1_COMPA_ISR_TID)) && (OSEE_AVR8_TIMER1_COMPA_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER1_COMPA_vect, OSEE_AVR8_TIMER1_COMPA_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER1_COMPA_ISR)) && (OSEE_AVR8_TIMER1_COMPA_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER1_COMPA_vect, OSEE_AVR8_TIMER1_COMPA_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER1_COMPA_vect)
#endif /* OSEE_AVR8_TIMER1_COMPA_ISR */

/* TIMER1_COMPB interrupt vector */
#if (defined(OSEE_AVR8_TIMER1_COMPB_ISR_TID)) && (OSEE_AVR8_TIMER1_COMPB_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER1_COMPB_vect, OSEE_AVR8_TIMER1_COMPB_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER1_COMPB_ISR)) && (OSEE_AVR8_TIMER1_COMPB_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER1_COMPB_vect, OSEE_AVR8_TIMER1_COMPB_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER1_COMPB_vect)
#endif /* OSEE_AVR8_TIMER1_COMPB_ISR */

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* TIMER1_COMPC interrupt vector */
#if (defined(OSEE_AVR8_TIMER1_COMPC_ISR_TID)) && (OSEE_AVR8_TIMER1_COMPC_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER1_COMPC_vect, OSEE_AVR8_TIMER1_COMPC_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER1_COMPC_ISR)) && (OSEE_AVR8_TIMER1_COMPC_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER1_COMPC_vect, OSEE_AVR8_TIMER1_COMPC_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER1_COMPC_vect)
#endif /* OSEE_AVR8_TIMER1_COMPC_ISR */
#endif /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

/* TIMER1_OVF interrupt vector */
#if (defined(OSEE_AVR8_TIMER1_OVF_ISR_TID)) && (OSEE_AVR8_TIMER1_OVF_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER1_OVF_vect, OSEE_AVR8_TIMER1_OVF_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER1_OVF_ISR)) && (OSEE_AVR8_TIMER1_OVF_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER1_OVF_vect, OSEE_AVR8_TIMER1_OVF_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER1_OVF_vect)
#endif /* OSEE_AVR8_TIMER1_OVF_ISR */

#if (defined(__AVR_ATmega128__))
/* TIMER0_COMP interrupt vector */
#if (defined(OSEE_AVR8_TIMER0_COMP_ISR_TID)) && (OSEE_AVR8_TIMER0_COMP_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER0_COMP_vect, OSEE_AVR8_TIMER0_COMP_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER0_COMP_ISR)) && (OSEE_AVR8_TIMER0_COMP_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER0_COMP_vect, OSEE_AVR8_TIMER0_COMP_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER0_COMP_vect)
#endif /* OSEE_AVR8_TIMER0_COMP_ISR */
#endif /* __AVR_ATmega128__ */

#if                                 \
  (defined(__AVR_ATmega328__))  ||  \
  (defined(__AVR_ATmega328P__)) ||  \
  (defined(__AVR_ATmega1281__))

/* TIMER2_COMPA interrupt vector */
#if (defined(OSEE_AVR8_TIMER0_COMPA_ISR_TID)) && (OSEE_AVR8_TIMER0_COMPA_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER0_COMPA_vect, OSEE_AVR8_TIMER0_COMPA_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER0_COMPA_ISR)) && (OSEE_AVR8_TIMER0_COMPA_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER0_COMPA_vect, OSEE_AVR8_TIMER0_COMPA_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER0_COMPA_vect)
#endif /* OSEE_AVR8_TIMER0_COMPA_ISR */

/* TIMER0_COMPB interrupt vector */
#if (defined(OSEE_AVR8_TIMER0_COMPB_ISR_TID)) && (OSEE_AVR8_TIMER0_COMPB_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER0_COMPB_vect, OSEE_AVR8_TIMER0_COMPB_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER0_COMPB_ISR)) && (OSEE_AVR8_TIMER0_COMPB_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER0_COMPB_vect, OSEE_AVR8_TIMER0_COMPB_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER0_COMPB_vect)
#endif /* OSEE_AVR8_TIMER0_COMPB_ISR */
#endif /* __AVR_ATmega328__ || __AVR_ATmega328P__ || __AVR_ATmega1281__ */

/* TIMER0_OVF interrupt vector */
#if (defined(OSEE_AVR8_TIMER0_OVF_ISR_TID)) && (OSEE_AVR8_TIMER0_OVF_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER0_OVF_vect, OSEE_AVR8_TIMER0_OVF_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER0_OVF_ISR)) && (OSEE_AVR8_TIMER0_OVF_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER0_OVF_vect, OSEE_AVR8_TIMER0_OVF_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER0_OVF_vect)
#endif /* OSEE_AVR8_TIMER0_OVF_ISR */

/* SPI_STC interrupt vector */
#if (defined(OSEE_AVR8_SPI_STC_ISR_TID)) && (OSEE_AVR8_SPI_STC_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(SPI_STC_vect, OSEE_AVR8_SPI_STC_ISR_TID)
#elif (defined(OSEE_AVR8_SPI_STC_ISR)) && (OSEE_AVR8_SPI_STC_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(SPI_STC_vect, OSEE_AVR8_SPI_STC_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(SPI_STC_vect)
#endif /* OSEE_AVR8_SPI_STC_ISR */

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* USART0_RX interrupt vector */
#if (defined(OSEE_AVR8_USART0_RX_ISR_TID)) && (OSEE_AVR8_USART0_RX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART0_RX_vect, OSEE_AVR8_USART0_RX_ISR_TID)
#elif (defined(OSEE_AVR8_USART0_RX_ISR)) && (OSEE_AVR8_USART0_RX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART0_RX_vect, OSEE_AVR8_USART0_RX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART0_RX_vect)
#endif /* OSEE_AVR8_USART0_RX_ISR */

/* USART0_UDRE interrupt vector */
#if (defined(OSEE_AVR8_USART0_UDRE_ISR_TID)) && (OSEE_AVR8_USART0_UDRE_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART0_UDRE_vect, OSEE_AVR8_USART0_UDRE_ISR_TID)
#elif (defined(OSEE_AVR8_USART0_UDRE_ISR)) && (OSEE_AVR8_USART0_UDRE_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART0_UDRE_vect, OSEE_AVR8_USART0_UDRE_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART0_UDRE_vect)
#endif /* OSEE_AVR8_USART0_UDRE_ISR */

/* USART0_TX interrupt vector */
#if (defined(OSEE_AVR8_USART0_TX_ISR_TID)) && (OSEE_AVR8_USART0_TX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART0_TX_vect, OSEE_AVR8_USART0_TX_ISR_TID)
#elif (defined(OSEE_AVR8_USART0_TX_ISR)) && (OSEE_AVR8_USART0_TX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART0_TX_vect, OSEE_AVR8_USART0_TX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART0_TX_vect)
#endif /* OSEE_AVR8_USART0_TX_ISR */
#endif /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

#if (defined(__AVR_ATmega328__)) || (defined(__AVR_ATmega328P__))
/* USART_RX interrupt vector */
#if (defined(OSEE_AVR8_USART_RX_ISR_TID)) && (OSEE_AVR8_USART_RX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART_RX_vect, OSEE_AVR8_USART_RX_ISR_TID)
#elif (defined(OSEE_AVR8_USART_RX_ISR)) && (OSEE_AVR8_USART_RX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART_RX_vect, OSEE_AVR8_USART_RX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART_RX_vect)
#endif /* OSEE_AVR8_USART_RX_ISR */

/* USART_UDRE interrupt vector */
#if (defined(OSEE_AVR8_USART_UDRE_ISR_TID)) && (OSEE_AVR8_USART_UDRE_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART_UDRE_vect, OSEE_AVR8_USART_UDRE_ISR_TID)
#elif (defined(OSEE_AVR8_USART_UDRE_ISR)) && (OSEE_AVR8_USART_UDRE_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART_UDRE_vect, OSEE_AVR8_USART_UDRE_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART_UDRE_vect)
#endif /* OSEE_AVR8_USART_UDRE_ISR */

/* USART_TX interrupt vector */
#if (defined(OSEE_AVR8_USART_TX_ISR_TID)) && (OSEE_AVR8_USART_TX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART_TX_vect, OSEE_AVR8_USART_TX_ISR_TID)
#elif (defined(OSEE_AVR8_USART_TX_ISR)) && (OSEE_AVR8_USART_TX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART_TX_vect, OSEE_AVR8_USART_TX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART_TX_vect)
#endif /* OSEE_AVR8_USART_TX_ISR */
#endif /* __AVR_ATmega328__ || __AVR_ATmega328P__ */

/* ADC interrupt vector */
#if (defined(OSEE_AVR8_ADC_ISR_TID)) && (OSEE_AVR8_ADC_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(ADC_vect, OSEE_AVR8_ADC_ISR_TID)
#elif (defined(OSEE_AVR8_ADC_ISR)) && (OSEE_AVR8_ADC_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(ADC_vect, OSEE_AVR8_ADC_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(ADC_vect)
#endif /* OSEE_AVR8_ADC_ISR */

/* EE_READY interrupt vector */
#if (defined(OSEE_AVR8_EE_READY_ISR_TID)) && (OSEE_AVR8_EE_READY_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(EE_READY_vect, OSEE_AVR8_EE_READY_ISR_TID)
#elif (defined(OSEE_AVR8_EE_READY_ISR)) && (OSEE_AVR8_EE_READY_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(EE_READY_vect, OSEE_AVR8_EE_READY_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(EE_READY_vect)
#endif /* OSEE_AVR8_EE_READY_ISR */

/* ANALOG_COMP interrupt vector */
#if (defined(OSEE_AVR8_ANALOG_COMP_ISR_TID)) && (OSEE_AVR8_ANALOG_COMP_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(ANALOG_COMP_vect, OSEE_AVR8_ANALOG_COMP_ISR_TID)
#elif (defined(OSEE_AVR8_ANALOG_COMP_ISR)) && (OSEE_AVR8_ANALOG_COMP_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(ANALOG_COMP_vect, OSEE_AVR8_ANALOG_COMP_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(ANALOG_COMP_vect)
#endif /* OSEE_AVR8_ANALOG_COMP_ISR */

#if (defined(__AVR_ATmega128__)) || (defined(__AVR_ATmega1281__))
/* TIMER3_CAPT interrupt vector */
#if (defined(OSEE_AVR8_TIMER3_CAPT_ISR_TID)) && (OSEE_AVR8_TIMER3_CAPT_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER3_CAPT_vect, OSEE_AVR8_TIMER3_CAPT_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER3_CAPT_ISR)) && (OSEE_AVR8_TIMER3_CAPT_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER3_CAPT_vect, OSEE_AVR8_TIMER3_CAPT_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER3_CAPT_vect)
#endif /* OSEE_AVR8_TIMER3_CAPT_ISR */

/* TIMER3_COMPA interrupt vector */
#if (defined(OSEE_AVR8_TIMER3_COMPA_ISR_TID)) && (OSEE_AVR8_TIMER3_COMPA_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER3_COMPA_vect, OSEE_AVR8_TIMER3_COMPA_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER3_COMPA_ISR)) && (OSEE_AVR8_TIMER3_COMPA_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER3_COMPA_vect, OSEE_AVR8_TIMER3_COMPA_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER3_COMPA_vect)
#endif /* OSEE_AVR8_TIMER3_COMPA_ISR */

/* TIMER3_COMPB interrupt vector */
#if (defined(OSEE_AVR8_TIMER3_COMPB_ISR_TID)) && (OSEE_AVR8_TIMER3_COMPB_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER3_COMPB_vect, OSEE_AVR8_TIMER3_COMPB_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER3_COMPB_ISR)) && (OSEE_AVR8_TIMER3_COMPB_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER3_COMPB_vect, OSEE_AVR8_TIMER3_COMPB_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER3_COMPB_vect)
#endif /* OSEE_AVR8_TIMER3_COMPB_ISR */

/* TIMER3_COMPC interrupt vector */
#if (defined(OSEE_AVR8_TIMER3_COMPC_ISR_TID)) && (OSEE_AVR8_TIMER3_COMPC_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER3_COMPC_vect, OSEE_AVR8_TIMER3_COMPC_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER3_COMPC_ISR)) && (OSEE_AVR8_TIMER3_COMPC_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER3_COMPC_vect, OSEE_AVR8_TIMER3_COMPC_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER3_COMPC_vect)
#endif /* OSEE_AVR8_TIMER3_COMPC_ISR */

/* TIMER3_OVF interrupt vector */
#if (defined(OSEE_AVR8_TIMER3_OVF_ISR_TID)) && (OSEE_AVR8_TIMER3_OVF_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER3_OVF_vect, OSEE_AVR8_TIMER3_OVF_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER3_OVF_ISR)) && (OSEE_AVR8_TIMER3_OVF_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER3_OVF_vect, OSEE_AVR8_TIMER3_OVF_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER3_OVF_vect)
#endif /* OSEE_AVR8_TIMER3_OVF_ISR */

/* USART1_RX interrupt vector */
#if (defined(OSEE_AVR8_USART1_RX_ISR_TID)) && (OSEE_AVR8_USART1_RX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART1_RX_vect, OSEE_AVR8_USART1_RX_ISR_TID)
#elif (defined(OSEE_AVR8_USART1_RX_ISR)) && (OSEE_AVR8_USART1_RX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART1_RX_vect, OSEE_AVR8_USART1_RX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART1_RX_vect)
#endif /* OSEE_AVR8_USART1_RX_ISR */

/* USART1_UDRE interrupt vector */
#if (defined(OSEE_AVR8_USART1_UDRE_ISR_TID)) && (OSEE_AVR8_USART1_UDRE_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART1_UDRE_vect, OSEE_AVR8_USART1_UDRE_ISR_TID)
#elif (defined(OSEE_AVR8_USART1_UDRE_ISR)) && (OSEE_AVR8_USART1_UDRE_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART1_UDRE_vect, OSEE_AVR8_USART1_UDRE_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART1_UDRE_vect)
#endif /* OSEE_AVR8_USART1_UDRE_ISR */

/* USART1_TX interrupt vector */
#if (defined(OSEE_AVR8_USART1_TX_ISR_TID)) && (OSEE_AVR8_USART1_TX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART1_TX_vect, OSEE_AVR8_USART1_TX_ISR_TID)
#elif (defined(OSEE_AVR8_USART1_TX_ISR)) && (OSEE_AVR8_USART1_TX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART1_TX_vect, OSEE_AVR8_USART1_TX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART1_TX_vect)
#endif /* OSEE_AVR8_USART1_TX_ISR */
#endif /* __AVR_ATmega128__ || __AVR_ATmega1281__ */

/* TWI interrupt vector */
#if (defined(OSEE_AVR8_TWI_ISR_TID)) && (OSEE_AVR8_TWI_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TWI_vect, OSEE_AVR8_TWI_ISR_TID)
#elif (defined(OSEE_AVR8_TWI_ISR)) && (OSEE_AVR8_TWI_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TWI_vect, OSEE_AVR8_TWI_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TWI_vect)
#endif /* OSEE_AVR8_TWI_ISR */

/* SPM_READY interrupt vector */
#if (defined(OSEE_AVR8_SPM_READY_ISR_TID)) && (OSEE_AVR8_SPM_READY_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(SPM_READY_vect, OSEE_AVR8_SPM_READY_ISR_TID)
#elif (defined(OSEE_AVR8_SPM_READY_ISR)) && (OSEE_AVR8_SPM_READY_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(SPM_READY_vect, OSEE_AVR8_SPM_READY_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(SPM_READY_vect)
#endif /* OSEE_AVR8_SPM_READY_ISR */

#if (defined(__AVR_ATmega1281__))
/* TIMER4_CAPT interrupt vector */
#if (defined(OSEE_AVR8_TIMER4_CAPT_ISR_TID)) && (OSEE_AVR8_TIMER4_CAPT_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER4_CAPT_vect, OSEE_AVR8_TIMER4_CAPT_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER4_CAPT_ISR)) && (OSEE_AVR8_TIMER4_CAPT_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER4_CAPT_vect, OSEE_AVR8_TIMER4_CAPT_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER4_CAPT_vect)
#endif /* OSEE_AVR8_TIMER4_CAPT_ISR */

/* TIMER4_COMPA interrupt vector */
#if (defined(OSEE_AVR8_TIMER4_COMPA_ISR_TID)) && (OSEE_AVR8_TIMER4_COMPA_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER4_COMPA_vect, OSEE_AVR8_TIMER4_COMPA_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER4_COMPA_ISR)) && (OSEE_AVR8_TIMER4_COMPA_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER4_COMPA_vect, OSEE_AVR8_TIMER4_COMPA_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER4_COMPA_vect)
#endif /* OSEE_AVR8_TIMER4_COMPA_ISR */

/* TIMER4_COMPB interrupt vector */
#if (defined(OSEE_AVR8_TIMER4_COMPB_ISR_TID)) && (OSEE_AVR8_TIMER4_COMPB_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER4_COMPB_vect, OSEE_AVR8_TIMER4_COMPB_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER4_COMPB_ISR)) && (OSEE_AVR8_TIMER4_COMPB_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER4_COMPB_vect, OSEE_AVR8_TIMER4_COMPB_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER4_COMPB_vect)
#endif /* OSEE_AVR8_TIMER4_COMPB_ISR */

/* TIMER4_COMPC interrupt vector */
#if (defined(OSEE_AVR8_TIMER4_COMPC_ISR_TID)) && (OSEE_AVR8_TIMER4_COMPC_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER4_COMPC_vect, OSEE_AVR8_TIMER4_COMPC_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER4_COMPC_ISR)) && (OSEE_AVR8_TIMER4_COMPC_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER4_COMPC_vect, OSEE_AVR8_TIMER4_COMPC_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER4_COMPC_vect)
#endif /* OSEE_AVR8_TIMER4_COMPC_ISR */

/* TIMER4_OVF interrupt vector */
#if (defined(OSEE_AVR8_TIMER4_OVF_ISR_TID)) && (OSEE_AVR8_TIMER4_OVF_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER4_OVF_vect, OSEE_AVR8_TIMER4_OVF_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER4_OVF_ISR)) && (OSEE_AVR8_TIMER4_OVF_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER4_OVF_vect, OSEE_AVR8_TIMER4_OVF_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER4_OVF_vect)
#endif /* OSEE_AVR8_TIMER4_OVF_ISR */

/* TIMER5_CAPT interrupt vector */
#if (defined(OSEE_AVR8_TIMER5_CAPT_ISR_TID)) && (OSEE_AVR8_TIMER5_CAPT_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER5_CAPT_vect, OSEE_AVR8_TIMER5_CAPT_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER5_CAPT_ISR)) && (OSEE_AVR8_TIMER5_CAPT_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER5_CAPT_vect, OSEE_AVR8_TIMER5_CAPT_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER5_CAPT_vect)
#endif /* OSEE_AVR8_TIMER5_CAPT_ISR */

/* TIMER5_COMPA interrupt vector */
#if (defined(OSEE_AVR8_TIMER5_COMPA_ISR_TID)) && (OSEE_AVR8_TIMER5_COMPA_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER5_COMPA_vect, OSEE_AVR8_TIMER5_COMPA_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER5_COMPA_ISR)) && (OSEE_AVR8_TIMER5_COMPA_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER5_COMPA_vect, OSEE_AVR8_TIMER5_COMPA_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER5_COMPA_vect)
#endif /* OSEE_AVR8_TIMER5_COMPA_ISR */

/* TIMER5_COMPB interrupt vector */
#if (defined(OSEE_AVR8_TIMER5_COMPB_ISR_TID)) && (OSEE_AVR8_TIMER5_COMPB_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER5_COMPB_vect, OSEE_AVR8_TIMER5_COMPB_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER5_COMPB_ISR)) && (OSEE_AVR8_TIMER5_COMPB_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER5_COMPB_vect, OSEE_AVR8_TIMER5_COMPB_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER5_COMPB_vect)
#endif /* OSEE_AVR8_TIMER5_COMPB_ISR */

/* TIMER5_COMPC interrupt vector */
#if (defined(OSEE_AVR8_TIMER5_COMPC_ISR_TID)) && (OSEE_AVR8_TIMER5_COMPC_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER5_COMPC_vect, OSEE_AVR8_TIMER5_COMPC_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER5_COMPC_ISR)) && (OSEE_AVR8_TIMER5_COMPC_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER5_COMPC_vect, OSEE_AVR8_TIMER5_COMPC_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER5_COMPC_vect)
#endif /* OSEE_AVR8_TIMER5_COMPC_ISR */

/* TIMER5_OVF interrupt vector */
#if (defined(OSEE_AVR8_TIMER5_OVF_ISR_TID)) && (OSEE_AVR8_TIMER5_OVF_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(TIMER5_OVF_vect, OSEE_AVR8_TIMER5_OVF_ISR_TID)
#elif (defined(OSEE_AVR8_TIMER5_OVF_ISR)) && (OSEE_AVR8_TIMER5_OVF_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(TIMER5_OVF_vect, OSEE_AVR8_TIMER5_OVF_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(TIMER5_OVF_vect)
#endif /* OSEE_AVR8_TIMER5_OVF_ISR */

/* USART2_RX interrupt vector */
#if (defined(OSEE_AVR8_USART2_RX_ISR_TID)) && (OSEE_AVR8_USART2_RX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART2_RX_vect, OSEE_AVR8_USART2_RX_ISR_TID)
#elif (defined(OSEE_AVR8_USART2_RX_ISR)) && (OSEE_AVR8_USART2_RX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART2_RX_vect, OSEE_AVR8_USART2_RX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART2_RX_vect)
#endif /* OSEE_AVR8_USART2_RX_ISR */

/* USART2_UDRE interrupt vector */
#if (defined(OSEE_AVR8_USART2_UDRE_ISR_TID)) && (OSEE_AVR8_USART2_UDRE_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART2_UDRE_vect, OSEE_AVR8_USART2_UDRE_ISR_TID)
#elif (defined(OSEE_AVR8_USART2_UDRE_ISR)) && (OSEE_AVR8_USART2_UDRE_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART2_UDRE_vect, OSEE_AVR8_USART2_UDRE_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART2_UDRE_vect)
#endif /* OSEE_AVR8_USART2_UDRE_ISR */

/* USART2_TX interrupt vector */
#if (defined(OSEE_AVR8_USART2_TX_ISR_TID)) && (OSEE_AVR8_USART2_TX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART2_TX_vect, OSEE_AVR8_USART2_TX_ISR_TID)
#elif (defined(OSEE_AVR8_USART2_TX_ISR)) && (OSEE_AVR8_USART2_TX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART2_TX_vect, OSEE_AVR8_USART2_TX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART2_TX_vect)
#endif /* OSEE_AVR8_USART2_TX_ISR */

/* USART3_RX interrupt vector */
#if (defined(OSEE_AVR8_USART3_RX_ISR_TID)) && (OSEE_AVR8_USART3_RX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART3_RX_vect, OSEE_AVR8_USART3_RX_ISR_TID)
#elif (defined(OSEE_AVR8_USART3_RX_ISR)) && (OSEE_AVR8_USART3_RX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART3_RX_vect, OSEE_AVR8_USART3_RX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART3_RX_vect)
#endif /* OSEE_AVR8_USART3_RX_ISR */

/* USART3_UDRE interrupt vector */
#if (defined(OSEE_AVR8_USART3_UDRE_ISR_TID)) && (OSEE_AVR8_USART3_UDRE_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART3_UDRE_vect, OSEE_AVR8_USART3_UDRE_ISR_TID)
#elif (defined(OSEE_AVR8_USART3_UDRE_ISR)) && (OSEE_AVR8_USART3_UDRE_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART3_UDRE_vect, OSEE_AVR8_USART3_UDRE_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART3_UDRE_vect)
#endif /* OSEE_AVR8_USART3_UDRE_ISR */

/* USART3_TX interrupt vector */
#if (defined(OSEE_AVR8_USART3_TX_ISR_TID)) && (OSEE_AVR8_USART3_TX_ISR_CAT == 2)
OSEE_AVR8_ISR2_DEFINITION(USART3_TX_vect, OSEE_AVR8_USART3_TX_ISR_TID)
#elif (defined(OSEE_AVR8_USART3_TX_ISR)) && (OSEE_AVR8_USART3_TX_ISR_CAT == 1)
OSEE_AVR8_ISR1_DEFINITION(USART3_TX_vect, OSEE_AVR8_USART3_TX_ISR)
#elif (defined(OSEE_MCU_EXTENDED_STATUS))
OSEE_AVR8_ISR_NOT_DEFINED(USART3_TX_vect)
#endif /* OSEE_AVR8_USART3_TX_ISR */
#endif /* __AVR_ATmega1281__ */

#endif /* OSEE_API_DYNAMIC */
