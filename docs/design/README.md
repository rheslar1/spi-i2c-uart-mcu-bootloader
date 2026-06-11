# SPI/I2C/UART MCU Bootloader Design Package

## Purpose

Bootloader that reprograms an MCU over UART, SPI, or I2C with packet framing, CRC checks, flash erase/write control, image validation, and recovery mode.

This design package turns the project concept into an implementation-ready engineering plan. It defines system boundaries, runtime responsibilities, interface contracts, validation evidence, and the staged path from host simulation to target hardware.

## Project Profile

| Field | Value |
| --- | --- |
| Portfolio category | Senior repo example |
| Repository | `rheslar1/spi-i2c-uart-mcu-bootloader` |
| Primary stack | C++17, C++ Design Patterns, SOLID, Bare metal C, UART, SPI, I2C, CRC32, Flash driver |
| Review proof point | Board-level protocol handling, robust firmware transfer, boot safety, and hardware/software integration under tight constraints. |

## Package Contents

| Document | Description |
| --- | --- |
| [System Design](system-design.md) | Architecture, runtime flow, state model, component responsibilities, and failure model. |
| [Requirements](requirements.md) | Functional, non-functional, safety, security, and traceability requirements. |
| [Interface Control](interface-control.md) | Hardware/software boundaries, adapter contracts, data contracts, and integration surfaces. |
| [Runtime Design](runtime-design.md) | C++17/SOLID module design, control loop, data processing, persistence or telemetry flow. |
| [Validation Plan](validation-plan.md) | Host, target, CI, hardware, security, and production validation strategy. |
| [Implementation Roadmap](implementation-roadmap.md) | Phased plan for building, testing, and hardening the project. |
| [System UML Draw.io](diagrams/system-design.drawio) | Editable diagram source. |
| [System UML PNG](diagrams/system-design.png) | Rendered diagram for quick review. |

## Design Principles

- Use C++17 value types for deterministic data contracts.
- Keep target-specific APIs behind narrow adapter interfaces.
- Apply SOLID boundaries so runtime orchestration does not depend directly on hardware drivers, transport libraries, or persistence details.
- Keep host-buildable tests aligned with target behavior through scripted adapters.
- Treat diagnostics, failure modes, and validation evidence as first-class deliverables.
