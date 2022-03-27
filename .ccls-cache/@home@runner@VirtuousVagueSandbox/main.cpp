#include <iostream>
#include "stack.h"
#include "queue.h"
using namespace std;

bool isDigit(char input){
    if (input >= '0' && input <= '9'){
      return true;
    } else {
      return false;
    }
}

int main(){

  queue* new_queue = new queue();
  stack* new_stack = new stack();
  
  char input[100] = "1+2";
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
  indexOutput = 0;
  while (indexOutput < sizeof(input)){
    // char is an int
    if (isDigit(input[index_input])){
      new_queue->enqueue(input[index_input]);
    // char is an op
    } else {
      new_stack->push(input[index_input]);
    }
    index_input++;
  }

  new_queue->print();
  new_stack->print();
  return 0;
}