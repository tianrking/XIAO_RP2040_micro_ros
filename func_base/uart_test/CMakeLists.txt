add_executable(uart_usb
        uart_usb.c
        )

target_link_libraries(uart_usb pico_stdlib hardware_adc pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(uart_usb 1)
pico_enable_stdio_uart(uart_usb 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(uart_usb)


