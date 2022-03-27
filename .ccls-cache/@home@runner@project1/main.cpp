#include "queue.h"
#include "stack.h"
#include <iostream>
using namespace std;

bool isDigit(char input) {
  if (input >= '0' && input <= '9') {
    return true;
  } else {
    return false;
  }
}

int main() {

  queue *new_queue = new queue();
  stack *new_stack = new stack();

  char input[100] = "1*3";
  // char output[100];
  // cin >> input;
  int index_input = 0;
  int indexOutput = 0;
  // adding space between tokens
  /* while (indexInput < sizeof(input)){
    output[indexOutput] = input[indexInput];
    indexInput++;
    indexOutput++;
    output[indexOutput] = ' ';
    indexOutput++;
  }
  */
  // cout << output << endl;
  // indexOutput = 0;
  while (index_input < sizeof(input)) {
    // char is an int
    if (isDigit(input[index_input])) {
      new_queue->enqueue(input[index_input]);
    // char is an op
    } else {
      // check if stack is empty
      if (new_stack->peek() == 0){
        new_stack->push(input[index_input]);
      }
    }
    index_input++;
  }
  
  while (new_stack->peek() != 0){
    new_queue->enqueue(new_stack->pop());
  }

  new_queue->print();
  return 0;
  }