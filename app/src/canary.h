/*
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Canary module: one tiny function at the end of the canary trace chain (plan task 5.3).
 *
 * It belongs to the system configuration canary (SYS-CFG-0001) and is not part of the robot arm.
 */

#ifndef ROBARM_CANARY_H_
#define ROBARM_CANARY_H_

#include <stdint.h>

/**
 * @brief Return the new canary output for an input value.
 *
 * @xdid{SW-IMPL-0001}
 * Implements SW-DD-0001.
 *
 * @param input The new canary input value.
 * @return The new output value; it equals @p input.
 */
int32_t canary_update(int32_t input);

#endif /* ROBARM_CANARY_H_ */
