#include QMK_KEYBOARD_H

// Vial needs multiple layers allocated in code so you can remap them in the GUI
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

/* DIRECT PIN ENCODER BUTTON HANDLING (GP8) */
static bool gp8_pressed = false;

void keyboard_post_init_user(void) {
    gpio_set_pin_input_high(GP8);
}

void matrix_scan_user(void) {
    if (gpio_read_pin(GP8) == 0) {
        if (!gp8_pressed) {
            register_code(KC_MUTE); 
            gp8_pressed = true;
        }
    } else {
        if (gp8_pressed) {
            unregister_code(KC_MUTE); 
            gp8_pressed = false;
        }
    }
}

/* ROTARY ENCODER FALLBACK ROTATION HANDLING */
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {
            tap_code(KC_VOLU); 
        } else {
            tap_code(KC_VOLD); 
        }
    }
    return false;
}