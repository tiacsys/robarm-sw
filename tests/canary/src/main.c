/*
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Canary test suite (plan task 5.3, configuration canary SYS-CFG-0001).
 */

#include <zephyr/kernel.h>
#include <zephyr/ztest.h>

#include "canary.h"

ZTEST_SUITE(canary, NULL, NULL, NULL, NULL, NULL);

/**
 * @brief The canary output follows a changed input within 1 ms.
 *
 * Test case: SW-TC-0001. Verifies SW-REQ-0001.
 */
ZTEST(canary, test_output_follows_input)
{
	static const int32_t inputs[] = {0, 1, -1, 1000, INT32_MIN, INT32_MAX};

	for (size_t i = 0; i < ARRAY_SIZE(inputs); i++) {
		uint32_t start = k_cycle_get_32();
		int32_t out = canary_update(inputs[i]);
		uint32_t us = k_cyc_to_us_ceil32(k_cycle_get_32() - start);

		zassert_equal(out, inputs[i], "output %d does not follow input %d", out, inputs[i]);
		zassert_true(us <= 1000U, "update took %u us, more than 1 ms", us);
	}
}
