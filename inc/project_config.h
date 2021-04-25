/**
 * @file project_config.h
 * @author Mehul Kothari
 * @brief To assign macros to ports
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__


/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */

#endif /* __PROJECT_CONFIG_H__ */