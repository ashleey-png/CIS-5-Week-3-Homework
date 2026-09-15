#include <iostream>
#include <string>

// Homework 3 — Ashley Duran
// CIS 5 Week 03 · Types & variables

int main() {
  const int CURRENT_YEAR = 2026;

  // TODO: Lab 3 boxes — initialize on the same line
std::string name = "Ashley";
int age = 24;
double height_m = 1.5748;
char initial = 'A';
bool student = true;

  // TODO: two more from this week's menu
int credits = 130;
double gpa = 2.87;

  // TODO: a comment that explains a type choice (why int, why double, or why const)
// I used int for both age and credits because they are both counted in whole numbers. 

  std::cout << "=== About me ===\n";
  // TODO: labeled lines from the names
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Height (m): " << height_m << "\n";
  std::cout << "Initial: " << initial << "\n";
  std::cout << "Student: " << std::boolalpha << student << "\n";
  std::cout << "Credits: " << credits << "\n";
  std::cout << "GPA: " << gpa << "\n";
  std::cout << "Current Year: " << CURRENT_YEAR << "\n";

  // TODO: one short paragraph from those same names — not leftover quotes
std::cout <<"My name is " << name << " and I go to RCC. I am " << age << " years old and have a height of " << height_m << " meters. "
            << "My initial is " << initial << " and I am currently a student. "
            << "I have completed " << credits << " credits with a GPA of "
            << gpa << ". The current year is " << CURRENT_YEAR << ".\n";


  // TODO: change one value from a first choice. Comment the old value,
  // The old credit vaule was 120. 

  // the new value, and why the console followed.
// The new value is 130 and the console now prints 130, as the value is now stored in the credits. 

  // TODO: two lines that would not compile — leave them commented
  // Example shape (write your own, with the reason):
  // int age = "nineteen";   // would not compile — ...
  // CURRENT_YEAR = 2027;    // would not compile — ...


//char initial = "A"; this will not compile with char because the initial "A" is a string, while char will only accept ONE character in SINGLE quotes.
//int credits = "one hundred fifty"; this will not compile because the value is also a string, and int only accepts integers.

  return 0;
} 