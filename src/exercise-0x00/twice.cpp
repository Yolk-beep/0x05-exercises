#include "twice.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Hello, please input a word: " << endl;
  string word;
  getline(cin, word);
  letter_seen_twice(word);
  letter_seen_twice("Welcome to the wonderful world of software engineering");
  letter_seen_twice("Uncopyrightable");
  return 0;
}

// Exercise 0x00 && Exercise 0x01
void letter_seen_twice(std::string text)
{
  int length = text.length();
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (text[i] == text[j])
      {
        cout << "Hurdyderp, first duplicating letter found: " << text[i] << " in place: " << j+1 << "," << i+1 << " in string " << text << endl;
        return;
      }
    }
    // Hint: You'll probably want a nested for-loop (one for the current character and one for the characters you've seen before)
  }
  cout << "Hurdyderp, no duplicating letters found in string: " << text << endl;
}