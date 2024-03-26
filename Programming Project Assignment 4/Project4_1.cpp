#include <iostream>
#include <cctype>

void capitalize_sentences(char *str) {
  bool in_sentence = false;
  for (int i = 0; str[i] != '\0'; i++) {
    if (ispunct(str[i]) || str[i] == '.') {
      in_sentence = false;
    } else if (!in_sentence && isalpha(str[i])) {
      str[i] = toupper(str[i]);
      in_sentence = true;
    }
  }
}

void capitalize_sentences(std::string& str) {
  bool in_sentence = false;
  for (char& c : str) {
    if (ispunct(c) || c == '.') {
      in_sentence = false;
    } else if (!in_sentence && isalpha(c)) {
      c = toupper(c);
      in_sentence = true;
    }
  }
}

int main() {
  char text[100];

  std::cout << "Enter a string: ";
  std::cin.getline(text, sizeof(text));

  capitalize_sentences(text);

  std::cout << "Capitalized string: " << text << std::endl;

  return 0;
}
