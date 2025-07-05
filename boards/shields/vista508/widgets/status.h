/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>
#include "util.h"

struct zmk_widget_status {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_color_t cbuf0[CANVAS_SIZE * CANVAS_SIZE];
    lv_color_t cbuf1[CANVAS_SIZE * CANVAS_SIZE];
    lv_color_t cbuf2[CANVAS_SIZE * CANVAS_SIZE];
    lv_color_t cbuf3[CANVAS_SIZE * CANVAS_SIZE];
    lv_color_t cbuf4[75 * 21];
    struct status_state state;
};

struct zmk_widget_battery_status {
    sys_snode_t node;
    lv_obj_t *obj;
};

int zmk_widget_status_init(struct zmk_widget_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_status_obj(struct zmk_widget_status *widget);

int zmk_widget_battery_status_init(struct zmk_widget_battery_status *widget, lv_obj_t *parent);
lv_obj_t *zmk_widget_battery_status_obj(struct zmk_widget_battery_status *widget);
