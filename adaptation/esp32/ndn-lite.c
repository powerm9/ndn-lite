#include "ndn-lite.h"
#include <security/ndn-lite-sec-config.h>

// Temporarily put the helper func here
void
ndn_lite_startup()
{
    register_platform_security_init(ndn_lite_esp32_rng_load_backend);
    printf("Registered eps32 rng\n");

    ndn_security_init();
    printf("Security backend initalised\n");

    ndn_forwarder_init();
    printf("Forwarder initalised\n");
}