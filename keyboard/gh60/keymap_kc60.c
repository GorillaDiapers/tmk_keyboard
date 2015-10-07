#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer COLEMAK
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Bkspc |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * | fn1  |  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  K|  M|  ,|  .|  /|  Shift   |
     * |-----------------------------------------------------------'
     * | Ctrl|Gui|Alt  |          fn0          |Alt  |Gui|App|Ctrl |
     * `-----------------------------------------------------------'
     */
     KEYMAP_ANSI(
     	ESC ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL ,BSPC, \
        TAB ,   Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC,BSLS, \
        FN1 ,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT,      ENT, \
        LSFT,   Z,   X,   C,   V,   B,   K,   M,COMM,DOT ,SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,APP ,RCTL),

    /* Layer 1: QWERTY
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Bkspc |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |fn1   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  Shift   |
     * |-----------------------------------------------------------'
     * | CTRL|Gui|Alt  |          fn0          |Alt  |Gui|APP|CTRL |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
    	ESC ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL ,BSPC, \
        TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSLS, \
         FN1,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENT , \
        LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM,DOT ,SLSH,          RSFT, \
        LCTL,LGUI,LALT,          FN0,                     RALT,RGUI,APP ,RCTL),

   /* Layer 2: QWERTY Gaming
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Bkspc |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   up     |
     * |-----------------------------------------------------------'
     * | CTRL|Gui|Alt  |          space        |fn   | lt| dn| rt  |
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
    	ESC ,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS,EQL ,BSPC, \
        TAB ,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,BSLS, \
        CAPS,   A,   S,   D,   F,   G,   H,   J,   K,   L,SCLN,QUOT,     ENT , \
        LSFT,   Z,   X,   C,   V,   B,   N,   M,COMM,DOT ,SLSH,            UP, \
        LCTL,LGUI,LALT,          SPC,                      FN6,LEFT,DOWN,RGHT),

		   
	 /* Layer 3: Disable Win keys
 */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,  NO,TRNS,          TRNS,                    TRNS,  NO,TRNS,TRNS),  
	   
	

	 /* Layer 4: arrow keys
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |    up    |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     | lt|dn |right|
     * `-----------------------------------------------------------'
     */ 
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            UP, \
        TRNS,TRNS,TRNS,          TRNS,                     TRNS,LEFT,DOWN,RGHT),  		

		   
	  /* Layer 5: SPACEFN
     * ,-----------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |
     * |-----------------------------------------------------------|
     * |     |   | M1| MU| M2|aro|   |HOM| UP|END|PRT|SCL|PAU| INS |
     * |-----------------------------------------------------------|
     * | caps |   | ML| MD| MR|   |PGU| LT| DN| RT| V-| V+|  MUTE  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |SPC|PGD|   | T-| T+|PAU|  pgup    |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |hom|pgd| end |
     * `-----------------------------------------------------------'
     */ 
    KEYMAP_ANSI(
    	GRV , F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,DEL ,  \
        TRNS,TRNS,BTN1,MS_U,BTN2, FN8,TRNS,HOME,  UP, END,PSCR,SLCK,PAUS,INS ,  \
        CAPS,TRNS,MS_L,MS_D,MS_R,TRNS,PGUP,LEFT,DOWN,RGHT,VOLD,VOLU,     MUTE,  \
        TRNS,TRNS,TRNS,TRNS,TRNS, SPC,PGDN,TRNS,MPRV,MNXT,MPLY,          PGUP,  \
        TRNS,TRNS,TRNS,            TRNS,                  TRNS,HOME,PGDN, END),
	   
		   
		   
	 /* Layer 6: numlock
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   | 7 | 8 | 9 | 0 | - | = |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   | 4 | 5 | 6 | : | + | * |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   | 1 | 2 | 3 | - |   |  Enter |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   | 0 | , | . | / |          |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
     */ 
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,   0,MINS, EQL,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   4,   5,   6, FN5,PPLS,PAST,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   1,   2,   3,MINS,TRNS,      ENT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   0,COMM, DOT,SLSH,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),  
	   
		   
 /* Layer 7: GAME FUNCTIONS
     * ,-----------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  DEL  |
     * |-----------------------------------------------------------|
     * |     |   | up|   |   |gam|   |   |   |   |PRT|SCL|PAU|  INS|
     * |-----------------------------------------------------------|
     * |      | lt| dn| rt|   |   |   |   |   |   | V-| V+|  MUTE  |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   | T-| T+|PAU| PGUP     |
     * `-----------------------------------------------------------'
     * |     |winl|     |                      |     |HOM|PDN|END  |
     * `-----------------------------------------------------------'
     */ 
   KEYMAP_ANSI(
   	GRV , F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,DEL , \
        TRNS,TRNS,  UP,TRNS,TRNS, FN2,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,INS , \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,VOLU,     MUTE, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MNXT,MPLY,          PGUP, \
        TRNS, FN7,TRNS,           TRNS,                    FN6,HOME,PGDN, END),
		   
		   

};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_TAP_KEY(5, KC_SPACE),    // SpaceFN Layer
	[1] = ACTION_LAYER_TAP_KEY(6, KC_BSPC),     // Numpad layer  
	[2] = ACTION_DEFAULT_LAYER_SET(0),          // Colemak layout
	[3] = ACTION_DEFAULT_LAYER_SET(1),          // QWERTY layout
	[4] = ACTION_DEFAULT_LAYER_SET(2),          // Game layout
	[5] = ACTION_MODS_KEY(MOD_LSFT, KC_SCLN),   // Colon
	[6] = ACTION_LAYER_SET_CLEAR(7),            // Game function layer
	[7] = ACTION_LAYER_TOGGLE(3),               // Lock Win keys
	[8] = ACTION_LAYER_TOGGLE(4),               // Toggle arrow keys
	};
