#include "node.h"
#pragma once

class stack{
 private:
  node* head;
 public:
  stack();
  void push(char data);
  char pop();
  char peek();
  void print();
};