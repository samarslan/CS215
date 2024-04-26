// Name: Linked List
// Author: Samet Arslan
// Date: 4/25/2024
// Course: CS 215
// File: main.cpp

#include "LinkedList.h"
#include <iostream>

int main() {
  LinkedList list;

  list.append(10);
  list.append(20);
  list.append(30);
  list.insert(15, 1);
  list.deleteNode(2);

  std::cout << "List: ";
  list.print();

  return 0;
}
