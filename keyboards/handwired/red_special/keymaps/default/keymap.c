// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/*
// layer names
enum layers {
    _QWERTY = 0,
    _GREEN,
    _BLUE,
    _RED,
    _ADJ,
    _GMG
};

// custom keycodes
enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    GREEN,
    BLUE,
    RED,
    ADJ,
    GMG
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------. ,-----------------------------------------.
 * |   `  |  1   |  2   |  3   |  4   |  5   | |  6   |  7   |  8   |  9   |  0   | BkSp |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Tab  |  Q   |  W   |  E   |  R   |  T   | |  Y   |  U   |  I   |  O   |  P   | Del  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Esc  |A/ctrl|S/ALT |D/L2  |F/L3  |G/L4  | |H/L4  |J/L3  |K/L2  |L/ALT |;/CTRL|  '   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | Shft |  Z   |  X   |  C   |  V   |  B   | |  N   |  M   |  ,   |  .   |  /   | Entr |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | GMG  |CTRL  | Alt  | Cmd  | Green| Spac | | Spac | Green| Left | Down |  Up  | Rght |
 * `-----------------------------------------' `-----------------------------------------'
 */
    [0] = LAYOUT(
        KC_GRV,   KC_1,   KC_2,   KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL,
        KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
        KC_X, KC_LCTL, KC_LALT, KC_LGUI, KC_Y, KC_SPC, KC_SPC, KC_Z, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
    )
};
