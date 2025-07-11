Build with GPIO control:

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/;/workspaces/zmk/zmk-gpio-behavior" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_left vista508"

Working for both halves including cirque:

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/;/workspaces/zmk/cirque-input-module/" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_right"

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/;/workspaces/zmk/cirque-input-module/" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_left vista508"

Bootloader upload:
arm-none-eabi-gdb "/Users/ryan/Downloads/rolio/rolio_bootloader-0.9.2-1-gce77c55_s140_6.1.1.hex" -quiet --batch -ex "target extended-remote /dev/cu.usbmodem81D46A981" -ex "mon tpwr enable" -ex "mon swdp_scan" -ex "att 1" -ex "echo \nFlashing\n" -ex "load " -ex "echo \nVerifying\n" -ex "compare-sections" -ex "mon hard_srst" -ex "detach" -ex "echo \nBootloader upload complete\n" -ex "quit"
