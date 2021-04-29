/**
 * @file ACTIVITY3.h
 * @author Mehul Kothari
 * @brief Defining macros for timer functions
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H_
#define __ACTIVITY3_H_


#define TIMER1_A (TCCR1A) /**<Timer1_A Pin **/
#define TIMER1_B (TCCR1B) /**<Timer1_B Pin **/
#define COMPARE_A (COM1A1) /**<Compare Output Mode for Channel A**/
#define WAVEFORM_MODE_10 (WGM10) /**<Waveform Generation Mode 10**/
#define WAVEFORM_MODE_11 (WGM11) /**<Waveform Generation Mode 11**/
#define WAVEFORM_MODE_12 (WGM12) /**<Waveform Generation Mode 12**/
#define CLOCK_SELECT_11 (CS11) /**<Clock Select Mode 11 **/
#define CLOCK_SELECT_10 (CS10) /**<Clock Select Mode 10 **/
#define LED_DIRECTION_PIN (DDRB)  /**< LED Data Direction Number **/
#define LED_PIN_1  (PORTB1)   /**< LED Pin number  **/
#define OUTPUT_COMPARE_A (OCR1A) /**<Output Compare Register 1 A **/
#define F_CPU 16000000UL /**< Clock Frequency of MCU is 16 MHz */

/**
 * Include files
 */ 
#include <avr/io.h>
#include <util/delay.h>

/**
 * Function Definitions
 */

void InitTimer1();
void delay_milli(uint32_t delay_time);
char GeneratePWM(uint16_t Temperature);

#endif /* ACTIVITY3.h */