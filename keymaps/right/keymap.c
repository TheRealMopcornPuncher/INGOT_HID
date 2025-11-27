#include QMK_KEYBOARD_H

enum layer_names {
    BS,
    FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BS] = LAYOUT(
        KC_INS, KC_END, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,  
        KC_NO, KC_PSCR, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
        KC_HOME, KC_NO, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
        KC_NO, KC_SPC, KC_N, KC_M, KC_COMM, KC_DOT, KC_MINS, KC_SLSH,
        KC_NO, KC_RALT, KC_RCTL, KC_LBRC, KC_RBRC, KC_QUOT, KC_UP, KC_EQL,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [FN] = LAYOUT(
        KC_F9, KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};