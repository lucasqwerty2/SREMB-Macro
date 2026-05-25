SREMB Vial Pad Firmware Guide

This guide covers the setup, compilation, and flashing process for the SREMB Vial Pad using the modern QMK/Vial firmware architecture.


1. Prerequisites

Ensure you have QMK MSYS installed on your computer. This provides the environment and tools necessary to compile firmware for the RP2040 microcontroller.


2. Cloning the Repository

Open QMK MSYS and run:

git clone --recursive https://github.com/vial-kb/vial-qmk.git
cd vial-qmk
qmk setup


3. Directory Structure

Place your keyboard files in the keyboards/handwired/ directory. Your structure should look like this:

qmk_firmware/vial-qmk/keyboards/handwired/sremb/
          

5. Compiling the Firmware

From the root vial-qmk folder, run:

qmk compile -kb handwired/sremb -km vial

If successful, the compiler will generate a .uf2 file in the .build/ directory.


6. Flashing the Firmware

    Enter Bootloader Mode: Hold the BOOT button on your RP2040 board while plugging it in (or double-tap the Reset button).

    Mount: Your computer should recognize the board as a storage drive named RPI-RP2.

    Flash: Run the command:

qmk flash -kb handwired/sremb -km vial


If the command does not automatically detect the drive, manually drag and drop the .uf2 file from your .build/ folder onto the RPI-RP2 drive icon.
Notes for Success

Cleaning: If you make structural changes to your folder and the build fails, run qmk clean before compiling again to clear the cache.
