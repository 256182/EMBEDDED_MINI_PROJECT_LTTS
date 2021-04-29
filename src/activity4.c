/**
 * @file activity4.c
 * @author Mehul Kothari
 * @brief Serial communication using usart
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"activity4.h"

/**
 * @brief Initialize usart
 * 
 * @param ubrr_value 
 */



void USARTInit(uint16_t ubrr_value){
    USART_BAUD_PIN_L = ubrr_value;
    USART_BAUD_PIN_H  =SET_BAUD_H;
    USART_CONTROL_PIN_C =SET_CONTROL_PIN_C_8BIT;
    USART_CONTROL_PIN_B = SET_CONTROL_PIN_B;
}

/**
 * @brief write to usart
 * 
 * @param data 
 */

void USARTWriteChar(char data){
    if(data=='A'){
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='2';
        USART_DATA_PIN='0';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';
    }
    else if(data=='B'){
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='2';
        USART_DATA_PIN='5';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';
    }
    else if(data=='C'){
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='2';
        USART_DATA_PIN='9';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';
    }
    else{
        while(TRANSMITTING_DATA){}
        USART_DATA_PIN='3';
        USART_DATA_PIN='3';
        USART_DATA_PIN='C';
        USART_DATA_PIN='\n';

    }

}