# SPI/I2C/UART MCU Bootloader

Bootloader that reprograms an MCU over UART, SPI, or I2C with packet framing, CRC checks, flash erase/write control, image validation, and recovery mode.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- Bare metal C
- UART
- SPI
- I2C
- CRC32
- Flash driver

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/spi_i2c_uart_mcu_bootloader
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Board-level protocol handling, robust firmware transfer, boot safety, and hardware/software integration under tight constraints.

## Remote

Intended public repository: https://github.com/rheslar1/spi-i2c-uart-mcu-bootloader
