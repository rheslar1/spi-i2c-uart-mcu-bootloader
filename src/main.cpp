#include <array>
#include <iostream>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
  virtual std::string_view name() const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }

  std::string_view name() const override {
    return "RequiredEvidenceRule";
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "SPI/I2C/UART MCU Bootloader",
  "Bootloader that reprograms an MCU over UART, SPI, or I2C with packet framing, CRC checks, flash erase/write control, image validation, and recovery mode.",
  "Board-level protocol handling, robust firmware transfer, boot safety, and hardware/software integration under tight constraints.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "Bare metal C",
    "UART",
    "SPI",
    "I2C",
    "CRC32",
    "Flash driver"
  }
};

int main() {
  const RequiredEvidenceRule readinessRule;

  std::cout << profile.title << '\n';
  std::cout << "Summary: " << profile.summary << '\n';
  std::cout << "Evidence target: " << profile.evidenceTarget << '\n';
  std::cout << "Readiness rule: " << readinessRule.name() << '\n';
  std::cout << "SOLID marker: C++17 strategy interface with replaceable readiness rule" << '\n';
  std::cout << "Stack:";

  for (std::size_t index = 0; index < profile.tags.size(); ++index) {
    std::cout << ' ' << profile.tags[index] << (index + 1U == profile.tags.size() ? "" : ",");
  }

  std::cout << '\n';
  return readinessRule.passes(profile.evidenceTarget) ? 0 : 1;
}
