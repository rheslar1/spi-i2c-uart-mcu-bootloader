# SPI/I2C/UART MCU Bootloader Design Package

## Purpose

Bootloader that reprograms an MCU over UART, SPI, or I2C with packet framing, CRC checks, flash erase/write control, image validation, and recovery mode.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/spi-i2c-uart-mcu-bootloader` |
| Primary stack | C++17, C++ Design Patterns, SOLID, Bare metal C, UART, SPI, I2C, CRC32, Flash driver |
| Review proof point | Board-level protocol handling, robust firmware transfer, boot safety, and hardware/software integration under tight constraints. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
