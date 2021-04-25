/**
 * @file project_main.c
 * @author Mehul Kothari(mehulkothari14@gmail.com)
 * @brief Activity 1
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "user_utils.h"
#include "LED.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	DDRB|=(1<<PB0); //Set the led pin for output

    DDRD&=~(1<<PD0); //Clear bit DD0(for button sensor)

    PORTD|=(1<<PD0); //Set bit DD0(for button sensor)

    DDRD&=~(1<<PD1); //Clear bit DD1(for heater)

    PORTD|=(1<<PD1); //Set bit DD1(for heater)

}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	 while(1){
        if((!(PIND&(1<<PD0))) && (!(PIND&(1<<PD1)))){
            change_led_state(LED_ON);
			delay_ms(LED_ON_TIME);
        }
        else{
            change_led_state(LED_ON);
			delay_ms(LED_OFF_TIME);
        }
    }

    return 0;
}
