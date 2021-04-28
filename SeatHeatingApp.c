/**
 * @file SeatHeatingApp.c
 * @author Mehul Kothari
 * @brief Seat Heating Application
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"ACTIVITY1.h"

#include"ACTIVITY2.h"

#include"ACTIVITY3.h"

#include"ACTIVITY4.h"
/**
 * @brief Final code for the application
 * 
 * @return int 
 */

int main(void)
{
    uint16_t tmp;
    // Initialize peripherals
    peripheral_init();
    while(1)
    {
        if((!(SENSOR_PIN&(1<<BUTTON_SWITCH))) && (!(SENSOR_PIN&(1<<HEATER_SWITCH))))//If switch_1 and switch_2 is ON
        {
            change_led_state(LED_ON);
            InitAdc();
            tmp=ReadAdc(0);
        }
        else
        {
            change_led_state(LED_OFF);
        }
    }
    return 0;
}
