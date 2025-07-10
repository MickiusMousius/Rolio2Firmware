Build command:

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_left vista508"

Build with GPIO control:

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/;/workspaces/zmk/zmk-gpio-behavior" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_left vista508"

Working for both halves including cirque:

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/;/workspaces/zmk/cirque-input-module/" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_right"

root@4076967e2233:/workspaces/zmk/app# rm -fr build ; west build -b "rolio3" -S studio-rpc-usb-uart -- -DZMK_EXTRA_MODULES="/workspaces/zmk/zmk-userspace/;/workspaces/zmk/rolio/;/workspaces/zmk/cirque-input-module/" -DZMK_CONFIG="/workspaces/zmk/rolio/config" -DSHIELD="rolio_left vista508"
