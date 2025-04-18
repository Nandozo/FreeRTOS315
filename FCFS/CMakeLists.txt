cmake_minimum_required(VERSION 3.14)

# Make project data accessible to compiler
add_compile_definitions(APP_NAME="${APP_5_NAME}")
add_compile_definitions(APP_VERSION="${APP_5_VERSION_NUMBER}")
add_compile_definitions(BUILD_NUM=${BUILD_NUMBER})

#Include app source code file(s)
add_executable(${APP_5_NAME}
    ${APP_5_SRC_DIRECTORY}/main.cpp
    ${COMMON_CODE_DIRECTORY}/ht16k33.cpp
    ${COMMON_CODE_DIRECTORY}/i2c_utils.cpp
    ${COMMON_CODE_DIRECTORY}/utils.cpp
    ${COMMON_CODE_DIRECTORY}/mcp9808.cpp
)

# Link to built libraries
target_link_libraries(${APP_5_NAME} LINK_PUBLIC
    pico_stdlib
    hardware_i2c
    FreeRTOS
)

#Enable/disable STDIO via USB and UART
pico_enable_stdio_usb(${APP_5_NAME} 1)
pico_enable_stdio_uart(${APP_5_NAME} 0)

#Enable extra build products
pico_add_extra_outputs(${APP_5_NAME})