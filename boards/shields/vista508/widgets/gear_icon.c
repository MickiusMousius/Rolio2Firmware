#include "lvgl.h"


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_GEAR_ICON
#define LV_ATTRIBUTE_IMG_GEAR_ICON
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_GEAR_ICON uint8_t gear_icon_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x1f, 0x80, 0x00, 
  0x00, 0x3f, 0xc0, 0x00, 
  0x00, 0x3f, 0xc0, 0x00, 
  0x00, 0x3f, 0xc0, 0x00, 
  0x18, 0x7f, 0xe1, 0x80, 
  0x3f, 0xff, 0xff, 0xc0, 
  0x3f, 0xff, 0xff, 0xc0, 
  0x7f, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xe0, 
  0xff, 0xff, 0xff, 0xf0, 
  0x7f, 0xff, 0xff, 0xe0, 
  0x3f, 0xff, 0xff, 0xc0, 
  0x1f, 0xff, 0xff, 0x80, 
  0x1f, 0xff, 0xff, 0x80, 
  0x1f, 0xff, 0xff, 0x80, 
  0x1f, 0xff, 0xff, 0x80, 
  0x3f, 0xff, 0xff, 0xc0, 
  0x7f, 0xff, 0xff, 0xe0, 
  0xff, 0xff, 0xff, 0xf0, 
  0x7f, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xe0, 
  0x3f, 0xff, 0xff, 0xc0, 
  0x3f, 0xff, 0xff, 0xc0, 
  0x18, 0x7f, 0xe1, 0x80, 
  0x00, 0x3f, 0xc0, 0x00, 
  0x00, 0x3f, 0xc0, 0x00, 
  0x00, 0x3f, 0xc0, 0x00, 
  0x00, 0x1f, 0x80, 0x00, 
};

const lv_img_dsc_t gear_icon = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 28,
  .header.h = 28,
  .data_size = 120,
  .data = gear_icon_map,
};
