/**
 * @file unit.h
 * @brief Unit API declarations
 *
 * Copyright (c) 2020-2022 KORG Inc. All rights reserved.
 *
 */

#ifndef UNIT_H_
#define UNIT_H_

#include <stdint.h>

#include "attributes.h"
#include "runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const unit_header_t unit_header;

int8_t unit_init(const unit_runtime_desc_t *);
void unit_teardown();
void unit_reset();
void unit_resume();
void unit_suspend();
void unit_render(const float *, float *, uint32_t);
uint8_t unit_get_preset_index();
const char * unit_get_preset_name(uint8_t);
void unit_load_preset(uint8_t);
int32_t unit_get_param_value(uint8_t);
const char * unit_get_param_str_value(uint8_t, int32_t);
const uint8_t * unit_get_param_bmp_value(uint8_t, int32_t);
void unit_set_param_value(uint8_t, int32_t);
void unit_set_tempo(uint32_t);
void unit_note_on(uint8_t, uint8_t);
void unit_note_off(uint8_t);
void unit_gate_on(uint8_t);
void unit_gate_off(void);
void unit_all_note_off(void);
void unit_pitch_bend(uint16_t);
void unit_channel_pressure(uint8_t);
void unit_aftertouch(uint8_t, uint8_t);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // UNIT_H_
