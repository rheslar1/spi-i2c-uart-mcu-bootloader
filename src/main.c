#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "SPI/I2C/UART MCU Bootloader",
  "Bootloader that reprograms an MCU over UART, SPI, or I2C with packet framing, CRC checks, flash erase/write control, image validation, and recovery mode.",
  "Board-level protocol handling, robust firmware transfer, boot safety, and hardware/software integration under tight constraints.",
  {
  "Bare metal C",
  "UART",
  "SPI",
  "I2C",
  "CRC32",
  "Flash driver"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
