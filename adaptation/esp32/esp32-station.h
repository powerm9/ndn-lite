#ifndef STATION_H
#define STATION_H

#ifdef __cplusplus
extern "C" {
#endif

void wifi_begin(void);      // Connects WiFi
char* wifi_get_ip_str(void); // OPTIONAL: a helper to return ESP32 IP as string
uint32_t wifi_get_ip_raw(void); // OPTIONAL: return IP as in_addr_t

#ifdef __cplusplus
}
#endif

#endif
