// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │  Row 0
     * ├───┼───┼───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │  Row 1
     * ├───┼───┼───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │  Row 2
     * ├───┼───┼───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │  Row 3
     * └───┼───┼───┼───┼───┼───┘
     * │ 1 │ 2 │ 3 │ 4 │      Row 4
     * └───┴───┴───┴───┘
     * col 0 col 1 col 2 col 3 col 4 col 5
     */
    [0] = LAYOUT(
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
                 KC_1,    KC_2,    KC_3,    KC_4
    )
};
