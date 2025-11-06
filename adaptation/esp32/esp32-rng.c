#include "esp_random.h"
#include "esp32-rng.h"
#include "security/ndn-lite-rng.h"

int ndn_lite_esp32_rng(uint8_t *out, size_t len){
    esp_fill_random(out, len);
    return 1;
}

void ndn_lite_esp32_rng_load_backend(void) {
    ndn_rng_backend_t* backend = ndn_rng_get_backend();
    backend->rng = ndn_lite_esp32_rng;
}