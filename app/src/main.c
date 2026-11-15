/*
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Entry point of the robot arm firmware.
 *
 * Skeleton: the firmware only prints a start message. The joint control comes in Phase 5.
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

/**
 * @brief Firmware entry point, called by the Zephyr kernel after start-up.
 *
 * @return 0 always.
 */
int main(void)
{
	printk("robarm-sw firmware skeleton on %s\n", CONFIG_BOARD);
	return 0;
}
