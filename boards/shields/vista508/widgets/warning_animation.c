#include "lvgl.h"
#define ROTATE_CANVAS_180 true

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_WARNING_DARK
#define LV_ATTRIBUTE_IMG_WARNING_DARK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WARNING_DARK uint8_t
    warning_dark_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#ifdef ROTATE_CANVAS_180
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
        0x30, 0x3c, 0xf3, 0x33, 0xcc, 0xf2, 0x3c, 0xe7, 0x3c, 0x60, 0x1c, 0x73, 0x31, 0xcc, 0xf3,
        0x3c, 0xc7, 0x3e, 0x67, 0xcc, 0x73, 0x31, 0xcc, 0xf3, 0x00, 0xc6, 0x1e, 0xe7, 0xcc, 0x33,
        0x30, 0xcc, 0xf3, 0x01, 0xc2, 0x1f, 0xe1, 0xcc, 0xb3, 0x32, 0xce, 0x03, 0x99, 0xd2, 0x1f,
        0xff, 0xcc, 0x93, 0x32, 0x4c, 0x03, 0x99, 0x92, 0x9f, 0xff, 0xcc, 0xc3, 0x33, 0x0c, 0xf3,
        0x93, 0x9a, 0xcf, 0x67, 0xcc, 0xc3, 0x33, 0x0c, 0xf3, 0xc3, 0x98, 0xce, 0x70, 0x1c, 0xe3,
        0x33, 0x8c, 0x03, 0xc3, 0x38, 0xce, 0x38, 0x3c, 0xe3, 0x33, 0x8e, 0x03, 0xc7, 0x38, 0xcc,
        0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#else
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
        0x33, 0x1c, 0xe3, 0xc0, 0x71, 0xcc, 0xc7, 0x3c, 0x1c, 0x73, 0x1c, 0xc3, 0xc0, 0x31, 0xcc,
        0xc7, 0x38, 0x0e, 0x73, 0x19, 0xc3, 0xcf, 0x30, 0xcc, 0xc3, 0x33, 0xe6, 0xf3, 0x59, 0xc9,
        0xcf, 0x30, 0xcc, 0xc3, 0x33, 0xff, 0xf9, 0x49, 0x99, 0xc0, 0x32, 0x4c, 0xc9, 0x33, 0xff,
        0xf8, 0x4b, 0x99, 0xc0, 0x73, 0x4c, 0xcd, 0x33, 0x87, 0xf8, 0x43, 0x80, 0xcf, 0x33, 0x0c,
        0xcc, 0x33, 0xe7, 0x78, 0x63, 0x00, 0xcf, 0x33, 0x8c, 0xce, 0x33, 0xe6, 0x7c, 0xe3, 0x3c,
        0xcf, 0x33, 0x8c, 0xce, 0x38, 0x06, 0x3c, 0xe7, 0x3c, 0x4f, 0x33, 0xcc, 0xcf, 0x3c, 0x0c,
        0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t warning_dark = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 72,
    .header.h = 20,
    .data_size = 188,
    .data = warning_dark_map,
};

#ifndef LV_ATTRIBUTE_IMG_WARNING_LIGHT
#define LV_ATTRIBUTE_IMG_WARNING_LIGHT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_WARNING_LIGHT uint8_t
    warning_light_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#ifdef ROTATE_CANVAS_180
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x18, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
        0x2f, 0xc3, 0x0c, 0xcc, 0x33, 0x0d, 0xc3, 0x18, 0xc4, 0x5f, 0xe3, 0x8c, 0xce, 0x33, 0x0c,
        0xc3, 0x38, 0xc2, 0x58, 0x33, 0x8c, 0xce, 0x33, 0x0c, 0xff, 0x39, 0xe2, 0x98, 0x33, 0xcc,
        0xcf, 0x33, 0x0c, 0xfe, 0x3d, 0xe1, 0x9e, 0x33, 0x4c, 0xcd, 0x31, 0xfc, 0x66, 0x2d, 0xe1,
        0x80, 0x33, 0x6c, 0xcd, 0xb3, 0xfc, 0x66, 0x6d, 0x61, 0x80, 0x33, 0x3c, 0xcc, 0xf3, 0x0c,
        0x6c, 0x65, 0x31, 0x58, 0x33, 0x3c, 0xcc, 0xf3, 0x0c, 0x3c, 0x67, 0x32, 0x4f, 0xe3, 0x1c,
        0xcc, 0x73, 0xfc, 0x3c, 0xc7, 0x32, 0x27, 0xc3, 0x1c, 0xcc, 0x71, 0xfc, 0x38, 0xc7, 0x34,
        0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x38, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#else
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x18, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
        0x2c, 0xe3, 0x1c, 0x3f, 0x8e, 0x33, 0x38, 0xc3, 0xe4, 0x4c, 0xe3, 0x3c, 0x3f, 0xce, 0x33,
        0x38, 0xc7, 0xf2, 0x4c, 0xe6, 0x3c, 0x30, 0xcf, 0x33, 0x3c, 0xcc, 0x1a, 0x8c, 0xa6, 0x36,
        0x30, 0xcf, 0x33, 0x3c, 0xcc, 0x01, 0x86, 0xb6, 0x66, 0x3f, 0xcd, 0xb3, 0x36, 0xcc, 0x01,
        0x87, 0xb4, 0x66, 0x3f, 0x8c, 0xb3, 0x32, 0xcc, 0x79, 0x87, 0xbc, 0x7f, 0x30, 0xcc, 0xf3,
        0x33, 0xcc, 0x19, 0x47, 0x9c, 0xff, 0x30, 0xcc, 0x73, 0x31, 0xcc, 0x1a, 0x43, 0x1c, 0xc3,
        0x30, 0xcc, 0x73, 0x31, 0xc7, 0xfa, 0x23, 0x18, 0xc3, 0xb0, 0xcc, 0x33, 0x30, 0xc3, 0xf4,
        0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x38, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t warning_light = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 72,
    .header.h = 20,
    .data_size = 188,
    .data = warning_light_map,
};
