#include QMK_KEYBOARD_H

enum my_keycodes {
    RGB_MODE_CUSTOMTEST = SAFE_RANGE,
    BAR
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */

    /*
    [0] = LAYOUT_ortho_2x4(
        KC_D, KC_F,    KC_J,   KC_K,
        KC_V, QK_BOOT, KC_ENT, QK_RBT
        //fxR is temporarily bootloader for testing purposes
    )
    */
    
    //temporary led keys
    [0] = LAYOUT_ortho_2x4(
        RGB_MODE_CUSTOMTEST, RGB_TOG, RGB_VAI, RGB_VAD,
        RGB_HUI, RGB_MODE_KNIGHT , RGB_M_SN, KC_W
    )
    
    //RGB_M_R, RGB_M_SW


};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_A, KC_S), ENCODER_CCW_CW(KC_L, KC_SCLN)}
};

extern struct rgblight_status_t rgblight_status;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case RGB_MODE_CUSTOMTEST:
        if (record->event.pressed) {
            rgblight_mode(RGBLIGHT_MODE_CUSTOMTEST);
        }
    }

    return true;
}
