#ifndef NDN_LITE_ESP32_RNG_H
#define NDN_LITE_ESP32_RNG_H

#include <stdint.h>
#include <stddef.h>     // for size_t

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Fill a buffer with random bytes using ESP32 hardware RNG.
 *
 * @param dest Pointer to buffer to fill
 * @param size Number of bytes to fill
 * @return 1 on success, 0 on failure
 */
int ndn_lite_esp32_rng(uint8_t *dest, size_t size);

/**
 * @brief Register the ESP32 RNG function with NDN-Lite.
 *
 * This function sets ndn_lite_esp32_rng as the backend RNG
 * so that NDN-Lite will call it whenever random bytes are needed.
 */
void ndn_lite_esp32_rng_load_backend(void);

#ifdef __cplusplus
}
#endif

#endif // NDN_LITE_ESP32_RNG_H
