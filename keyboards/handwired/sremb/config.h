#pragma once

#define I2C1_SDA_PIN GP4 
#define I2C1_SCL_PIN GP5 
#define I2C_DRIVER I2CD1

// Vial Keyboard UID (Randomly generated 8-byte signature)
#define VIAL_KEYBOARD_UID {0x42, 0x8A, 0xC4, 0x11, 0x9F, 0x33, 0xD2, 0x55}

// Vial Security Unlock Combo
// This sets the unlock combo to Matrix Row 0 / Col 0, and Row 0 / Col 1
// (Usually the first two keys on your macropad)
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }