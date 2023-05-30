// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: chatgpt

#ifndef _CHATGPT_UI_H
#define _CHATGPT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Arduino.h"
#include "lvgl.h"
#include "ui_comp.h"
#include "ui_comp_hook.h"
#include "ui_events.h"

extern lv_obj_t *ui_mainScreen;
extern lv_obj_t *ui_questionBox;
extern lv_obj_t *ui_question;
extern lv_obj_t *ui_answeBox;
extern lv_obj_t *ui_answer;
void ui_event_stratButton( lv_event_t * e);
extern lv_obj_t *ui_stratButton;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_chatgpt_png);   // assets\chatgpt.png

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif