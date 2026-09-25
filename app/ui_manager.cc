#include "app/ui_manager.h"
#include "lvgl/lvgl.h"

void lvgl_app_main(void)
{
    lv_obj_t *scr = lv_screen_active();
    lv_obj_remove_style_all(scr);
    lv_obj_set_layout(scr, LV_LAYOUT_FLEX);
    lv_obj_set_flex_flow(scr, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(scr, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_t *side = lv_obj_create(scr);
    lv_obj_set_flex_grow(side, 1);
    lv_obj_set_height(side, lv_pct(100));
    lv_obj_t *cont = lv_obj_create(scr);
    lv_obj_set_flex_grow(cont, 5);
    lv_obj_set_height(cont, lv_pct(100));
}
