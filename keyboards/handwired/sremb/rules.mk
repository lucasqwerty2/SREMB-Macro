# Hardware Features
ENCODER_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
EXTRAKEY_ENABLE = yes

# Try disabling LTO to resolve the linker "undefined reference" errors
LTO_ENABLE = no

# Vial core feature flags
# Explicitly adding VIA_ENABLE ensures the dynamic keymap subsystem initializes
VIA_ENABLE = yes
VIAL_ENABLE = yes

# Disable unused advanced features
COMBO_ENABLE = no
TAP_DANCE_ENABLE = no
KEY_OVERRIDE_ENABLE = no