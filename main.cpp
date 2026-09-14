#include <iostream>
#include <string>

// Lab 3 — Freesia Garcia
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO: declare and initialize on the same line
  std::string name = "Freesia Garcia";
  int age = 19;
  double height_m = 1.67;
  char initial = 'F';
  bool student = true;

  std::cout << "=== About me ===\n";
  // TODO: labeled prints from the variable names + CURRENT_YEAR
  std::cout << "Name: " << name << '\n';
  std::cout << "Height (m): " << height_m << '\n';
  std::cout << "Initial: " << initial << '\n';
  std::cout << "Student: " << std::boolalpha << student << '\n';
  std::cout << "Current Year: " << CURRENT_YEAR << '\n';

  return 0;
}
}
