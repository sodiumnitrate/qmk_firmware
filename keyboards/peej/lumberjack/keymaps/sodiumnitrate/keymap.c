 /*
  * sodiumnitrate's keymap
  */

#include QMK_KEYBOARD_H

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

// define custom keycodes
#define KC_EMJ LCTL(LGUI(KC_SPC))   // emoji keyb macos
#define KC_SC LSFT(LGUI(KC_4))      // screenshot macos
#define KC_FSC LSFT(LGUI(KC_3))     // (full)screenshot macos
#define KC_FS LALT(LGUI(KC_F))      // fullscreen macos
#define KC_LS LALT(LGUI(KC_LEFT))   // tile left macos
#define KC_DS LALT(LGUI(KC_DOWN))   // tile down macos
#define KC_US LALT(LGUI(KC_UP))     // tile up macos
#define KC_RS LALT(LGUI(KC_RGHT))   // tile right macos
#define KC_WSC LSFT(LGUI(KC_S))     // windows screenshot

#define KC_TCA LCTL_T(KC_A)         // left ctrl tap mod on A
#define KC_TAS LALT_T(KC_S)         // left alt tap mod on S         
#define KC_LT2D LT(2,KC_D)          // layer 2 tap mod on D
#define KC_LT3F LT(3,KC_F)          // layer 3 tap mod on F   
#define KC_LT4G LT(4,KC_G)          // layer 4 tap mod on G
#define KC_LT4H LT(4,KC_H)          // layer 4 tap mod on H
#define KC_LT3J LT(3,KC_J)          // layer 3 tap mod on J
#define KC_LT2K LT(2,KC_K)          // layer 2 tap mod on K
#define KC_TAL LALT_T(KC_L)         // left alt tap mod on L
#define KC_TCSC LCTL_T(KC_SCLN)     // left ctrl tap mod on :;

#define KC_GMG TG(_GMG)             // toggle gaming mode

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
[_QWERTY] = LAYOUT_ortho_5x12(
    KC_GRV,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,  KC_TCA,   KC_TAS,   KC_LT2D, KC_LT3F, KC_LT4G,         KC_LT4H, KC_LT3J, KC_LT2K, KC_TAL,  KC_TCSC, KC_QUOT,
    KC_LSFT, KC_Z,     KC_X,     KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_GMG,  KC_LCTL,  KC_LALT,  KC_LGUI, GREEN,   KC_SPC,          KC_SPC,  GREEN,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* GREEN
* ,------------------------------------------. ,-----------------------------------------.
 * |  F12 |   F1 |   F2 |  F3  |  F4  |  F5  | |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |   `  |   ~  |   [  |   ]  |   {  | |   }  |   -  |   _  |   =  |   +  |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  | |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |   !  |  @   |   #  |  $   |   %  | |  ^   |   &  |   *  |   (  |  )   |  |   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_GREEN] = LAYOUT_ortho_5x12(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,             KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_TRNS, KC_GRV,  KC_TILD, KC_LBRC, KC_RBRC, KC_LCBR,           KC_RCBR, KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, KC_DEL,
    KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
    KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

/* BLUE
* ,------------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      | EMJ  | | EMJ  |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      | LEFT |  DN  | UP   | RIGT |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      | LGUI | GREN | SPC  | | SPC  | GREN | RGUI |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_BLUE] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______,  KC_EMJ,  KC_EMJ, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* RED
* ,------------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |KC_FS | KC_LS| KC_DS| KC_US| KC_RS|      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |KC_WSC| KC_SC|KC_FSC| |KC_FSC| KC_SC|KC_WSC|      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_RED] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,   KC_FS,   KC_LS,   KC_DS,   KC_US,   KC_RS, _______,
    _______, _______, _______,  KC_WSC,   KC_SC,  KC_FSC,  KC_FSC,   KC_SC,  KC_WSC, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* ADJ
* ,------------------------------------------. ,-----------------------------------------.
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * QK_BOOT|      |      |      |      |      | |      |      |      |      |      |EE_CLR|
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
 */
[_ADJ] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, EE_CLR ,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* GMG
* ,------------------------------------------. ,-----------------------------------------.
 * |      |  1   |  2   |  3   |  4   |  5   | |  6   |   7  |  8   |   9  |   0  |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * `-----------------------------------------' `-----------------------------------------'
*/
[_GMG] = LAYOUT_ortho_5x12(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_GMG,  KC_LCTL, KC_LALT, KC_LGUI, GREEN,   KC_SPC,  KC_SPC,  GREEN,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case GREEN:
      if (record->event.pressed) {
        layer_on(_GREEN);
      } else {
        layer_off(_GREEN);
      }
      return false;
    case RED:
      if (record->event.pressed) {
        layer_on(_RED);
      } else {
        layer_off(_RED);
      }
      return false;
    case BLUE:
        if (record->event.pressed) {
          layer_on(_BLUE);
        } else {
          layer_off(_BLUE);
        }
        return false;
    case GMG:
	if (record->event.pressed) {
		layer_on(_GMG);
	} else {
		layer_off(_GMG);
	}
	return false;
    case ADJ:
        if (record->event.pressed) {
          layer_on(_ADJ);
        } else {
          layer_off(_ADJ);
        }
        return false;
      break;
  }
  return true;
}
