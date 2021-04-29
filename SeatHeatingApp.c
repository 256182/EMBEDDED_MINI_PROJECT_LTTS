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
#include"activity1.h"

#include"activity2.h"

#include"activity3.h"

#include"activity4.h"

#include<util/delay.h>
/**
 * @brief Final code for the application
 * 
 * @return int 
 */

int main(void)
{
    uint16_t tmp=0;
    // Initialize peripherals
    peripheral_init();
    InitAdc();
    InitTimer1();
    while(1)
    {
        if((!(SENSOR_PIN&(1<<BUTTON_SWITCH))) && (!(SENSOR_PIN&(1<<HEATER_SWITCH))))//If switch_1 and switch_2 is ON
        {
            change_led_state(LED_ON);
            
            tmp=ReadAdc(0);
            GeneratePWM(tmp);
            
            
        }
        else
        {
            change_led_state(LED_OFF);
        }
    }
    return 0;
}
