
#include QMK_KEYBOARD_H

enum preonic_layers {
  _QWERTY,
  _LOWER,
  _KARJALASTA,
  _RAISE,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  KARJALASTA,
  RAISE,
  BACKLIT
};

#define LWR MO(1)
#define KAJ MO(2)
#define RAISE MO(3)
#define ADJ MO(4)

#define MT_RSFT_ENT MT(MOD_RSFT, KC_ENT)
#define CTL_ESC MT(MOD_LCTL,KC_ESC)
#define CTL_QUOT MT(MOD_RCTL,KC_QUOT)
#define RCMD_LEFT RCMD_T(KC_LEFT)
#define RALT_DOWN RALT_T(KC_DOWN)
#define RCTL_UP RCTL_T(KC_UP)
#define LCMD_RIGHT LGUI_T(KC_RIGHT)
#define SPC_NUM LT(_LOWER,KC_SPC)
#define ALT_W LALT_T(KC_W)
#define ALT_O RALT_T(KC_O)
#define CMD_E LCMD_T(KC_E)
#define CMD_I LCMD_T(KC_I)
#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define CNTRL_D LCTL_T(KC_D)
#define CNTRL_K RCTL_T(KC_K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_ortho_5x12( \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  KC_TAB,  KC_Q,    ALT_W,    CMD_E,    KC_R,    KC_T,    KC_Y,    KC_U,    CMD_I,    ALT_O,    KC_P,    KC_BSPC,  \
  CTL_ESC,  KC_A,    KC_S,    CNTRL_D,    SFT_F,    KC_G,    KC_H,    SFT_J,    CNTRL_K,    KC_L,    KC_SCLN, CTL_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SFT_T(KC_ENT)	,  \
  KC_TRNS, KC_LCTL, KC_LALT, LCMD_RIGHT,   LWR, SPC_NUM,  SPC_NUM,  RAISE,   RCMD_LEFT, RALT_DOWN, RCTL_UP,   KC_ENT  \
),


[_LOWER] = LAYOUT_ortho_5x12( \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_EXLM, KC_AT,  KC_LCBR, KC_RCBR, KC_PIPE, _______, KC_PGDN, KC_PGUP, KC_INSERT, KC_PSCR, KC_DEL,  \
  _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  KC_SLSH, KC_PIPE, \
  _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______, _______, _______, _______, _______, _______, \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______ \
),


[_KARJALASTA] = LAYOUT_ortho_5x12( \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, \
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,  \
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______, \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
  _______, _______, _______, _______,   _______, _______,  _______,  _______,   _______, _______, _______,   _______  \
),

[_RAISE] = LAYOUT_ortho_5x12( \
  _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, KC_VOLU,    _______, _______, _______, _______, _______, KC_DEL,  \
  _______, _______, _______, _______, KC_MUTE, KC_VOLD,   _______,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, _______,   _______,   _______,   _______,  _______,  _______,  _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET  \
),


[_ADJUST] = LAYOUT_ortho_5x12( \
  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,  \
  _______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF, KC_F11, KC_F12, _______,  \
  _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  _______, _______,  _______, _______, \
  _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
)


};
