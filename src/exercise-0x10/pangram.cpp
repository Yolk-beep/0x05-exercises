#include <iostream>
#include "pangram.h"
#include <string>
#include <cctype>
using namespace std;

//Declaring function first to avoid troubles with the usage before declaration.
bool pangram(string text);

int main(int argc, char **argv)
{

  // Test strings
  std::string case_0 = "A quick brown fox jumps over the lazy dog.";
  std::string case_1 = "When zombies arrive quickly, fax judge Pat.";
  std::string case_2 = "The five boxing wizards jump quickly.";
  std::string case_3 = "Amazingly few discotheques provide jukeboxes.";

  // Exercise 0x00 - Setup a test for your implementation
  std::cout << "TEST - Exercise 0x00" << std::endl;
  if (pangram(case_0))
  {
    cout << "The string is a pangram" << endl;
  }
  else
  {
    cout << "The string: " << case_0 << " is not a pangram." << endl;
  }
  if (pangram(case_1))
  {
    cout << "The string is a pangram" << endl;
  }
  else
  {
    cout << "The string: " << case_1 << " is not a pangram." << endl;
  }
  if (pangram(case_2))
  {
    cout << "The string is a pangram" << endl;
  }
  else
  {
    cout << "The string: " << case_2 << " is not a pangram." << endl;
  }
  if (pangram(case_3))
  {
    cout << "The string is a pangram" << endl;
  }
  else
  {
    cout << "The string: " << case_3 << " is not a pangram." << endl;
  }

  // Exercise 0x01 - Setup a test for your implementation
  std::cout << "TEST - Exercise 0x01" << std::endl;

  return 0;
}

// Exercise 0x00 - Implement the function from "pangram.h"

bool pangram(string text)
{
  // First we make an array and set all the indices to false.
  bool unique_letters[26] = {false};
  // We make an int to keep count of unqiue letters.
  int unique_count = 0;
  // We convert all the upper cases to lower cases.
  int length = text.length();
  for (int i = 0; i < length; i++)
  {
    text[i] = tolower(text[i]);
  }
  // We check each character in the string to see if it's a letter. Then we change the index to true, if we haven't seen that letter before.
  for (char c : text)
  {
    if (isalpha(c))
    {
      int index = c - 'a';
      if (index >= 0 && index < 26)
      {
        if (!unique_letters[index])
        {
          unique_letters[index] = true;
          unique_count++;
        }
      }
    }
  }
  return unique_count == 26;
}

// Exercise 0x01 - Implement the function from "program.h"
bool pangram(std::string text, bool printable);