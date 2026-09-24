#include <iostream>

// Lab 5 — Johan Zuniga
// CIS 5 Week 05 · Eligibility check

int main() {
  int age = 0;
  double gpa = 0.0;

  // Ask for age and GPA before reading each answer
  std::cout << "Age? ";
  std::cin >> age;

  std::cout << "GPA? ";
  std::cin >> gpa;

  // Thresholds: adult at 18, honors at 3.5
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;

  if (adult && honors) {
    std::cout << "Eligible for the honors program.\n";
  }
  else if (adult || honors) {
    std::cout << "Halfway there. One requirement met.\n";
  }
  else {
    std::cout << "Not eligible yet.\n";
  }


  return 0;
}
