#include QMK_KEYBOARD_H

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


    [0] = LAYOUT_ortho_2x4(
        KC_D, KC_F,    KC_J,   KC_K,
        KC_V, QK_BOOT, KC_ENT, QK_RBT
        //fxR is temporarily bootloader for testing purposes

        //KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
        //KC_P0,   KC_PDOT, KC_PENT, KC_PPLS
    )
};
