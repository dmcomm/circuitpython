// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2016 Glenn Ruben Bakke
// SPDX-FileCopyrightText: Copyright (c) 2018 Dan Halbert for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#include "nrfx/hal/nrf_gpio.h"

#define MICROPY_HW_BOARD_NAME       "TG-Watch"
#define MICROPY_HW_MCU_NAME         "nRF52840"

// TG-Gui requires a deeper call stack than normal CircuitPython, this is intentional overkill
#define CIRCUITPY_PYSTACK_SIZE 8192

// the board has a 32mhz crystal but NOT a 32khz one
#define BOARD_HAS_32KHZ_XTAL 0
#define BOARD_HAS_CRYSTAL 1

#if QSPI_FLASH_FILESYSTEM
    #define MICROPY_QSPI_DATA0  NRF_GPIO_PIN_MAP(0, 17)
    #define MICROPY_QSPI_DATA1  NRF_GPIO_PIN_MAP(0, 22)
    #define MICROPY_QSPI_DATA2  NRF_GPIO_PIN_MAP(0, 23)
    #define MICROPY_QSPI_DATA3  NRF_GPIO_PIN_MAP(0, 21)
    #define MICROPY_QSPI_SCK    NRF_GPIO_PIN_MAP(0, 19)
    #define MICROPY_QSPI_CS     NRF_GPIO_PIN_MAP(0, 20)
#endif

#if SPI_FLASH_FILESYSTEM
    #define SPI_FLASH_MOSI_PIN  &pin_P0_17
    #define SPI_FLASH_MISO_PIN  &pin_P0_22
    #define SPI_FLASH_SCK_PIN   &pin_P0_19
    #define SPI_FLASH_CS_PIN    &pin_P0_20
#endif

#define DEFAULT_I2C_BUS_SCL         (&pin_P0_11)
#define DEFAULT_I2C_BUS_SDA         (&pin_P0_12)

#define DEFAULT_SPI_BUS_SCK         (&pin_P0_14)
#define DEFAULT_SPI_BUS_MOSI        (&pin_P0_13)
#define DEFAULT_SPI_BUS_MISO        (&pin_P0_15)

#define DEFAULT_UART_BUS_RX         (&pin_P0_24)
#define DEFAULT_UART_BUS_TX         (&pin_P0_25)
