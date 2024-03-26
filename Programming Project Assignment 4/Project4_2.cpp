#include <iostream>
#include <string>

using namespace std;

int split(const string& str, string words[], int max_words, char delimiter = ' ') {
  int word_index = 0;
  string word;
  for (char c : str) {
    if (c == delimiter || word.empty()) {
      if (!word.empty() && word_index < max_words) {
        words[word_index++] = word;
      }
      word.clear();
    } else {
      word += c;
    }
  }
  if (!word.empty() && word_index < max_words) {
    words[word_index++] = word;
  }
  return word_index;
}

string join(const string words[], int num_words, char delimiter = ' ') {
  string joined_str;
  for (int i = 0; i < num_words; ++i) {
    if (i > 0) {
      joined_str += delimiter;
    }
    joined_str += words[i];
  }
  return joined_str;
}

int main() {

  string string1="I like pizza.";
  string string2="I,miss,summer.";
  string string3="The movie was good.";
  string string4="Python is slow.";
  string string5="I don't like pineapples.";



  return 0;
}
