#include QMK_KEYBOARD_H

enum layer_names {
    BS,
    FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BS] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MPRV, KC_MNXT,
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_MUTE, KC_NO,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_NO, KC_MPLY,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SPC, KC_NO,
        MO(FN), KC_LWIN, KC_BRIU, KC_BRID, KC_SLEP, KC_LCTL, KC_LALT, KC_NO,
        KC_CPNL, KC_PWR, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO
    ),

    [FN] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    )
};