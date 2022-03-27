#include "node.h"
#pragma once

class queue{
 private:
  node* head;
 public:
  queue();
  void enqueue(char data);
  char dequeue();
  void print();
};