#include "whtk.h"

void render_test(void) {
    static const char PROGMEM test[] = {
        255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
          0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
        255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
          0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
        255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
          0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
        255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,
          0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,  0,255,
    };
    oled_write_raw_P(test, sizeof(test));
}

void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}

//////////// Animation state machine //////////
#define ANIM_WIDTH 62
#define ANIM_HEIGHT 5
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

//////////// Animation frames //////////
// Images credit j-inc(/James Incandenza) and pixelbenny.
static const char PROGMEM anim_frames[NUM_STATES][ANIM_WIDTH * ANIM_HEIGHT] = {
    // IDLE_0
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 16,  8,  8,  4,  4,  4,  8, 48, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 24,100,130,  2,  2,  2,  2,  2,  1,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,192,193,193,194,  4,  8, 16, 32, 64,128,  0,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,192, 56,  4,  3,  0,  0,  0,  0,  0,  0,  0, 12, 12, 12, 13,  1,  0, 64,160, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  8,  8, 16, 16, 16, 16, 16, 17, 15,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  2,  2,  4,  4,  8,  8,  8,  8,  8,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // IDLE_1
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16, 16,  8,  8,  4,  4,  4,  8, 48, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 24,100,130,  2,  2,  2,  2,  2,  1,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,192,193,193,194,  4,  8, 16, 32, 64,128,  0,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,192, 56,  4,  3,  0,  0,  0,  0,  0,  0,  0, 12, 12, 12, 13,  1,  0, 64,160, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  8,  8, 16, 16, 16, 16, 16, 17, 15,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  2,  2,  4,  4,  8,  8,  8,  8,  8,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // IDLE_2
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128, 64, 64, 64, 64, 32, 32, 32, 32, 16,  8,  4,  2,  2,  4, 24, 96,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 60,194,  1,  1,  2,  2,  4,  4,  2,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 96, 96,  0,129,130,130,132,  8, 16, 32, 64,128,  0,  0,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,128,112, 25,  6,  0,  0,  0,  0,  0,  0,  0, 24, 24, 24, 27,  3,  0, 64,160, 34, 36, 20, 18, 18, 18, 11,  8,  8,  8,  8,  5,  5,  9,  9, 16, 16, 16, 16, 16, 17, 15,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  2,  2,  4,  4,  8,  8,  8,  8,  8,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // IDLE_3
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16,  8,  4,  2,  1,  1,  2, 12, 48, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 30,225,  0,  0,  1,  1,  2,  2,  1,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,192,193,193,194,  4,  8, 16, 32, 64,128,  0,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,128,112, 12,  3,  0,  0,  0,  0,  0,  0,  0, 12, 12, 12, 13,  1,  0, 64,160, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  8,  8, 16, 16, 16, 16, 16, 17, 15,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  2,  2,  4,  4,  8,  8,  8,  8,  8,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // IDLE_4
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16,  8,  8,  4,  2,  2,  2,  4, 56, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 28,226,  1,  1,  2,  2,  2,  2,  1,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,192,193,193,194,  4,  8, 16, 32, 64,128,  0,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,128,112, 12,  3,  0,  0,  0,  0,  0,  0,  0, 12, 12, 12, 13,  1,  0, 64,160, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  8,  8, 16, 16, 16, 16, 16, 17, 15,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  2,  2,  4,  4,  8,  8,  8,  8,  8,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // PAUSE
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16,  8,  4,  2,  1,  1,  2, 12, 48, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 30,225,  0,  0,  1,  1,  2,  2,129,128,128,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,  0,  1,225, 26,  6,  9, 49, 53,  1,138,124,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,128,112, 12,  3,  0,  0, 24,  6,  5,152,153,132,195,124, 65, 65, 64, 64, 32, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  4,  4,  4,  4,  2,  2,  2,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // TAP_0
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16,  8,  4,  2,  1,  1,  2, 12, 48, 64,128,  0,  0,  0,  0,  0,  0,  0,248,248,248,248,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 30,225,  0,  0,  1,  1,  2,  2,129,128,128,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,  0,  1,  1,  2,  4,  8, 16, 32, 67,135,  7,  1,  0,184,188,190,159, 95, 95, 79, 76, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,128,112, 12,  3,  0,  0, 24,  6,  5,152,153,132, 67,124, 65, 65, 64, 64, 32, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  8,  8, 16, 16, 16, 16, 16, 17, 15,  1, 61,124,252,252,252,252,252, 60, 12,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,  2,  2,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  3,  3,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
    // TAP_1
    {
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,128, 64, 64, 32, 32, 32, 32, 16, 16, 16, 16,  8,  4,  2,  1,  1,  2, 12, 48, 64,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0, 30,225,  0,  0,  1,  1,  2,  2,  1,  0,  0,  0,  0,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,  0, 48, 48,  0,  0,  1,225, 26,  6,  9, 49, 53,  1,138,124,  0,  0,128,128,128,128, 64, 64, 64, 64, 32, 32, 32,
           0,  0,  0,  0,  0,  0,  0,  0,128,112, 12,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  0, 64,160, 33, 34, 18, 17, 17, 17,  9,  8,  8,  8,  8,  4,  4,  4,  4,  4,  4,  2,  2,  2,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           8,  8,  4,  4,  4,  4,  4,  2,  3,122,122,121,121,121,121, 57, 49,  2,  2,  4,  4,  8,  8,  8,136,136,135,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
           0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48,120,124,254,255, 63,  7,  0,  0,  0,  0,255,255,127,127, 63, 62, 28, 24,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    },
};


//////////// Animation rendering //////////

enum anim_state_t last_rendered_anim_state = NUM_STATES;

void render_anim(void) {
    if(timer_elapsed32(last_event) > ANIM_FRAME_TIMEOUT) {
        frame_timeout_event();
    }

    if (last_rendered_anim_state != anim_state) {
        oled_write_raw_rect_P(anim_frames[anim_state], 1, 2, ANIM_WIDTH, ANIM_HEIGHT);
        last_rendered_anim_state = anim_state;
    }
}

//////////// Main display handling //////////
#define STANDBY_TIMEOUT 30000

keyboard_state_t last_keyboard_state = {.keypress_count = 0, .active_layer = 255};
uint32_t last_keyboard_state_change = 0;

void render_title(void) {
    oled_set_cursor(8, 0);
    oled_write_P(PSTR("~ whtk ~\n"), false);
}

void render_modifiers(keyboard_state_t keyboard_state) {
    oled_set_cursor(2, 7);

    if (!keyboard_state.modifiers) {
        oled_write_P(PSTR("\n"), false);
        return;
    }

    bool ctrl = keyboard_state.modifiers & MOD_MASK_CTRL;
    bool alt = keyboard_state.modifiers & MOD_MASK_ALT;
    bool shift = keyboard_state.modifiers & MOD_MASK_SHIFT;
    bool gui = keyboard_state.modifiers & MOD_MASK_GUI;
    uint8_t padding = (!ctrl + !alt  + !shift + !gui) * 2;

    for (uint8_t i = 0; i < padding; i++) {
        oled_write_P(PSTR(" "), false);
    }
    if (ctrl) oled_write_P(PSTR("CTRL "), false);
    if (alt) oled_write_P(PSTR("ALT "), false);
    if (shift) oled_write_P(PSTR("SHIFT "), false);
    if (gui) oled_write_P(PSTR("GUI"), false);
    oled_write_P(PSTR("\n"), false);
}

void render_layer(keyboard_state_t keyboard_state) {
    // Host Keyboard Layer Status
    oled_set_cursor(12, 4);
    switch (keyboard_state.active_layer) {
        case LAYER_ALPHA:
            oled_write_P(PSTR(" Alpha \n"), false);
            break;
        case LAYER_FUNC:
            oled_write_P(PSTR(" Func  \n"), false);
            break;
        case LAYER_MOUSE:
            oled_write_P(PSTR(" Mouse \n"), false);
            break;
        case LAYER_NUMERIC:
            oled_write_P(PSTR("Numeric\n"), false);
            break;
        case LAYER_UMLAUT:
            oled_write_P(PSTR("Umlaut \n"), false);
            break;
        default:
            oled_write_P(PSTR(" Undef \n"), false);
    }
}

void oled_task_user(void) {
    keyboard_state_t keyboard_state = get_keyboard_state();
    if (!keyboard_state_equal(keyboard_state, last_keyboard_state)) {
        if (keyboard_state.keypress_count != last_keyboard_state.keypress_count) {
            last_event = timer_read32();
            keypress_event(keyboard_state.keypress_count);
        }

        last_keyboard_state = get_keyboard_state();
        last_keyboard_state_change = timer_read32();
        render_title();
        render_modifiers(keyboard_state);
        render_layer(keyboard_state);
    }

    if(timer_elapsed32(last_keyboard_state_change) > STANDBY_TIMEOUT) {
        oled_off();
        return;
    }

    render_anim();
    // render_test();
}
