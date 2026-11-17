/*
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Canary module (SW-DD-0001): the output follows the input at once.
 */

#include "canary.h"

int32_t canary_update(int32_t input)
{
	return input;
}
