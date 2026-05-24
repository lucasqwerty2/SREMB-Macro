[![License: CC BY-NC 4.0](https://img.shields.io/badge/License-CC%20BY--NC%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-nc/4.0/)

# SREMB 2x4 MX Macro Pad (OLED + Rotary Encoder)

A custom 8-key mechanical macro pad built around the Raspberry Pi Pico (RP2040), featuring a 1.3" I2C OLED display and EC11 rotary encoder for media and system control.

---

## Features

- 8x MX mechanical switches (2x4 grid)
- Raspberry Pi Pico (RP2040)
- 1.3" OLED display
- EC11 rotary encoder with push switch
- USB-C
- Fully programmable keymap
- Supports layers (depending on firmware)

---

## Main Components

- MCU: Raspberry Pi Pico (RP2040)
- Switches: MX-style mechanical switches
- Display: 1.3" OLED (I2C)
- Encoder: EC11 rotary encoder
- Firmware: QMK

---

## Bill Of Materials

-  Raspberry Pi Pico Board RP2040: https://s.click.aliexpress.com/e/_c3NDPDzn

-  1.3 Inch OLED Display with EC11 Rotary Encoder: https://s.click.aliexpress.com/e/_c3gGm5gl
  
-  8 MX style switches: https://s.click.aliexpress.com/e/_c4Xbu34N
  
-  6x M2 Threaded Heat Inserts (3.5MM OD, 3MM length): https://s.click.aliexpress.com/e/_c37dvqgp
  
-  4x M2 10mm Screws: https://s.click.aliexpress.com/e/_c3lXKoyZ

-  4x M3 Threaded Heat Inserts (4MM OD, 4MM length): https://s.click.aliexpress.com/e/_c4CYoKlT

-  4x M3 6MM Screws: https://s.click.aliexpress.com/e/_c3ZKYKNb

---

## Firmware Setup

### 1. Install QMK MSYS

Download and install QMK MSYS

Open QMK MSYS after installation

Complete the initial setup process and allow it to install all required dependencies


### 2. Add the SREMB Keyboard Files

Locate the folder named: sremb

Copy the entire folder into: qmk_firmware/keyboards/handwired

After copying, the folder structure should look like this: qmk_firmware/keyboards/handwired/sremb


### 3. Compile and Flash the Firmware

Open QMK MSYS and run: qmk compile -kb handwired/sremb -km default

Then flash the firmware using: qmk flash -kb handwired/sremb -km default

---

## Pinout & Wiring

### MX Switch Matrix:
- GP9:  Row0
- GP10:  Row1
- GP11: Col0
- GP12: Col1
- GP13: Col2
- GP14: Col3

### OLED Display:
- GP4: SDA
- GP5: SCL

### Rotary Encoder:
- GP6: TRA
- GP7: TRB
- GP8: PSH


### Wiring Matrix Layout:
I didn't put 3v and gng pinouts in this but those are pretty self explanitory 
<img width="1341" height="927" alt="Screenshot 2026-05-24 103130" src="https://github.com/user-attachments/assets/79217557-3da0-4322-ba2f-bdd17784218f" />
