# Automatically include all .c files in core NDN-Lite folders
file(GLOB ENCODE_SRC "encode/*.c")
file(GLOB FACE_SRC "face/*.c")
file(GLOB FORWARDER_SRC "forwarder/*.c")
file(GLOB UTIL_SRC "util/*.c")
file(GLOB SECURITY_SRC "security/*.c")  # optional
file(GLOB SECURITY_DEF_SRC "security/default-backend/*.c")
file(GLOB MICROECC_SRC "security/default-backend/sec-lib/micro-ecc/*.c")
file(GLOB TINYCRYPT_SRC "security/default-backend/sec-lib/tinycrypt/*.c")
file(GLOB UTIL_SRC "util/*.c")
file(GLOB ADAPT_SRC "adaptation/esp32/*.c")

idf_component_register(
    SRCS
        ${ADAPT_SRC}
        ${ENCODE_SRC}
        ${FACE_SRC}
        ${FORWARDER_SRC}
        ${UTIL_SRC}
        ${SECURITY_SRC}
        ${SECURITY_DEF_SRC}
        ${MICROECC_SRC}
        ${TINYCRYPT_SRC}


    INCLUDE_DIRS
        "."
        "encode"
        "face"
        "forwarder"
        "util"
        "security"
        "security/default-backend"
        "security/default-backend/sec-lib/micro-ecc"
        "security/default-backend/sec-lib/tinycrypt"
        "adaptation/esp32/"

    REQUIRES
        esp_timer freertos lwip esp_netif esp_wifi nvs_flash

)

idf_build_set_property(COMPILE_DEFINITIONS FEATURE_PERIPH_HWRNG APPEND)
idf_build_set_property(COMPILE_DEFINITIONS DEBUG_UDP_FACE APPEND)