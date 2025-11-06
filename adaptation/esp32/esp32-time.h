#ifndef NDN_LITE_ESP32_TIME_H
#define NDN_LITE_ESP32_TIME_H

#include <stdint.h>
#include <util/uniform-time.h>

ndn_time_ms_t ndn_time_now_ms(void);

ndn_time_us_t ndn_time_now_us(void);

void ndn_time_sleep_ms(uint32_t ms);

#endif
