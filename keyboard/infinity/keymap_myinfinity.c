#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer COLEMAK
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  '|  \|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|  [|  ]|  Bsp|
     * |-----------------------------------------------------------|
     * | fn1  |  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  K|  M|  ,|  .|  /|Shift |Del|
     * |-----------------------------------------------------------'
     * | Ctrl|Gui|Alt  |          fn0          |Alt  |Gui|App|Ctrl |
     * `-----------------------------------------------------------'
     */
    [0] =
    KEYMAP(ESC ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL , GRV, BSLS, \
           TAB ,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC,BSPC, \
           FN1 ,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,      ENT,  \
           LSFT,   Z,   X,   C,   V,   B,   K,   M,COMM,DOT ,SLSH,     RSFT, DEL, \
           LCTL,LGUI,LALT,               FN0,                RALT,RGUI,APP ,RCTL),

    /* Layer 1: QWERTY
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|  \|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| BSP |
     * |-----------------------------------------------------------|
     * |CAPSL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |DEL|
     * |-----------------------------------------------------------'
     * | CTRL|Gui|Alt  |         Space         |Alt  |Gui|APP|CTRL |
     * `-----------------------------------------------------------'
     */
    [1] =
    KEYMAP(ESC ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL, GRV,BSLS, \
           TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSPC, \
           CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,      ENT,  \
           LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM,DOT ,SLSH,     RSFT, DEL, \
           LCTL,LGUI,LALT,              FN0,                 RALT,RGUI, APP,RCTL),

 
 /* 2: Disable Win keys */
    [2] = 
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, \
        TRNS,  NO,TRNS,          TRNS,                    TRNS,  NO,TRNS,TRNS),  



  /* Layer 3: SPACEFN
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |INS|
     * |-----------------------------------------------------------|
     * |     |   | M1| MU| M2|   |   |HOM| UP|END|PRT|SCL|PAU|  DEL|
     * |-----------------------------------------------------------|
     * | BSPC |   | ML| MD| MR|   |PGU| LT| DN| RT| V-| V+|  MUTE  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |SPC|PGD|   | T-| T+|PAU|      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |LCK|mode |
     * `-----------------------------------------------------------'
     */ 
    [3] = 
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS,INS,   \
           TRNS,TRNS,BTN1,MS_U,BTN2,TRNS,TRNS,HOME,  UP, END,PSCR,SLCK,PAUS, DEL,      \
           BSPC,TRNS,MS_L,MS_D,MS_R,TRNS,PGUP,LEFT,DOWN,RGHT,VOLD,VOLU,     MUTE,            \
           TRNS,TRNS,TRNS,TRNS,TRNS, SPC,PGDN,TRNS,MPRV,MNXT,MPLY,     TRNS,TRNS,            \
           TRNS,TRNS,TRNS,              TRNS,                TRNS,TRNS, FN2, FN3),

 /* Layer 4: LOCKED SPACEFN
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |
     * |-----------------------------------------------------------|
     * |     |   | M1| MU| M2|   |   |HOM| UP|END|PRT|SCL|PAU|     |
     * |-----------------------------------------------------------|
     * | BSPC |   | ML| MD| MR|   |PGU| LT| DN| RT| V-| V+|  MUTE  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |PGD|   | T-| T+|PAU|      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |         Space         |     |   |LCK|     |
     * `-----------------------------------------------------------'
     */ 
    [4] = 
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS,INS,   \
           TRNS,TRNS,BTN1,MS_U,BTN2,TRNS,TRNS,HOME,  UP, END,PSCR,SLCK,PAUS, DEL,      \
           BSPC,TRNS,MS_L,MS_D,MS_R,TRNS,PGUP,LEFT,DOWN,RGHT,VOLD,VOLU,     MUTE,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,TRNS,MPRV,MNXT,MPLY,     TRNS,TRNS,            \
           TRNS,TRNS,TRNS,              SPC,                 TRNS,TRNS, FN4,TRNS),
 


 /* Layer 5: GAME MODE
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * | CAPSL|   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   | UP   |FN5|
     * `-----------------------------------------------------------'
     * |     |   |     |         Space         |     | LT| DN| RT  |
     * `-----------------------------------------------------------'
     */ 

    [5] = 
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,       UP,FN5 , \
        TRNS,TRNS,TRNS,           SPC,                    TRNS,LEFT,DOWN,RGHT,  

 /* Layer 6: GAME FUNCTIONS
     * ,-----------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |INS|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |PRT|SCL|PAU|  DEL|
     * |-----------------------------------------------------------|
     * | mode |   |   |   |   |   |   |   |   |  T| V-| V+|  MUTE  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   | T-| T+|PAU| PGUP |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |HOM|PDN|END  |
     * `-----------------------------------------------------------'
     */ 
    [6] = 
    KEYMAP(TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,TRNS,INS,   \
           TRNS, FN4,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, DEL,      \
            FN3,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,VOLU,     MUTE,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MNXT,MPLY,     PGUP,TRNS,            \
           TRNS, FN6,TRNS,             TRNS,                 TRNS,HOME,PGDN, END),
 
 /* Layer 7: numlock
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   | 7 | 8 | 9 | 0 | - | = |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   | 4 | 5 | 6 | : | + | * |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   | 1 | 2 | 3 | - |   |    ent |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   | 0 | , | . | / |      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
     */ 

    [6] = 
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P7,  P8,  P9,  P0,PMIN,PEQL,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P4,  P5,  P6,FN10,PPLS,PAST,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P1,  P2,  P3,PMIN,TRNS,     PENT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  P0,PCMM,PDOT,PSLS,     TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS,  



/* Layer 7: mode switch
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |qwe|col|   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |gam|   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |cap|   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |lck|     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
     */ 

    [7] = 
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS, FN7, FN8,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS, FN9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, \
        TRNS, FN6,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),  


};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(3, KC_SPC),            // SpaceFN Layer
    [1] = ACTION_LAYER_TAP_KEY(7, KC_BSPC),           // Numpad layer
    [2] = ACTION_LAYER_ON(4),                         // Lock SpaceFN
    [3] = ACTION_LAYER_MOMENTARY(7),                  // Layout selection layer
    [4] = ACTION_LAYER_OFF(4),                        // Unlock SpaceFN
    [5] = ACTION_LAYER_MOMENTARY(6),                  // Game function layer
    [6] = ACTION_LAYER_INVERT(2),                     // Lock Win keys
    [7] = ACTION_DEFAULT_LAYER_SET(1),                // QWERTY layout
    [8] = ACTION_DEFAULT_LAYER_SET(0),                // Colemak layout
    [9] = ACTION_LAYER_INVERT(5),                     // Game mode
   [10] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),         // Colon
};

