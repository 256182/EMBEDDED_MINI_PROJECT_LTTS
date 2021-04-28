/**
 * @file TemperatureSensor.c
 * @author Mehul Kothari
 * @brief Defining macros for temperature sensor
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "ACTIVITY2.h"
/**
 * @brief Function to Initialize ADC
 * 
 */


void InitAdc(){
    ADC_MUX|=(1<<ADC_VOLTAGE_REFERENCE); /**<  To get 5v as reference voltage  **/

    ADC_STATUS_CONTROL|=(1<<ADC_ENABLE)|(7<<ADC_PRESCALER); /**<  To enable ADC and set a 128 bit Prescaler **/
}


/**
 * @brief Function to select channel of ADC
 * 
 * @param channel 
 * @return uint16_t 
 */


uint16_t ReadAdc(uint8_t channel){
    ADC_MUX&=0xF8; /**< Clear mux pins of adc**/

    channel=channel&0b00000111; /**< set channel value **/

    ADC_MUX|=channel; /**< Assign mux value based on the channel **/ 

    ADC_STATUS_CONTROL|=(1<<ADC_START_CONVERSION); /**< To start ADC conversion **/

    while(!(ADC_STATUS_CONTROL&(1<<ADC_INTERRUPT))); /**<  Wait till last bit is converted and interrupt flag is set **/

    ADC_STATUS_CONTROL|(1<<ADC_INTERRUPT); /**<  Set interrupt flag **/

    return(ADC); /**<  return the converted bits **/
}