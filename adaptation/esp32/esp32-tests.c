// #include "esp_heap_caps.h"
// #include "esp_private/esp_clk.h"

// void print_metrics(void) {
//     size_t free_heap = esp_get_free_heap_size();
//     size_t min_free_heap = esp_get_minimum_free_heap_size();
//     size_t internal_free = heap_caps_get_free_size(MALLOC_CAP_INTERNAL);

//     printf("=== Memory Info ===\n");
//     printf("Current free heap: %u bytes\n", (unsigned int) free_heap);
//     printf("Lowest recorded free heap: %u bytes\n", (unsigned int) min_free_heap);
//     printf("Internal RAM free: %u bytes\n", (unsigned int) internal_free);
//     printf("===================\n\n");

//     uint32_t cpu_freq_hz = esp_clk_cpu_freq(); // Returns frequency in Hz
//     printf("CPU frequency: %lu MHz\n", cpu_freq_hz / 1000000);
// }

// void check_compile_defs(void) {

//     #ifdef FEATURE_PERIPH_HWRNG
//         printf("FEATURE_PERIPH_HWRNG set\n");
//     #else
//         printf("FEATURE_PERIPH_HWRNG not set\n");
//     #endif
// }

// void check_esp32_rng(void) {
//     uint8_t random[1];
//     if(ndn_lite_esp32_rng(random, sizeof(random))) {
//     printf("esp32 rng returned success\n");
//     printf("number generated: ");

//     for(int i = 0; i<sizeof(random); i++){
//         printf("%d", random[i]);
//     }
//     printf("\n\n");
//     }
// }
