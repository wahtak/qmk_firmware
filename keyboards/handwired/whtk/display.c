#include "whtk.h"
#include "bitmaps.h"

// void render_test_pattern(void) {
//     static const char PROGMEM test[] = {
//         255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
//           0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
//         255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
//           0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
//         255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
//           0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
//         255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
//           0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
//     };
//     oled_write_raw_P(test, sizeof(test));
// }


//////////// Animation state machine //////////
#define ANIM_FRAME_TIMEOUT 300

enum anim_state_t {
    IDLE_0,
    IDLE_1,
    IDLE_2,
    IDLE_3,
    IDLE_4,
    PAUSE,
    TAP_0,
    TAP_1,

    NUM_STATES
};

enum anim_state_t anim_state = IDLE_0;
uint32_t last_event = 0;

void frame_timeout_event(void) {
    last_event = timer_read32();

    switch (anim_state) {
        case IDLE_0:
        case IDLE_1:
        case IDLE_2:
        case IDLE_3:
            anim_state++;
            break;
        case IDLE_4:
        case PAUSE:
        default:
            anim_state = IDLE_0;
            break;
        case TAP_0:
        case TAP_1:
            anim_state = PAUSE;
            break;
   }
}

void keypress_event(uint8_t keypress_count) {
    last_event = timer_read32();

    switch (anim_state) {
        case IDLE_0:
        case IDLE_1:
        case IDLE_2:
        case IDLE_3:
        case PAUSE:
        default:
            anim_state = TAP_0 + (keypress_count & 0b1);
            break;
        case TAP_1:
            anim_state = TAP_0;
            break;
        case TAP_0:
            anim_state = TAP_1;
            break;
   }
}

//////////// Animation rendering //////////
enum anim_state_t last_rendered_anim_state = NUM_STATES;

void render_anim(keyboard_state_t keyboard_state) {
    if (keyboard_state.active_layer == LAYER_ALPHA) {
        oled_write_raw_rect_P(anim_frames[anim_state], 10, 2, ANIM_WIDTH, ANIM_HEIGHT);
        last_rendered_anim_state = anim_state;
    }
}

//////////// Main display handling //////////
#define STANDBY_TIMEOUT 30000
#define NUM_COLUMNS OLED_DISPLAY_WIDTH / OLED_FONT_WIDTH

keyboard_state_t last_keyboard_state = {.keypress_count = 0, .active_layer = 255};
uint32_t last_keyboard_state_change = 0;

void render_modifiers(keyboard_state_t keyboard_state) {
    oled_set_cursor(0, 0);

    if (!keyboard_state.modifiers) {
        oled_write_P(PSTR("\n"), false);
        return;
    }

    bool ctrl = keyboard_state.modifiers & MOD_MASK_CTRL;
    bool alt = keyboard_state.modifiers & MOD_MASK_ALT;
    bool shift = keyboard_state.modifiers & MOD_MASK_SHIFT;
    bool super = keyboard_state.modifiers & MOD_MASK_GUI;
    uint8_t length = (ctrl * 5) + (alt * 4) + (shift * 6) + (super * 6) - 1;
    uint8_t padding = (NUM_COLUMNS - length + 1) / 2;

    for (uint8_t i = 0; i < padding; i++) {
        oled_write_P(PSTR(" "), false);
    }
    if (ctrl) oled_write_P(PSTR("CTRL "), false);
    if (alt) oled_write_P(PSTR("ALT "), false);
    if (shift) oled_write_P(PSTR("SHIFT "), false);
    if (super) oled_write_P(PSTR("SUPER"), false);
    oled_write_P(PSTR("\n"), false);
}

void render_layer(keyboard_state_t keyboard_state) {
    // Host Keyboard Layer Status
    switch (keyboard_state.active_layer) {
        case LAYER_ALPHA:
            // oled_write_raw_rect_P(bitmap_alpha, 15, 1, LAYER_BITMAP_WIDTH, LAYER_BITMAP_HEIGHT);
            oled_set_cursor(0, 7);
            oled_write_P(PSTR("    Alpha \n"), false);
            break;
        case LAYER_SYM_NAV:
            // oled_write_raw_rect_P(bitmap_symbol, 0, 1, LAYER_BITMAP_WIDTH, LAYER_BITMAP_HEIGHT);
            oled_set_cursor(0, 2);
            oled_write_P(PSTR(" @<>^ "), false);
            oled_set_cursor(0, 3);
            oled_write_P(PSTR(" #{}* "), false);
            oled_set_cursor(0, 4);
            oled_write_P(PSTR(" $()& "), false);
            oled_set_cursor(0, 5);
            oled_write_P(PSTR(" %[]| "), false);
            oled_write_raw_rect_P(bitmap_nav, 90, 1, LAYER_BITMAP_WIDTH, LAYER_BITMAP_HEIGHT);
            oled_set_cursor(0, 7);
            oled_write_P(PSTR("Symbol          Nav\n"), false);
            break;
        case LAYER_FUN_NUM:
            oled_write_raw_rect_P(bitmap_func, 0, 1, LAYER_BITMAP_WIDTH, LAYER_BITMAP_HEIGHT);
            oled_write_raw_rect_P(bitmap_num, 90, 1, LAYER_BITMAP_WIDTH, LAYER_BITMAP_HEIGHT);
            oled_set_cursor(0, 7);
            oled_write_P(PSTR(" Func           Num\n"), false);
            break;
        case LAYER_UMLAUT:
            oled_write_raw_rect_P(bitmap_alpha, 0, 1, LAYER_BITMAP_WIDTH, LAYER_BITMAP_HEIGHT);
            oled_set_cursor(0, 7);
            oled_write_P(PSTR("Umlaut\n"), false);
            break;
        default:
            oled_set_cursor(0, 7);
            oled_write_P(PSTR("Undefined\n"), false);
        break;
    }
}

void render_mode(keyboard_state_t keyboard_state) {
    uint8_t left = 52;

    if (keyboard_state.active_layer == LAYER_ALPHA) {
        left = 93;
    }

    switch (keyboard_state.mode) {
        case MODE_LINUX:
            oled_write_raw_rect_P(bitmap_linux, left, 2, MODE_BITMAP_WIDTH, MODE_BITMAP_HEIGHT);
            break;
        case MODE_MAC:
            oled_write_raw_rect_P(bitmap_mac, left, 2, MODE_BITMAP_WIDTH, MODE_BITMAP_HEIGHT);
            break;
        default:
            break;
    }
}

void oled_task_user(void) {
    bool redraw = false;
    keyboard_state_t keyboard_state = get_keyboard_state();

    if (!keyboard_state_equal(keyboard_state, last_keyboard_state)) {
        if (keyboard_state.keypress_count != last_keyboard_state.keypress_count) {
            last_event = timer_read32();
            keypress_event(keyboard_state.keypress_count);
        }

        last_keyboard_state = get_keyboard_state();
        last_keyboard_state_change = timer_read32();
        redraw = true;
    }

    if(timer_elapsed32(last_event) > ANIM_FRAME_TIMEOUT) {
        frame_timeout_event();
        redraw = true;
    }

    if(timer_elapsed32(last_keyboard_state_change) > STANDBY_TIMEOUT) {
        oled_off();
    } else if (redraw) {
        oled_clear();
        render_modifiers(keyboard_state);
        render_layer(keyboard_state);
        render_mode(keyboard_state);
        render_anim(keyboard_state);
    }
    // render_test();
}
