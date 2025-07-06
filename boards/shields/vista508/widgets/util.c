/*
 *
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <zephyr/kernel.h>
#include "util.h"

LV_IMG_DECLARE(bolt);

void rotate_canvas(lv_obj_t *canvas, lv_color_t cbuf[], uint8_t widget_height) {
    static lv_color_t cbuf_tmp[DISPLAY_WIDTH * DISPLAY_HEIGHT];
    memcpy(cbuf_tmp, cbuf, sizeof(cbuf_tmp));
    lv_img_dsc_t img;
    img.data = (void *)cbuf_tmp;
    img.header.cf = LV_IMG_CF_TRUE_COLOR;
    img.header.w = DISPLAY_WIDTH;
    img.header.h = widget_height;

    // lv_canvas_fill_bg(canvas, LVGL_BACKGROUND, LV_OPA_COVER);
    //  lv_canvas_transform(canvas, &img, 900, LV_IMG_ZOOM_NONE, -1, 0, CANVAS_SIZE / 2,
    //                      CANVAS_SIZE / 2, false);

    /*
    void lv_canvas_transform(lv_obj_t * obj
                             lv_img_dsc_t * src_img,
                             int16_t angle,
                             uint16_t zoom,
                             lv_coord_t offset_x,
                             lv_coord_t offset_y,
                             int32_t pivot_x,
                             int32_t pivot_y,
                             bool antialias)
    */

    lv_canvas_transform(canvas,            // Target canvas
                        &img,              // Image array
                        1800,              // Angle
                        LV_IMG_ZOOM_NONE,  // Don't zoom
                        -1,                // Output X
                        0,                 // Output Y
                        DISPLAY_WIDTH / 2, // Rotate about center of the display
                        widget_height / 2, // Rotate about the vertical center of the widget
                        false);
}

void init_label_dsc(lv_draw_label_dsc_t *label_dsc, lv_color_t color, const lv_font_t *font,
                    lv_text_align_t align) {
    lv_draw_label_dsc_init(label_dsc);
    label_dsc->color = color;
    label_dsc->font = font;
    label_dsc->align = align;
}

void init_rect_dsc(lv_draw_rect_dsc_t *rect_dsc, lv_color_t bg_color) {
    lv_draw_rect_dsc_init(rect_dsc);
    rect_dsc->bg_color = bg_color;
}

void init_line_dsc(lv_draw_line_dsc_t *line_dsc, lv_color_t color, uint8_t width) {
    lv_draw_line_dsc_init(line_dsc);
    line_dsc->color = color;
    line_dsc->width = width;
}

void init_arc_dsc(lv_draw_arc_dsc_t *arc_dsc, lv_color_t color, uint8_t width) {
    lv_draw_arc_dsc_init(arc_dsc);
    arc_dsc->color = color;
    arc_dsc->width = width;
}
