// Name: Linked List
// Author: Samet Arslan
// Date: 4/25/2024
// Course: CS 215
// File: LinkedList.cpp

#include "LinkedList.h"
#include <iostream>

// Constructor
LinkedList::LinkedList() : head(nullptr) {}

// Destructor
LinkedList::~LinkedList() {
  Node* current = head;
  while (current != nullptr) {
    Node* temp = current;
    current = current->next;
    delete temp;
  }
  head = nullptr;
}

// Append function
void LinkedList::append(int data) {
  Node* newNode = new Node(data);
  if (head == nullptr) {
    head = newNode;
  } else {
    Node* current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = newNode;
  }
}

//Insert function
void LinkedList::insert(int data, int position) {
  if (position < 0) {
    return; // Invalid position
  }

  Node* newNode = new Node(data);
  if (position == 0) {
    newNode->next = head;
    head = newNode;
  } else {
    Node* current = head;
    Node* previous = nullptr;
    int count = 0;
    while (current != nullptr && count < position) {
      previous = current;
      current = current->next;
      count++;
    }

    if (current == nullptr) {
      // Insert at the end
      previous->next = newNode;
    } else {
      previous->next = newNode;
      newNode->next = current;
    }
  }
}

// Delete function
void LinkedList::deleteNode(int position) {
  if (position < 0) {
    return; // Invalid position
  }

  if (position == 0) {
    Node* temp = head;
    head = head->next;
    delete temp;
  } else {
    Node* current = head;
    Node* previous = nullptr;
    int count = 0;
    while (current != nullptr && count < position) {
      previous = current;
      current = current->next;
      count++;
    }

    if (current != nullptr) {
      previous->next = current->next;
      delete current;
    }
  }
}

// Print function
void LinkedList::print() {
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data << " ";
    current = current->next;
  }
  std::cout << std::endl;
}
