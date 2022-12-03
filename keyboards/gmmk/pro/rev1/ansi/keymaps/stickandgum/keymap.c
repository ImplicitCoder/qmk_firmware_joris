/* Copyright 2021 stickandgum GMMK Pro ANSI Enhanced Keymap File
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum my_keycodes {
  LED_TILDE = SAFE_RANGE,
  LED_1,
  LED_2,
  LED_3,
  LED_4,
  LED_5,
  LED_6,
  LED_7,
  LED_8,
  LED_9,
  LED_0,
  LED_MINS,
  LED_EQL,
  QMKBEST
};
// French chars
enum unicode_names {
  E_AIG,
  E_AIG_MAJ,
  E_GRV,
  E_GRV_MAJ,
  E_CIRC,
  E_CIRC_MAJ,
  E_TREMA,
  E_TREMA_MAJ,
  A_CIRC,
  A_CIRC_MAJ,
  A_GRV,
  A_GRV_MAJ,
  C_CEDILLE,
  C_CEDILLE_MAJ,
  CARRE,
  CUBE,
  EURO,
  BAHT,
  COPYRIGHT,
  REGISTERED,
  OMEGA,
  OMEGA_MAJ,
  O_CIRC,
  O_CIRC_MAJ,
  U_GRAV,
  U_GRAV_MAJ,
  OE,
  OE_MAJ,
  PI,
  DEGREE,
  N_TILDE,
  N_TILDE_MAJ,
  MICRO,
  SIGMA,
  INFEQ,
  SUPEQ,
  GUILL_G,
  GUILL_R,
  UNEQUAL,
  PRETTYMUCH,
  INFINIT,
};

const uint32_t PROGMEM unicode_map[] = {
  [E_AIG]  = 0x00E9,  // 0 é
  [E_AIG_MAJ] = 0x00C9,  // 1 É
  [E_GRV]  = 0x00E8,  // 2 è
  [E_GRV_MAJ] = 0x00C8,  // 3 È
  [E_CIRC]  = 0x00EA,  // 4 ê
  [E_CIRC_MAJ] = 0x00CA,  // 5 Ê
  [E_TREMA]  = 0x00EB,  // 6 ë
  [E_TREMA_MAJ] = 0x00CB,  // 7 Ë
  [A_CIRC]  = 0x00E2,  // 8 â
  [A_CIRC_MAJ] = 0x00C2,  // 9 Ê
  [A_GRV]  = 0x00E0,  // 10 Â
  [A_GRV_MAJ] = 0x00C0,  // 11 À
  [C_CEDILLE]  = 0x00E7,  // 12 ç
  [C_CEDILLE_MAJ] = 0x00C7,  // 13 Ç
  [CARRE]  = 0x00B2,  // 14 ²
  [CUBE] = 0x00B3,  // 15 ³
  [EURO]  = 0x20AC,  // 16 €
  [BAHT] = 0x0E3F,  // 17 ฿
  [COPYRIGHT]  = 0x00A9,  // 18 ©
  [REGISTERED] = 0x00AE,  // 19 ®
  [OMEGA]  = 0x03C9,  // 20 ω
  [OMEGA_MAJ] = 0x03A9,  // 21 Ω
  [O_CIRC]  = 0x00F4,  // 22 ô
  [O_CIRC_MAJ] = 0x00D4,  // 23 Ô
  [U_GRAV]  = 0x00F9,  // 24 ù
  [U_GRAV_MAJ] = 0x00D9,  // 25 Ù
  [OE]  = 0x0153,  // 26 œ
  [OE_MAJ] = 0x0152,  // 27 Œ
  [PI] = 0x03C0, // 28 π
  [DEGREE] = 0x00B0, // 29 °
  [N_TILDE]  = 0x00F1,  // 30 ñ
  [N_TILDE_MAJ] = 0x00D1,  // 31 Ñ
  [MICRO]  = 0x00B5,  // 32 µ
  [SIGMA] = 0x03C3,  // 33 σ
  [INFEQ]  = 0x2264,  // 34 ≤
  [SUPEQ] = 0x2265,  // 35 ≥
  [GUILL_G]  = 0x00AB,  // 36 «
  [GUILL_R] = 0x00BB,  // 37 »
  [UNEQUAL]  = 0x2260,  // 38 ≠
  [PRETTYMUCH] = 0x2248,  // 39 ≈
  [INFINIT] = 0x221E,  // 40 ∞
};

// initialize unicode mode
void eeconfig_init_user(void) {
  set_unicode_input_mode(UC_WINC);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5        F6       F7       F8       F9       F10      F11      F12      Prt           Rotary(Mute)
//      ~        1        2        3        4        5         6        7        8        9        0         -       (=)      BackSpc           Del
//      Tab      Q        W        E        R        T         Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G         H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V         B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                                SPACE                               Alt_R    FN       Ct_R     Left     Down     Right

    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,          KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_END,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGUP,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                             KC_SPC,                             KC_DEL, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
/* FRENCH
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |  ² ³   |  é É   |  €     |        |        |  ≈     |  ≠     |        |        |        |  ô Ô   |  °     |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |  â Â   |   ê Ê  |  è È   |  © ®   |        |  «     |        |  »     |  ∞     |  ù Ù   |  œ Œ   |  ω Ω   |  π     |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |  à Â   |        |  ë Ë   |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |  ç Ç   |        |  ฿     |        |        |        |  ñ Ñ   |  µ     |  ≤     |  ≥     |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  /*[_FR] = LAYOUT_ortho_5x15(*/
    /*_______, _______,XP(14,15),XP(0,1), X(16)  , _______, _______,  X(39) ,  X(38) , _______, _______, _______,XP(22,23),  X(29) , _______,*/
    /*_______, XP(8,9), XP(4,5), XP(2,3),XP(18,19), _______,  X(36), _______,  X(37) ,  X(40) ,XP(24,25),XP(26,27),XP(20,21), X(28), _______,*/
    /*_______,XP(10,11), X(33) , XP(6,7), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,*/
    /*_______, _______, _______,XP(12,13),_______, X(17)  , _______, _______, _______,XP(30,31), X(32) , X(34)  ,  X(35) , _______, _______,*/
    /*_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______*/
  /*),*/


    [1] = LAYOUT(
      _______, KC_CALC,   KC_MYCM,  KC_MSEL,  KC_MAIL,   KC_WHOM, _______, _______, _______, _______,  _______,   KC_WAKE, KC_SLEP,   KC_PAUS,          _______,
      _______, _______,   XP(14,15),XP(4,5),  X(16)  ,   _______, _______,  X(39) ,  X(38) , _______,  _______,   XP(20,21), _______,    KC_INS,          KC_SLCK,
      _______, XP(8,9),   XP(6,7),  XP(0,1),  XP(18,19), _______,  X(36),   X(37), XP(24,25), XP(26,27), XP(24,25), XP(22,23), X(28),   QK_BOOT,          KC_BRIU,
      _______, XP(10,11), X(33),    XP(2,3),  _______,   RGB_SAI, RGB_VAI, RGB_HUI, RGB_TOG,  X(40) ,  _______,     X(35),            _______,          KC_BRID,
      _______,             _______, _______, XP(12,13), RGB_RMOD, RGB_VAD, RGB_MOD, RGB_SPI, XP(30,31),  X(32),     X(34),            _______, KC_MPLY, KC_PWR,
      UC_MOD, _______,    _______,                               _______,                             KC_RALT,   _______, KC_APP,    KC_MPRV, KC_MSTP, KC_MNXT
    ),

};

    /*[1] = LAYOUT(*/
        /*_______, KC_CALC, KC_MYCM, KC_MSEL, KC_MAIL,  KC_WHOM, _______, _______, _______, _______, _______, KC_WAKE, KC_SLEP, KC_PAUS,         _______,*/
      /*LED_TILDE, LED_1,  LED_2,   LED_3,   LED_4,    LED_5,   LED_6,   LED_7,   LED_8,   LED_9,   LED_0,   LED_MINS, LED_EQL,  KC_INS,         KC_SLCK,*/
        /*_______, RGB_SAI, RGB_VAI, RGB_HUI, RGB_TOG,  XP(0,1), _______, _______, _______, _______, _______, _______, _______, QK_BOOT,         KC_BRIU,*/
       /*_______, RGB_RMOD, RGB_VAD, RGB_MOD, RGB_SPI, _______,  _______, _______, _______, QMKBEST, _______, _______,         _______,          KC_BRID,*/
        /*_______,          _______, _______, _______, _______,  _______, NK_TOGG, _______, _______, _______, _______,         _______, KC_MPLY, KC_PWR,*/
        /*_______, _______, _______,                             _______,                            KC_RALT, _______, KC_APP, KC_MPRV, KC_MSTP, KC_MNXT*/
    /*),*/
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
  // https://beta.docs.qmk.fm/using-qmk/simple-keycodes/feature_advanced_keycodes#alt-escape-for-alt-tab-id-alt-escape-for-alt-tab
  if (get_mods() & MOD_MASK_CTRL) { // If CTRL is held
    uint8_t mod_state = get_mods(); // Store all  modifiers that are held
    unregister_mods(MOD_MASK_CTRL); // Immediately unregister the CRTL key (don't send CTRL-PgDn) - del_mods doesn't work here (not immediate)
    if (clockwise) {
      tap_code(KC_PGDN);
    } else {
      tap_code(KC_PGUP);
    }
    set_mods(mod_state); // Add back in the CTRL key - so ctrl-key will work if ctrl was never released after paging.
  } else if (get_mods() & MOD_MASK_SHIFT) {
    uint8_t mod_state = get_mods();
    unregister_mods(MOD_MASK_SHIFT);  
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE   // If using the mouse scroll - make sure MOUSEKEY is enabled
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_VOLU);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_VOLD);
      #endif
    }
    set_mods(mod_state);
  } else if (clockwise) { // All else volume.
    tap_code(KC_VOLU);
  } else {
    tap_code(KC_VOLD);
  }
  return true;
}
#endif //ENCODER_ENABLE

#ifdef RGB_MATRIX_ENABLE
static void set_rgb_caps_leds_on(void);
static void set_rgb_scroll_leds_on(void);
static void set_rgb_caps_leds_off(void);
static void set_rgb_scroll_leds_off(void);

// Called on powerup and is the last _init that is run.
void keyboard_post_init_user(void) {
  
   int mods[35] = {0,2,3,4,5,11,17,33,49,55,65,95,97,79,94,85,93,96,90,69,92,67,76,80,91,75,86,68,77,81,92,28,34,39,44};
   int j;
   
   /* output each array element's value */
   for (j = 0; j < 35; j++ ) {
      g_led_config.flags[mods[j]] = LED_FLAG_MODIFIER;
   }

  if (!rgb_matrix_is_enabled()) { 
      rgb_matrix_enable(); 
#ifdef CONSOLE_ENABLE
      uprintf("ERROR! RGB Matrix Enabled and wrote to EEPROM! -How was the RGB Matrix Disabled?");
#endif
     }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
      switch(rgb_matrix_get_flags()) {
          case 0x08:
           uprintf("FLAG: LED_FLAG_INDICATOR ");
           break;
          case 0x04:
           uprintf("FLAG: LED_FLAG_KEYLIGHT ");
           break;
          case 0x02:
           uprintf("FLAG: LED_FLAG_UNDERGLOW ");
           break;
          case 0x01:
           uprintf("FLAG: LED_FLAG_MODIFIER ");
           break;
          case 0xFF:
           uprintf("FLAG: LED_FLAG_ALL ");
           break;
          case 0x00:
           uprintf("FLAG: LED_FLAG_NONE ");
           break;
          default:
           uprintf("FLAG Other: %u ", rgb_matrix_get_flags());
      }
      uprintf("Caps? %d Scroll? %d - MATRIX: %d\n", host_keyboard_led_state().caps_lock, host_keyboard_led_state().scroll_lock, rgb_matrix_is_enabled());
#endif //CONSOLE_ENABLE

  switch (keycode) {
     case RGB_TOG:
      if (record->event.pressed) {
         if (rgb_matrix_get_flags() == LED_FLAG_ALL) {
              rgb_matrix_set_flags(LED_FLAG_NONE);
              rgb_matrix_set_color_all(0, 0, 0);
          } else {
              rgb_matrix_set_flags(LED_FLAG_ALL);
          }
      }
      return false;
    case LED_TILDE:
        rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);          // Can use RGB_M_P built-in keycode instead.
        break;
     case LED_1:
        rgb_matrix_mode(RGB_MATRIX_ALPHAS_MODS);
        break;
    case LED_2:
        rgb_matrix_mode(RGB_MATRIX_GRADIENT_UP_DOWN);
        break;
    case LED_3:
        rgb_matrix_mode(RGB_MATRIX_JELLYBEAN_RAINDROPS);
        break;
    case LED_4:
        rgb_matrix_mode(RGB_MATRIX_BAND_SAT);
        break;
    case LED_5:
        rgb_matrix_mode(RGB_MATRIX_BAND_VAL);
        break;
    case LED_6:
        rgb_matrix_mode(RGB_MATRIX_BAND_SPIRAL_VAL);
        break;
    case LED_7:
        rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);    // Can use RGB_M_R built-in keycode instead.
        break;
    case LED_8:
        rgb_matrix_mode(RGB_MATRIX_CYCLE_PINWHEEL);      // Can use RGB_M_SW built-in keycode instead.
        break;
    case LED_9:
         rgb_matrix_mode(RGB_MATRIX_BREATHING);          // Can use RGB_M_B built-in keycode instead.
        break;
    #ifdef RGB_MATRIX_KEYPRESSES                         // Reactive effects require RGB_MATRIX_KEYPRESSES in config.h
    case LED_0:
        rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_WIDE);
        break;
    #endif //RGB_MATRIX_KEYPRESSES
    #ifdef RGB_MATRIX_FRAMEBUFFER_EFFECTS               // Heatmap and Rain require #define RGB_MATRIX_FRAMEBUFFER_EFFECTS in config.h
    case LED_MINS:
        rgb_matrix_mode(RGB_MATRIX_DIGITAL_RAIN);
        break;
    case LED_EQL:
        rgb_matrix_mode(RGB_MATRIX_TYPING_HEATMAP);
        break;
    #endif //RGB_MATRIX_FRAMEBUFFER_EFFECTS 
    case QMKBEST:
      if (record->event.pressed) { // when keycode QMKBEST is pressed
          SEND_STRING("QMK rocks");
        } else { // when keycode QMKBEST key is released 
          SEND_STRING("!!");
        }
        break;
  }   
 return true;
}

void rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        set_rgb_caps_leds_on();
    } else {
      if (rgb_matrix_get_flags() == LED_FLAG_NONE){
        set_rgb_caps_leds_off();
      }
    }
    if (host_keyboard_led_state().scroll_lock) {
        set_rgb_scroll_leds_on();
    } else {
      if (rgb_matrix_get_flags() == LED_FLAG_NONE){
        set_rgb_scroll_leds_off();
      }
    }
}

// RGB led number layout, function of the key

//  67, led 01   0, ESC    6, F1      12, F2      18, F3   23, F4   28, F5      34, F6   39, F7   44, F8      50, F9   56, F10   61, F11    66, F12    69, Prt       Rotary(Mute)   68, led 12
//  70, led 02   1, ~      7, 1       13, 2       19, 3    24, 4    29, 5       35, 6    40, 7    45, 8       51, 9    57, 0     62, -_     78, (=+)   85, BackSpc   72, Home       71, led 13
//  73, led 03   2, Tab    8, Q       14, W       20. E    25, R    30, T       36, Y    41, U    46, I       52, O    58, P     63, [{     89, ]}     93, \|        75, PgUp       74, led 14
//  76, led 04   3, Caps   9, A       15, S       21, D    26, F    31, G       37, H    42, J    47, K       53, L    59, ;:    64, '"                96, Enter     86, PgDn       77, led 15
//  80, led 05   4, Sh_L   10, Z      16, X       22, C    27, V    32, B       38, N    43, M    48, ,<      54, .<   60, /?               90, Sh_R   94, Up        82, End        81, led 16
//  83, led 06   5, Ct_L   11,Win_L   17, Alt_L                     33, SPACE                     49, Alt_R   55, FN             65, Ct_R   95, Left   97, Down      79, Right      84, led 17
//  87, led 07                                                                                                                                                                      88, led 18
//  91, led 08                                                                                                                                                                      92, led 19

static void set_rgb_caps_leds_on() { 
        rgb_matrix_set_color(0, 255, 0, 0);       //Escape Key
        rgb_matrix_set_color(3, 255, 0, 0);       //capslock key
        rgb_matrix_set_color(5, 255, 0, 0);       //Left CTRL key
        rgb_matrix_set_color(67, 255, 0, 0);      //Left LED 01
        rgb_matrix_set_color(68, 255, 0, 0);      //Right LED 12
        rgb_matrix_set_color(70, 255, 127, 0);    //Left LED 02
        rgb_matrix_set_color(71, 255, 127, 0);    //Right LED 13
        rgb_matrix_set_color(73, 255, 255, 0);    //Left LED 03
        rgb_matrix_set_color(74, 255, 255, 0);    //Right LED 14
        rgb_matrix_set_color(76, 0, 255, 0);      //Left LED 04
        rgb_matrix_set_color(77, 0, 255, 0);      //Right LED 15
        rgb_matrix_set_color(80, 0, 0, 255);      //Left LED 05
        rgb_matrix_set_color(81, 0, 0, 255);      //Right LED 16
        rgb_matrix_set_color(83, 46, 43, 95);     //Left LED 06
        rgb_matrix_set_color(84, 46, 43, 95);     //Right LED 17
        rgb_matrix_set_color(87, 139, 0, 255);    //Left LED 07
        rgb_matrix_set_color(88, 139, 0, 255);    //Right LED 18
        rgb_matrix_set_color(91, 255, 255, 255);  //Left LED 08
        rgb_matrix_set_color(92, 255, 255, 255);  //Right LED 19
}

static void set_rgb_caps_leds_off() {
        rgb_matrix_set_color(0,  0, 0, 0); //Escape Key
        rgb_matrix_set_color(3,  0, 0, 0); //capslock key
        rgb_matrix_set_color(5,  0, 0, 0); //Left CTRL key
        rgb_matrix_set_color(67, 0, 0, 0); //Left LED 01
        rgb_matrix_set_color(68, 0, 0, 0); //Right LED 12
        rgb_matrix_set_color(70, 0, 0, 0); //Left LED 02
        rgb_matrix_set_color(71, 0, 0, 0); //Right LED 13
        rgb_matrix_set_color(73, 0, 0, 0); //Left LED 03
        rgb_matrix_set_color(74, 0, 0, 0); //Right LED 14
        rgb_matrix_set_color(76, 0, 0, 0); //Left LED 04
        rgb_matrix_set_color(77, 0, 0, 0); //Right LED 15
        rgb_matrix_set_color(80, 0, 0, 0); //Left LED 05
        rgb_matrix_set_color(81, 0, 0, 0); //Right LED 16
        rgb_matrix_set_color(83, 0, 0, 0); //Left LED 06
        rgb_matrix_set_color(84, 0, 0, 0); //Right LED 17
        rgb_matrix_set_color(87, 0, 0, 0); //Left LED 07
        rgb_matrix_set_color(88, 0, 0, 0); //Right LED 18
        rgb_matrix_set_color(91, 0, 0, 0); //Left LED 08
        rgb_matrix_set_color(92, 0, 0, 0); //Right LED 19
}

static void set_rgb_scroll_leds_on() { 
        rgb_matrix_set_color(72, 255, 255, 255); // Under Rotary (HOME)
}

static void set_rgb_scroll_leds_off() { 
        rgb_matrix_set_color(72, 0, 0, 0); // Under Rotary (HOME)
}

#endif // RGB_MATRIX_ENABLE
