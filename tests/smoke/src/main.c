/*
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Smoke test of the ztest set-up (native_sim).
 *
 * It verifies no requirement, so it has no SW-TC ID. Real test cases get their ID from the
 * ledger, written into the comment above each ZTEST by a tool (D80).
 */

#include <zephyr/ztest.h>

ZTEST_SUITE(robarm_smoke, NULL, NULL, NULL, NULL, NULL);

/** @brief The test suite builds, starts and reports a pass. */
ZTEST(robarm_smoke, test_runs)
{
	zassert_equal(1 + 1, 2, "arithmetic is broken");
}
