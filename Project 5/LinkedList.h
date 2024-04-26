// Name: Linked List
// Author: Samet Arslan
// Date: 4/25/2024
// Course: CS 215
// File: LinkedList.h

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


// Nodes are elements of a list
class Node {
public:
  int data;
  Node* next;

  Node(int data) : data(data), next(nullptr) {}
};

// Linked list class
class LinkedList {
public:
  // Constructor and destructor
  LinkedList();
  ~LinkedList();


  // Member functions
  void append(int data);
  void insert(int data, int position);
  void deleteNode(int position);
  void print();

private:
  // Start of the list
  Node* head;
};

#endif
