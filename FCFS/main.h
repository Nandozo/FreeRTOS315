#ifndef MAIN_H
#define MAIN_H

//FreeRTOS
#include <FreeRTOS.h>
#include <task.h>
#include <queue.h>
//C
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
//Pico SDK
#include "pico/stdlib.h"    //Inlcudes 'hardeware_gpio.h'
#include "pico/binary_info.h"

#ifdef __cplusplus
extern "C" {
    #endif
    /**
     * CONSTANTS
     */
    #define RED_LED_PIN 20

    /**
     * PROTOTYPES
     */

     void led_task_pico(void* unused_arg);
     void led_task_gpio(void* unused_arg);
     void log_debug(const char* msg);
     void log_device_info(void);

     //Function prototype for task code
     void vTaskCode(void *pvParameters);

     #ifdef __cplusplus
} //extern "C"
#endif

#endif //MAIN_H