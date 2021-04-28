/**
 * @file activity2.h
 * @author Mehul Kothari
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY2_H_
#define __ACTIVITY2_H_

#define ADC_MUX (ADMUX)   /**< ADC MUX Register **/
#define ADC_STATUS_CONTROL (ADCSRA)    /**< ADC Status and Control Register A**/ 
#define ADC_VOLTAGE_REFERENCE (REFS0)    /**< 5V Reference voltage  **/
#define ADC_ENABLE (ADEN)      /**< Enable pin **/
#define ADC_START_CONVERSION (ADSC)      /**< Start ADC CONVERSION **/
#define ADC_INTERRUPT (ADIF) /**< ADC Interrupt Flag **/
#define ADC_PRESCALER (ADPS0) /**< ADC Prescaler Pin **/

/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize ADC 
 * 
 */
void InitAdc();
/**
 * @brief Function to select channel in adc 
 * 
 * @param channel 
 * @return uint16_t 
 */

uint16_t ReadAdc(uint8_t channel);

#endif /* ACTIVITY2.H */