/**
 * @file activity1.h
 * @author Mehul Kothari
 * @brief Defining macros and prototyping functions
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define LED_DIRECTION_PIN (DDRB)  /**< LED Data Direction Number */
#define SENSOR_PORT (PORTD)    /**< Sensor Port Number */
#define SENSOR_PIN (PIND)  /**< Sensor Pin **/
#define BUTTON_SWITCH  (PORTD0)   /**< BUTTON Switch  */
#define SENSOR_DIRECTION_PIN (DDRD)  /**< Sensor Data Direction Number */
#define HEATER_SWITCH (PORTD1)   /**< HEATER Switch  */
/**
 * Include files
 */ 
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);

/**
 * @brief Initialize peripherals 
 * 
 */
void peripheral_init(void);

#endif /* ACTIVITY1.H */