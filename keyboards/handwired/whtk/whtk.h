#pragma once

#include "quantum.h"


#define LAYOUT_WHTK(\
  L00, L01, L02, L03, L04, L05,                          R00, R01, R02, R03, R04, R05, \
  L10, L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, R15, \
  L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, R25, \
  L30, L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, R35, \
            L42, L43,                                              R42, R43,           \
                      L44, L45,                          R40, R41,                     \
                                L54, L55,      R50, R51,                               \
                                L52, L53,      R52, R53                                \
  ) \
  { \
    { L00,   L01,   L02, L03, L04, L05 }, \
    { L10,   L11,   L12, L13, L14, L15 }, \
    { L20,   L21,   L22, L23, L24, L25 }, \
    { L30,   L31,   L32, L33, L34, L35 }, \
    { KC_NO, KC_NO, L42, L43, L44, L45 }, \
    { KC_NO, KC_NO, L52, L53, L54, L55 }, \
                                          \
    { R00, R01, R02, R03, R04,   R05   }, \
    { R10, R11, R12, R13, R14,   R15   }, \
    { R20, R21, R22, R23, R24,   R25   }, \
    { R30, R31, R32, R33, R34,   R35   }, \
    { R40, R41, R42, R43, KC_NO, KC_NO }, \
    { R50, R51, R52, R53, KC_NO, KC_NO }  \
  }

#define MIRROR_WHTK { \
    {{5,  6}, {4,  6}, {3,  6}, {2,  6}, {1,  6}, {0,  6}}, \
    {{5,  7}, {4,  7}, {3,  7}, {2,  7}, {1,  7}, {0,  7}}, \
    {{5,  8}, {4,  8}, {3,  8}, {2,  8}, {1,  8}, {0,  8}}, \
    {{5,  9}, {4,  9}, {3,  9}, {2,  9}, {1,  9}, {0,  9}}, \
    {{5, 10}, {4, 10}, {3, 10}, {2, 10}, {1, 10}, {0, 10}}, \
    {{5, 11}, {4, 11}, {3, 11}, {2, 11}, {1, 11}, {0, 11}}, \
                                                            \
    {{5,  0}, {4,  0}, {3,  0}, {2,  0}, {1,  0}, {0,  0}}, \
    {{5,  1}, {4,  1}, {3,  1}, {2,  1}, {1,  1}, {0,  1}}, \
    {{5,  2}, {4,  2}, {3,  2}, {2,  2}, {1,  2}, {0,  2}}, \
    {{5,  3}, {4,  3}, {3,  3}, {2,  3}, {1,  3}, {0,  3}}, \
    {{5,  4}, {4,  4}, {3,  4}, {2,  4}, {1,  4}, {0,  4}}, \
    {{5,  5}, {4,  5}, {3,  5}, {2,  5}, {1,  5}, {0,  5}}, \
  }


////////// Utilities for alternative shifted keycodes //////////
bool check_mod_and_clear(uint16_t mod_keycode);

void mod_set(uint16_t mod_keycode);

void mod_clear(uint16_t mod_keycode);

void mod_restore(uint16_t mod_keycode);

void shift_cleared_alternative(keyrecord_t *record, uint16_t keycode, uint16_t modded_keycode);

void shift_all_alternative(keyrecord_t *record, uint16_t keycode, uint16_t modded_keycode);


////////// Utilities for OLED //////////
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation);

void render_test(void);

void render_qmk_logo(void);

void render_anim(void);

#endif