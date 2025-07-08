/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/init.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/sys_io.h>
#include <zephyr/devicetree.h>

static int pinmux_rolio_init(void) {

    const struct device *p0 = DEVICE_DT_GET(DT_NODELABEL(gpio0));
    // Disable the haptic driver pin
    gpio_pin_configure(p0, 24, GPIO_OUTPUT);
    gpio_pin_set(p0, 24, 0);

    return 0;
}

SYS_INIT(pinmux_rolio_init, APPLICATION, CONFIG_APPLICATION_INIT_PRIORITY);
