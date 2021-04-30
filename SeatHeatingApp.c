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


/**
 * @brief Final code for the application
 * 
 * @return int 
 */

int main(void)
{
    uint16_t volatile tmp;
    char tmp_type;
    uint16_t const volatile ADC_value = 0;
    uint16_t const volatile baud_value = 103;
    // Initialize peripherals
    peripheral_init();
    
    while(1)
    {
        if(BOTH_SWITCH_CONNECTED)//If switch_1 and switch_2 is ON
        {
            change_led_state(LED_ON);
            InitAdc();
            tmp=ReadAdc(ADC_value);
            InitTimer1();
            tmp_type=GeneratePWM(tmp);
            
            USARTInit(baud_value);
            USARTWriteChar(tmp_type);
            
            
        }
        else
        {
            change_led_state(LED_OFF);
        }
    }
    return 0;
}
