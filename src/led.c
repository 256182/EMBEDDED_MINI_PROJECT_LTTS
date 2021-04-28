/**
 * @file led.c
 * @author Mehul Kothari
 * @brief C Program to define peripherals and led state
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "ACTIVITY1.h"
/**
 * @brief Function to intitalize peripherals 
 * 
 */
void peripheral_init(void)
{
	LED_DIRECTION_PIN|=(1<<LED_PIN); /**< Set the led pin for output **/

    SENSOR_DIRECTION_PIN&=~(1<<BUTTON_SWITCH); /**< Clear bit DD0(for button sensor) **/

    SENSOR_PORT|=(1<<BUTTON_SWITCH); /**< Set bit DD0(for button sensor) **/

    SENSOR_DIRECTION_PIN&=~(1<<HEATER_SWITCH); /**< Clear bit DD1(for heater) **/

    SENSOR_PORT|=(1<<HEATER_SWITCH); /**< Set bit DD1(for heater) **/

}
/**
 * @brief Function to on/off an led
 * 
 * @param state 
 */
void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN); /**< Led switches on/off based on state **/
}