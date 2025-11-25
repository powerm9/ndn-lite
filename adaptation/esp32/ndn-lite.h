/*
 * Copyright (C) 2019 Xinyu Ma
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v3.0. See the file LICENSE in the top level
 * directory for more details.
 */
#ifndef NDN_LITE_H
#define NDN_LITE_H

#include "ndn-constants.h"
#include "ndn-enums.h"
#include "ndn-error-code.h"
#include "ndn-services.h"
#include "encode/key-storage.h"
#include "forwarder/forwarder.h"
#include "encode/wrapper-api.h"
#include "adapt-consts.h"
#include "esp32-face.h"
#include "esp32-rng.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void
ndn_lite_startup(void);

#ifdef __cplusplus
};
#endif

#endif // NDN_LITE_H