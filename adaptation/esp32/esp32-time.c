#include "esp_timer.h"
#include "esp32-time.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "util/uniform-time.h"


ndn_time_ms_t ndn_time_now_ms(void){
    int64_t time_us = esp_timer_get_time();
    return (ndn_time_ms_t)time_us / 1000ULL; 
}

ndn_time_us_t ndn_time_now_us(void){
    return (ndn_time_ms_t)esp_timer_get_time();
}

void ndn_time_sleep_ms(uint32_t ms) {
    vTaskDelay((ms + portTICK_PERIOD_MS - 1) / portTICK_PERIOD_MS);
}

